//SPDX-License-Identifier: BSD-3-Clause
//SPDX-FileCopyrightText: 2020 Lorenzo Cauli (lorecast162)

//enable multiboot?
#define MULTIBOOT int __gba_multiboot;
MULTIBOOT

typedef unsigned short u16;

//include spheres data and palette
#include "sphere.h"
#include "blauPalette.h"
#include "gruenPalette.h"

//display mode setting macro
#define SetMode(mode) REG_DISPCNT = (mode)

//buttons register
volatile unsigned int *BUTTONS = (volatile unsigned int *)0x04000130;

//video status registers
#define REG_DISPCNT *(volatile unsigned short*)0x4000000
#define BGPaletteMem ((unsigned short*)0x5000000)
#define REG_VCOUNT *(volatile unsigned short*)0x4000006
#define REG_DISPSTAT *(volatile unsigned short*)0x4000004

//sprite registers
#define SpriteMem  ((unsigned short*)0x7000000)
#define SpriteData ((unsigned short*)0x6010000)
#define SpritePal  ((unsigned short*)0x5000200)

//object flags
#define OBJ_MAP_2D 0x0
#define OBJ_MAP_1D 0x40
#define OBJ_ENABLE 0x1000

//various sprite flags
#define ROTATION_FLAG 0x100
#define SIZE_DOUBLE 0x200
#define MODE_NORMAL 0x0
#define MODE_TRANSPARENT 0x400
#define MODE_WINDOWED 0x800
#define MOSAIC 0x1000
#define COLOR_16 0x0
#define COLOR_256 0x2000
#define SQUARE 0x0
#define TALL 0x4000
#define WIDE 0x8000
#define ROTDATA(n) ((n) << 9)
#define HORIZONTAL_FLIP 0x1000
#define VERTICAL_FLIP 0x2000
#define SIZE_8 0x0
#define SIZE_16 0x4000
#define SIZE_32 0x8000
#define SIZE_64 0xC000

#define PRIORITY(n) ( (n) << 10 )
#define PALETTE(n) ( (n) << 12 )

//sprite attributes struct
typedef struct tagSprite {
	unsigned short attribute0;
	unsigned short attribute1;
	unsigned short attribute2;
	unsigned short attribute3;
}Sprite, *pSprite;

Sprite sprites[128];

//gba buttons
#define BTN_UP 64
#define BTN_DOWN 128
#define BTN_LEFT 32
#define BTN_RIGHT 16

void WaitForVBlank(void);
void UpdateSpriteMemory(void);

int main(void) {
	signed short x = 88, y = 48;
	signed short xinc = 1;

	int char_number = 0;
	int n;

	int curPalette = 0;
	int prevPalette = curPalette;

	//set video mode 2 enable objects and map them 1D in memory
	SetMode(2 | OBJ_ENABLE | OBJ_MAP_1D);

	//set all sprites to be at bottom right corner
	for (n = 0; n < 128; n++) {
		sprites[n].attribute0 = 160;
		sprites[n].attribute1 = 240;
	}

	//copy sprites palette
	for( n = 0; n < 256; n++) {
		SpritePal[n] = spherePalette[n];
	}

	//copy red sphere data
	for (n = 0; n < 256*8; n++) {
		SpriteData[n] = sphereData[n];
	}

	//give it attributes
	sprites[0].attribute0 = COLOR_256 | y;
	sprites[0].attribute1 = SIZE_64 | x;
	sprites[0].attribute2 = char_number;

	while(1) {
		//set its x coord
		sprites[0].attribute1 = SIZE_64 | x;

		WaitForVBlank();

		//check if buttons were pressed
		if (*BUTTONS) {
			//switch palette var
			if (!(*BUTTONS & BTN_UP)) curPalette = 1;
			else if (!(*BUTTONS & BTN_DOWN)) curPalette = 2;
			else curPalette = 0;

			//horiz movement
			if (!(*BUTTONS & BTN_LEFT) && x >= 0) x -= xinc;
			else if (!(*BUTTONS & BTN_RIGHT) && (x + sphere_WIDTH) <= 240) x += xinc;
		}

		//check if palette var was changed to avoid copying same stuff over and over again
		if (curPalette != prevPalette) {
			switch (curPalette) {
				case 0:
					for (n = 0; n < 256*8; n++) {
						SpriteData[n] = sphereData[n];
					}
					break;
				case 1:
					for (n = 0; n < 256*8; n++) {
						SpriteData[n] = blauSphereData[n];
					}
					break;
				case 2:
					for (n = 0; n < 256*8; n++) {
						SpriteData[n] = gruenSphereData[n];
					}
					break;
			}
		}

		UpdateSpriteMemory();

		prevPalette = curPalette;
	}
	
	return 0;
}

void WaitForVBlank(void) { while((REG_DISPSTAT & 1)); }

void UpdateSpriteMemory(void) {
	int n;
	unsigned short* tmp;

	tmp = (unsigned short*)sprites;

	for (n = 0; n < 128*4; n++) {
		SpriteMem[n]=tmp[n];
	}
}

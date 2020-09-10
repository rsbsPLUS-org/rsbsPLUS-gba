/**********************************************\
*       sphere.h                               *
*          by dovotos pcx->gba program         *
\**********************************************/
#define  sphere_WIDTH   64
#define  sphere_HEIGHT  64


const u16 sphereData[] = {
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0503, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0605, 0x0505, 0x0505, 0x0405, 0x0C06, 0x0505, 0x0505, 0x0606, 0x1912,
                    0x0505, 0x0605, 0x120C, 0x1D1F, 0x0505, 0x0505, 0x0505, 0x0405, 0x0505, 0x0505,
                    0x0404, 0x0606, 0x0505, 0x0604, 0x0C06, 0x1212, 0x0604, 0x0C06, 0x1919, 0x1D1F,
                    0x1206, 0x1919, 0x231D, 0x2D23, 0x1F12, 0x251D, 0x2D25, 0x3931, 0x251D, 0x2D25,
                    0x3931, 0x3C38, 0x2D25, 0x3831, 0x3C3C, 0x4941, 0x0604, 0x0606, 0x0606, 0x0606,
                    0x0C06, 0x1212, 0x1919, 0x1919, 0x1F19, 0x1F1F, 0x1D1D, 0x1D1D, 0x231D, 0x2525,
                    0x2D2D, 0x2D2D, 0x312D, 0x3931, 0x3939, 0x3939, 0x3C39, 0x3C3C, 0x3C41, 0x3C3C,
                    0x433C, 0x494C, 0x4949, 0x4B49, 0x4B49, 0x5151, 0x5353, 0x5353, 0x0606, 0x0606,
                    0x0606, 0x0406, 0x1919, 0x1919, 0x1212, 0x060C, 0x1D1D, 0x1D1D, 0x1F1F, 0x191F,
                    0x2D2D, 0x2D2D, 0x2525, 0x2323, 0x3938, 0x3939, 0x2D31, 0x2D31, 0x3C3C, 0x413C,
                    0x3C3C, 0x393C, 0x4B4B, 0x494B, 0x4C49, 0x3C41, 0x5353, 0x5353, 0x5151, 0x494B,
                    0x0504, 0x0505, 0x0505, 0x0505, 0x0606, 0x0404, 0x0505, 0x0505, 0x1212, 0x060C,
                    0x0406, 0x0505, 0x1F1D, 0x1219, 0x060C, 0x0406, 0x232D, 0x1D23, 0x121F, 0x0612,
                    0x3139, 0x252D, 0x1D25, 0x1219, 0x383C, 0x3139, 0x252D, 0x1D25, 0x4349, 0x3C3C,
                    0x3138, 0x252D, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0506, 0x0505,
                    0x0505, 0x0505, 0x060C, 0x0504, 0x0505, 0x0505, 0x1219, 0x0606, 0x0405, 0x0505,
                    0x1F23, 0x0C12, 0x0506, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0105, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0503, 0x0505,
                    0x0505, 0x0605, 0x0505, 0x0505, 0x0505, 0x0C06, 0x0505, 0x0505, 0x0405, 0x1206,
                    0x0505, 0x0505, 0x0604, 0x1F12, 0x0505, 0x0505, 0x0C06, 0x1D19, 0x0505, 0x0C06,
                    0x1D19, 0x2525, 0x0605, 0x190C, 0x251D, 0x312D, 0x0C06, 0x1D19, 0x2D25, 0x3839,
                    0x190C, 0x251D, 0x392D, 0x413C, 0x1D19, 0x2D25, 0x3C38, 0x4943, 0x251D, 0x382D,
                    0x433C, 0x5A4B, 0x2D23, 0x3C31, 0x4943, 0x5B53, 0x3125, 0x4338, 0x5A49, 0x605B,
                    0x3931, 0x3C3C, 0x4943, 0x514B, 0x3C38, 0x4943, 0x5A4D, 0x5E53, 0x4C41, 0x5A4B,
                    0x5E54, 0x6260, 0x5149, 0x5E53, 0x6264, 0x6966, 0x5451, 0x6264, 0x6966, 0x6E6E,
                    0x605B, 0x6B62, 0x6E6C, 0x7570, 0x6660, 0x6E69, 0x7570, 0x7675, 0x6C66, 0x706E,
                    0x7375, 0x7A7C, 0x5353, 0x5E5B, 0x6464, 0x6060, 0x6064, 0x6262, 0x6662, 0x666B,
                    0x6B66, 0x6C69, 0x6E6C, 0x6E6E, 0x6C6C, 0x7070, 0x7570, 0x7575, 0x7570, 0x7575,
                    0x7375, 0x7373, 0x7375, 0x7C76, 0x7A7C, 0x7A7A, 0x7C7C, 0x7A7A, 0x7F7D, 0x7F7F,
                    0x7F7D, 0x807F, 0x8480, 0x8483, 0x6060, 0x5E60, 0x5B5E, 0x5353, 0x6B66, 0x6266,
                    0x6262, 0x6460, 0x6E6E, 0x6C6E, 0x6969, 0x666B, 0x7575, 0x7071, 0x6E70, 0x6C6E,
                    0x7373, 0x7573, 0x7575, 0x7075, 0x7A7A, 0x7C7C, 0x767C, 0x7573, 0x7F7F, 0x7D7F,
                    0x7A7A, 0x7C7C, 0x8484, 0x8181, 0x7F80, 0x7D7D, 0x4B51, 0x4349, 0x3C41, 0x3139,
                    0x535B, 0x4D5A, 0x4349, 0x383C, 0x6062, 0x545E, 0x4B5A, 0x414C, 0x6669, 0x6062,
                    0x535E, 0x494D, 0x6C6E, 0x6669, 0x6462, 0x5154, 0x7075, 0x6C6E, 0x626B, 0x5B60,
                    0x7576, 0x7075, 0x696E, 0x6066, 0x7C7C, 0x7573, 0x6E70, 0x6669, 0x2325, 0x191D,
                    0x060C, 0x0505, 0x2D31, 0x1D25, 0x0C19, 0x0506, 0x393C, 0x252D, 0x191D, 0x060C,
                    0x3C43, 0x2D38, 0x1D25, 0x0C19, 0x4349, 0x393C, 0x252D, 0x191D, 0x495A, 0x3C43,
                    0x2D39, 0x1D25, 0x535B, 0x4349, 0x393C, 0x252D, 0x5B60, 0x495A, 0x3C43, 0x2531,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0006, 0x0505, 0x0505, 0x0505, 0x060C, 0x0505, 0x0505, 0x0505,
                    0x0612, 0x0504, 0x0505, 0x0505, 0x121F, 0x0506, 0x0505, 0x0505, 0x191D, 0x060C,
                    0x0505, 0x0505, 0x0505, 0x0405, 0x1206, 0x251D, 0x0505, 0x0605, 0x1F0C, 0x2D25,
                    0x0505, 0x0604, 0x1D19, 0x3125, 0x0505, 0x0C06, 0x251F, 0x382D, 0x0405, 0x1906,
                    0x251D, 0x3C31, 0x0405, 0x190C, 0x2D1D, 0x4139, 0x0605, 0x1F12, 0x3123, 0x433C,
                    0x0604, 0x1D12, 0x312D, 0x493C, 0x382D, 0x4941, 0x5B51, 0x6660, 0x3C39, 0x4D4C,
                    0x6054, 0x6C66, 0x4C3C, 0x534D, 0x6264, 0x6E69, 0x4941, 0x5B5A, 0x6B60, 0x706E,
                    0x4D4C, 0x6054, 0x6C6B, 0x7570, 0x5349, 0x625E, 0x6E69, 0x7375, 0x534B, 0x6660,
                    0x706C, 0x7975, 0x5E51, 0x6962, 0x756E, 0x7A73, 0x6E69, 0x7572, 0x7C76, 0x7F7A,
                    0x726E, 0x7975, 0x7D7A, 0x807F, 0x7572, 0x7A7C, 0x807D, 0x8B84, 0x7C75, 0x7F7A,
                    0x8480, 0x8987, 0x7C76, 0x807D, 0x8884, 0x8D89, 0x7D7C, 0x8480, 0x8988, 0x8F8E,
                    0x7F7A, 0x8B84, 0x8E89, 0x948F, 0x807D, 0x898B, 0x8F8D, 0x9694, 0x8180, 0x8B84,
                    0x8787, 0x8887, 0x8784, 0x8988, 0x9089, 0x8D90, 0x8988, 0x8D90, 0x8F8F, 0x8F8F,
                    0x8E90, 0x8F8F, 0x9292, 0x9694, 0x938F, 0x9692, 0x9B9B, 0x989B, 0x9692, 0x9896,
                    0x9D99, 0x9D9D, 0x9896, 0x9D99, 0x9E9D, 0x9F9F, 0x9D98, 0x9F9D, 0xA1A5, 0xA1A1,
                    0x8788, 0x8787, 0x8484, 0x8081, 0x908D, 0x9090, 0x8889, 0x8487, 0x8F8F, 0x8E8F,
                    0x908E, 0x8889, 0x9496, 0x9292, 0x8F93, 0x908E, 0x9898, 0x9B96, 0x9296, 0x8F93,
                    0x9D9D, 0x999D, 0x9698, 0x9296, 0x9F9F, 0x9D9F, 0x999D, 0x9698, 0xA1A1, 0xA5A1,
                    0x9D9F, 0x989D, 0x7A7F, 0x797C, 0x7275, 0x6C6E, 0x7F81, 0x7A7D, 0x7579, 0x6E72,
                    0x848B, 0x7D80, 0x7C7A, 0x7275, 0x8789, 0x8084, 0x7A7D, 0x7579, 0x898D, 0x8488,
                    0x7D80, 0x797A, 0x8E8F, 0x8889, 0x8084, 0x7C7D, 0x8F94, 0x898E, 0x8487, 0x7A7F,
                    0x9496, 0x8D8F, 0x8B89, 0x7F81, 0x6066, 0x515B, 0x3C49, 0x3138, 0x666C, 0x5464,
                    0x4C4D, 0x393C, 0x696E, 0x6462, 0x4B53, 0x3C43, 0x6E70, 0x6269, 0x535E, 0x4149,
                    0x7075, 0x666C, 0x5460, 0x434D, 0x7573, 0x696E, 0x5E62, 0x495A, 0x757C, 0x6E70,
                    0x6066, 0x4B53, 0x737C, 0x6E75, 0x6269, 0x515E, 0x1D25, 0x0612, 0x0304, 0x0505,
                    0x252D, 0x0C1F, 0x0506, 0x0505, 0x2531, 0x121D, 0x0406, 0x0505, 0x2D38, 0x1925,
                    0x0612, 0x0505, 0x313C, 0x1D25, 0x0612, 0x0504, 0x3941, 0x1D2D, 0x0619, 0x0504,
                    0x3C41, 0x2331, 0x121F, 0x0506, 0x3C49, 0x2D39, 0x121D, 0x0406, 0x0604, 0x2319,
                    0x392D, 0x493C, 0x1204, 0x251F, 0x3831, 0x4B41, 0x1206, 0x251F, 0x3C31, 0x514C,
                    0x1206, 0x251F, 0x3C39, 0x514C, 0x1906, 0x2D1D, 0x4139, 0x5349, 0x1906, 0x2D1D,
                    0x3C39, 0x5349, 0x1906, 0x2D1D, 0x3C39, 0x534B, 0x1906, 0x2D1D, 0x3C38, 0x534B,
                    0x6453, 0x6C66, 0x7570, 0x7D7C, 0x6053, 0x6E6B, 0x7375, 0x7D7C, 0x605B, 0x6E69,
                    0x7675, 0x7F7A, 0x625E, 0x7069, 0x7C75, 0x807D, 0x6264, 0x706E, 0x7C73, 0x817F,
                    0x6264, 0x756E, 0x7C73, 0x817F, 0x6B60, 0x756E, 0x7A73, 0x847F, 0x6660, 0x756E,
                    0x7A73, 0x847F, 0x8480, 0x9088, 0x928F, 0x9896, 0x8780, 0x8E89, 0x9693, 0x9D98,
                    0x8884, 0x8F90, 0x9692, 0x9D99, 0x898B, 0x938E, 0x9896, 0x9F9D, 0x9087, 0x928E,
                    0x999B, 0xA59D, 0x9087, 0x928F, 0x9D96, 0xA19E, 0x9087, 0x948F, 0x9D9B, 0xA19F,
                    0x8D88, 0x968F, 0x9D98, 0xA19F, 0x9E9D, 0xA1A5, 0xA3A3, 0xA4A4, 0xA59E, 0xA3A1,
                    0xA6A6, 0xA9A9, 0xA1A5, 0xA6A4, 0xADA9, 0xABAB, 0xA3A1, 0xA9A6, 0xABAB, 0xAFAF,
                    0xA6A3, 0xADA9, 0xB0AB, 0xB2B1, 0xA6A3, 0xABAD, 0xB1B0, 0xB5B2, 0xA9A4, 0xAFAB,
                    0xB2B1, 0xB6B6, 0xA9A4, 0xAFAB, 0xB5B2, 0xBAB6, 0xA4A6, 0xA3A3, 0xA5A1, 0x9D9E,
                    0xA9A9, 0xA6A6, 0xA1A3, 0x9EA5, 0xABAB, 0xA9A9, 0xA4A6, 0xA5A1, 0xAFAF, 0xADAB,
                    0xA6A9, 0xA1A3, 0xB1B2, 0xABB0, 0xA9AB, 0xA3A4, 0xB2B5, 0xB0B1, 0xA9AB, 0xA3A6,
                    0xB6B6, 0xB1B2, 0xADAF, 0xA4A9, 0xB6BA, 0xB2B5, 0xABAF, 0xA6A9, 0x9698, 0x8F92,
                    0x8890, 0x8084, 0x989D, 0x9396, 0x898E, 0x808B, 0x999D, 0x9496, 0x908F, 0x8488,
                    0x9D9F, 0x9698, 0x8E8F, 0x8B89, 0x9DA5, 0x9B98, 0x8E92, 0x8790, 0x9FA1, 0x9B9D,
                    0x8F92, 0x8790, 0x9FA1, 0x9B9D, 0x8F96, 0x878D, 0x9FA1, 0x989D, 0x8F96, 0x888D,
                    0x797A, 0x7075, 0x666C, 0x5364, 0x7C7D, 0x7573, 0x6B6E, 0x5360, 0x7A7F, 0x7576,
                    0x696E, 0x5B62, 0x7A80, 0x757C, 0x6C70, 0x5E62, 0x7D80, 0x737C, 0x6C70, 0x5E62,
                    0x7F81, 0x737C, 0x6E75, 0x6066, 0x7F84, 0x737A, 0x6E75, 0x606B, 0x7F84, 0x737A,
                    0x6E75, 0x606B, 0x3C49, 0x2D39, 0x191D, 0x0406, 0x414B, 0x313C, 0x1F23, 0x060C,
                    0x4C51, 0x2D3C, 0x1F25, 0x0612, 0x4C5A, 0x393C, 0x1D25, 0x0612, 0x4953, 0x3941,
                    0x1D2D, 0x0619, 0x4953, 0x393C, 0x1D2D, 0x0619, 0x4953, 0x393C, 0x1D2D, 0x0619,
                    0x4B53, 0x383C, 0x1D2D, 0x0619, 0x1906, 0x2D1D, 0x3C39, 0x534B, 0x1906, 0x2D1D,
                    0x3C39, 0x534B, 0x1906, 0x2D1D, 0x3C39, 0x5349, 0x1906, 0x2D1D, 0x4139, 0x5349,
                    0x1206, 0x251F, 0x3C39, 0x5149, 0x1206, 0x251F, 0x3C2D, 0x514C, 0x1206, 0x231F,
                    0x3C31, 0x4D41, 0x0604, 0x2319, 0x392D, 0x493C, 0x6B60, 0x756E, 0x7A73, 0x847F,
                    0x6B60, 0x756E, 0x7A73, 0x847F, 0x6660, 0x756E, 0x7C73, 0x817F, 0x665E, 0x706C,
                    0x7C73, 0x807D, 0x625E, 0x706C, 0x7975, 0x807A, 0x625B, 0x6E69, 0x7675, 0x7F7A,
                    0x6053, 0x6E6B, 0x7375, 0x7D7C, 0x6453, 0x6C66, 0x7570, 0x7A79, 0x8D88, 0x968F,
                    0x9D98, 0xA19F, 0x8D87, 0x948F, 0x9D9B, 0xA19F, 0x9087, 0x928F, 0x9D96, 0xA19E,
                    0x9084, 0x928E, 0x999B, 0xA59D, 0x898B, 0x8F8D, 0x9896, 0x9F9D, 0x8784, 0x8F90,
                    0x9692, 0x9D99, 0x8481, 0x8E89, 0x9693, 0x9D98, 0x8480, 0x9088, 0x928F, 0x9896,
                    0xA9A4, 0xAFAD, 0xB5B2, 0xBAB6, 0xA9A4, 0xAFAD, 0xB2B1, 0xB6B6, 0xA6A3, 0xABAD,
                    0xB1B0, 0xB5B2, 0xA4A3, 0xADA9, 0xB0AB, 0xB2B1, 0xA3A1, 0xA9A6, 0xABAB, 0xAFAF,
                    0xA1A5, 0xA6A4, 0xADA9, 0xABAD, 0xA59E, 0xA3A1, 0xA6A4, 0xA9A9, 0x9E9D, 0xA1A5,
                    0xA3A3, 0xA6A4, 0xB6BA, 0xB2B5, 0xABAF, 0xA6A9, 0xB6B6, 0xB1B2, 0xADAF, 0xA4A9,
                    0xB2B5, 0xB0B1, 0xADAB, 0xA3A6, 0xB1B2, 0xAFB0, 0xA9AD, 0xA3A6, 0xAFAF, 0xABAB,
                    0xA6A9, 0xA1A3, 0xADAB, 0xA9A9, 0xA4A6, 0xA5A1, 0xA9A9, 0xA4A6, 0xA1A3, 0x9EA5,
                    0xA4A6, 0xA3A3, 0xA5A1, 0x9D9E, 0x9FA1, 0x989D, 0x8F96, 0x888E, 0x9FA1, 0x9B9D,
                    0x8F96, 0x8790, 0x9EA1, 0x969D, 0x8F94, 0x8790, 0x9DA5, 0x9B99, 0x8E92, 0x8790,
                    0x9D9F, 0x9698, 0x8E8F, 0x8B89, 0x999D, 0x9296, 0x908F, 0x8488, 0x989D, 0x9396,
                    0x898E, 0x818B, 0x9698, 0x8F92, 0x8890, 0x8084, 0x7F84, 0x737A, 0x6E75, 0x6066,
                    0x7F84, 0x737A, 0x6E75, 0x606B, 0x7F81, 0x737A, 0x6E75, 0x6062, 0x7D80, 0x737C,
                    0x6C70, 0x6466, 0x7D80, 0x757C, 0x6970, 0x5E62, 0x7A7F, 0x7576, 0x696E, 0x5B60,
                    0x7C7D, 0x7573, 0x6B6E, 0x5360, 0x7C7D, 0x7075, 0x666C, 0x535E, 0x4B53, 0x393C,
                    0x1D2D, 0x0619, 0x4B53, 0x393C, 0x1D2D, 0x0619, 0x4953, 0x393C, 0x1D2D, 0x0619,
                    0x4953, 0x393C, 0x1D2D, 0x0619, 0x4951, 0x393C, 0x1D25, 0x0612, 0x4951, 0x2D3C,
                    0x1F25, 0x0612, 0x434B, 0x3138, 0x1F25, 0x0612, 0x3C49, 0x2D39, 0x191D, 0x0406,
                    0x0604, 0x1D19, 0x392D, 0x4C3C, 0x0605, 0x1F12, 0x3125, 0x4338, 0x0405, 0x190C,
                    0x2D1D, 0x3C39, 0x0405, 0x1206, 0x251D, 0x3C31, 0x0505, 0x0C06, 0x251F, 0x382D,
                    0x0505, 0x0604, 0x1D19, 0x3125, 0x0505, 0x0605, 0x1F12, 0x2D25, 0x0505, 0x0405,
                    0x1206, 0x251D, 0x5B51, 0x6962, 0x756E, 0x7C76, 0x534B, 0x6660, 0x706C, 0x7C75,
                    0x5A49, 0x625B, 0x6E69, 0x7375, 0x4D43, 0x6053, 0x6C6B, 0x7570, 0x4941, 0x5E53,
                    0x6962, 0x706E, 0x4C3C, 0x534B, 0x6264, 0x6E69, 0x3C39, 0x4D4C, 0x6054, 0x6966,
                    0x3831, 0x4943, 0x5B51, 0x6660, 0x807D, 0x898B, 0x8F8E, 0x9694, 0x7F7A, 0x8B84,
                    0x8E89, 0x948F, 0x7D7C, 0x8480, 0x8988, 0x8F8E, 0x7A79, 0x807D, 0x8884, 0x8D89,
                    0x7C75, 0x7D7A, 0x8480, 0x8987, 0x7572, 0x7C7C, 0x807D, 0x8B84, 0x726E, 0x7C75,
                    0x7D7C, 0x807F, 0x6E69, 0x7572, 0x7C76, 0x7F7A, 0x9D98, 0x9F9D, 0xA1A5, 0xA1A1,
                    0x9B96, 0x9D99, 0x9E9D, 0x9F9F, 0x9692, 0x989B, 0x9D99, 0x9D9D, 0x938F, 0x9692,
                    0x9B9B, 0x989B, 0x8E90, 0x8F8F, 0x9292, 0x9694, 0x8988, 0x8D90, 0x8F8E, 0x8F8F,
                    0x8484, 0x8988, 0x9090, 0x8D90, 0x8080, 0x8B84, 0x8784, 0x8887, 0xA1A1, 0xA5A1,
                    0x9D9F, 0x989D, 0x9F9F, 0x9D9E, 0x999D, 0x9698, 0x9D9D, 0x9999, 0x9698, 0x9296,
                    0x9898, 0x9696, 0x9296, 0x8F93, 0x9496, 0x9292, 0x8F8F, 0x908E, 0x8F8F, 0x8E8F,
                    0x908E, 0x8889, 0x908D, 0x9090, 0x8889, 0x848B, 0x8788, 0x8787, 0x848B, 0x8081,
                    0x9496, 0x8D8F, 0x8B89, 0x7F81, 0x8F94, 0x898E, 0x8487, 0x7A7F, 0x8E8F, 0x8889,
                    0x8084, 0x7C7D, 0x898D, 0x8488, 0x7D80, 0x767C, 0x8789, 0x8084, 0x7A7F, 0x7579,
                    0x848B, 0x7D80, 0x7C7A, 0x7275, 0x7F81, 0x7A7D, 0x757C, 0x6E72, 0x7A7D, 0x797C,
                    0x7575, 0x6C6E, 0x767C, 0x6E75, 0x6269, 0x515E, 0x757C, 0x6C70, 0x6066, 0x4B53,
                    0x7573, 0x696E, 0x5E62, 0x495A, 0x7075, 0x6B6C, 0x5460, 0x434D, 0x6E70, 0x626B,
                    0x5A5E, 0x4149, 0x696E, 0x6462, 0x4D53, 0x3C43, 0x6669, 0x5460, 0x4C4D, 0x393C,
                    0x6066, 0x515B, 0x3C49, 0x3138, 0x3C49, 0x2D39, 0x121D, 0x0406, 0x3843, 0x2331,
                    0x121F, 0x0506, 0x393C, 0x1D2D, 0x0C19, 0x0504, 0x2D3C, 0x1D25, 0x0612, 0x0505,
                    0x2D38, 0x1F25, 0x0612, 0x0505, 0x2D31, 0x191D, 0x0406, 0x0505, 0x252D, 0x0C19,
                    0x0506, 0x0505, 0x1D25, 0x0612, 0x0504, 0x0505, 0x0505, 0x0505, 0x0C06, 0x1D19,
                    0x0505, 0x0505, 0x0605, 0x1F12, 0x0505, 0x0505, 0x0405, 0x1206, 0x0505, 0x0505,
                    0x0505, 0x0C06, 0x0505, 0x0505, 0x0505, 0x0605, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x3125, 0x4338,
                    0x5A49, 0x605B, 0x2D23, 0x3C31, 0x4943, 0x5B53, 0x251D, 0x382D, 0x433C, 0x5A49,
                    0x1D19, 0x2D25, 0x3C38, 0x4943, 0x190C, 0x251D, 0x382D, 0x433C, 0x0C06, 0x1D19,
                    0x2D25, 0x3C39, 0x0605, 0x190C, 0x251D, 0x312D, 0x0505, 0x0C06, 0x1D12, 0x2525,
                    0x6C66, 0x706E, 0x7375, 0x7C7C, 0x6660, 0x6E69, 0x7270, 0x7675, 0x605B, 0x6962,
                    0x6E6C, 0x7570, 0x5451, 0x6264, 0x6966, 0x6E6C, 0x5149, 0x5E53, 0x6260, 0x696B,
                    0x4C43, 0x5A4B, 0x5E54, 0x6260, 0x3C38, 0x4943, 0x5A4D, 0x5E53, 0x3931, 0x3C3C,
                    0x4943, 0x514B, 0x7D7A, 0x807F, 0x8381, 0x8484, 0x7C7C, 0x7A7A, 0x7F7D, 0x7F7F,
                    0x7375, 0x7C76, 0x7A7C, 0x7A7A, 0x7570, 0x7575, 0x7373, 0x7373, 0x6E6C, 0x706E,
                    0x7570, 0x7272, 0x6B66, 0x6969, 0x6E6C, 0x6E6E, 0x605E, 0x6262, 0x6662, 0x6B6B,
                    0x5353, 0x5E5B, 0x605E, 0x6060, 0x8484, 0x8083, 0x7F80, 0x7A7F, 0x7F7F, 0x7D7D,
                    0x7A7D, 0x797C, 0x7A7A, 0x7C7C, 0x7679, 0x7573, 0x7373, 0x7373, 0x7575, 0x7075,
                    0x7575, 0x7075, 0x6E70, 0x6C6E, 0x6E6E, 0x6C6E, 0x6969, 0x666B, 0x6B6B, 0x6266,
                    0x6262, 0x6460, 0x6060, 0x5E64, 0x5B5E, 0x5353, 0x7C7A, 0x7573, 0x6E70, 0x666C,
                    0x7573, 0x7075, 0x696E, 0x6066, 0x7075, 0x6C6E, 0x6269, 0x5B60, 0x6C6E, 0x6669,
                    0x6462, 0x5154, 0x6B69, 0x6062, 0x535E, 0x4951, 0x6062, 0x545B, 0x4B5A, 0x434C,
                    0x535E, 0x4D5A, 0x4349, 0x383C, 0x4B51, 0x4349, 0x3C3C, 0x3139, 0x5B60, 0x495A,
                    0x3C43, 0x2531, 0x535B, 0x4349, 0x393C, 0x252D, 0x495A, 0x3C43, 0x2D39, 0x1D25,
                    0x4349, 0x393C, 0x252D, 0x191D, 0x3C43, 0x2D38, 0x1D25, 0x0C19, 0x313C, 0x252D,
                    0x191D, 0x060C, 0x2D31, 0x1D25, 0x0C19, 0x0506, 0x2325, 0x191D, 0x060C, 0x0505,
                    0x191D, 0x060C, 0x0505, 0x0505, 0x121F, 0x0506, 0x0505, 0x0505, 0x0612, 0x0504,
                    0x0505, 0x0505, 0x060C, 0x0505, 0x0505, 0x0505, 0x0506, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0405, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0005, 0x0505, 0x0505, 0x0505, 0x0505, 0x0605, 0x120C, 0x231F, 0x0505, 0x0505,
                    0x0606, 0x1912, 0x0505, 0x0505, 0x0405, 0x0C06, 0x0505, 0x0505, 0x0505, 0x0605,
                    0x0505, 0x0500, 0x0505, 0x0500, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x2D25, 0x3831, 0x3C3C, 0x4943,
                    0x251D, 0x2D25, 0x3931, 0x3C3C, 0x1912, 0x251D, 0x2D25, 0x3931, 0x1206, 0x1F12,
                    0x1D1D, 0x2D25, 0x0604, 0x0C06, 0x1919, 0x1D1F, 0x0505, 0x0604, 0x0606, 0x1212,
                    0x0505, 0x0505, 0x0604, 0x0606, 0x0505, 0x0505, 0x0505, 0x0405, 0x4D49, 0x5A51,
                    0x5353, 0x5353, 0x433C, 0x4C4C, 0x4949, 0x4B49, 0x3839, 0x3C3C, 0x3C3C, 0x3C3C,
                    0x312D, 0x392D, 0x3939, 0x3839, 0x2323, 0x2525, 0x2D2D, 0x2D2D, 0x1919, 0x1D1F,
                    0x1D1D, 0x1D1D, 0x0C06, 0x1212, 0x1919, 0x1919, 0x0604, 0x0606, 0x0606, 0x0606,
                    0x5353, 0x5353, 0x5151, 0x494D, 0x494B, 0x4949, 0x4C49, 0x3C41, 0x3C3C, 0x413C,
                    0x3C3C, 0x3938, 0x3939, 0x3939, 0x3131, 0x2D31, 0x2D2D, 0x2D2D, 0x2525, 0x1D25,
                    0x1D1D, 0x1D1D, 0x1F1F, 0x1919, 0x1919, 0x1919, 0x1212, 0x060C, 0x0606, 0x0606,
                    0x0606, 0x0406, 0x414C, 0x3C41, 0x3138, 0x252D, 0x383C, 0x3139, 0x252D, 0x1D25,
                    0x3139, 0x252D, 0x1D25, 0x121F, 0x232D, 0x1D23, 0x121F, 0x0612, 0x1F1D, 0x1219,
                    0x0612, 0x0406, 0x1212, 0x0606, 0x0406, 0x0505, 0x0606, 0x0404, 0x0505, 0x0505,
                    0x0504, 0x0505, 0x0505, 0x0505, 0x1F1D, 0x0C12, 0x0506, 0x0505, 0x1219, 0x0606,
                    0x0500, 0x0505, 0x060C, 0x0504, 0x0505, 0x0505, 0x0506, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,
                    0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0405, 0x0505, 0x0505, 0x0505,
                    0x0005, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505,};

const u16 spherePalette[] = {
                    0x0000, 0x0000, 0x0400, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x1000, 0x0C00,
                    0x0C00, 0x0C00, 0x0001, 0x1400, 0x1000, 0x1000, 0x0000, 0x1400, 0x0001, 0x1C00,
                    0x1C00, 0x1800, 0x2000, 0x1800, 0x1400, 0x0002, 0x2400, 0x2400, 0x0000, 0x0002,
                    0x2800, 0x0002, 0x2000, 0x3000, 0x2400, 0x0003, 0x2800, 0x0003, 0x2C00, 0x3400,
                    0x3000, 0x2800, 0x3000, 0x3400, 0x0020, 0x0004, 0x3400, 0x2C01, 0x4000, 0x0004,
                    0x3C00, 0x3800, 0x3801, 0x4800, 0x0020, 0x3C00, 0x0005, 0x0004, 0x4000, 0x4C00,
                    0x0005, 0x4400, 0x4800, 0x5800, 0x4401, 0x0006, 0x5000, 0x0006, 0x5C00, 0x5000,
                    0x5800, 0x0040, 0x6400, 0x0006, 0x5401, 0x0007, 0x0006, 0x0007, 0x6800, 0x5C01,
                    0x4C02, 0x0007, 0x6000, 0x0007, 0x0008, 0x0040, 0x6400, 0x7800, 0x6001, 0x7000,
                    0x0007, 0x0008, 0x0040, 0x5802, 0x0008, 0x6C00, 0x0009, 0x6C01, 0x0009, 0x0040,
                    0x0008, 0x0040, 0x0009, 0x6402, 0x0060, 0x000A, 0x0060, 0x0009, 0x000A, 0x7403,
                    0x000B, 0x0060, 0x000B, 0x000C, 0x000C, 0x000C, 0x0060, 0x000C, 0x000D, 0x0080,
                    0x7805, 0x000D, 0x000E, 0x0080, 0x000D, 0x000E, 0x0080, 0x000E, 0x000F, 0x000F,
                    0x0080, 0x000F, 0x0010, 0x000E, 0x00A0, 0x0010, 0x0011, 0x0011, 0x00A0, 0x0010,
                    0x00A0, 0x0012, 0x0012, 0x0012, 0x0011, 0x00A0, 0x0013, 0x0012, 0x0013, 0x00C0,
                    0x0014, 0x00C0, 0x0015, 0x0015, 0x00C0, 0x0014, 0x00C0, 0x0015, 0x0016, 0x0016,
                    0x00E0, 0x0017, 0x00E0, 0x0018, 0x0018, 0x0017, 0x0019, 0x00E0, 0x00E0, 0x0019,
                    0x0100, 0x001A, 0x0100, 0x001A, 0x0100, 0x001B, 0x001C, 0x001C, 0x001C, 0x0100,
                    0x0120, 0x001D, 0x001E, 0x0120, 0x0120, 0x0120, 0x001F, 0x0120, 0x0140, 0x0140,
                    0x0140, 0x0160, 0x0161, 0x0160, 0x0180, 0x0180, 0x0180, 0x0181, 0x0180, 0x01A0,
                    0x01A0, 0x01A0, 0x01A0, 0x01C0, 0x01C0, 0x01C0, 0x01E0, 0x01E0, 0x01E0, 0x01E0,
                    0x0200, 0x0200, 0x0200, 0x0220, 0x0220, 0x0220, 0x0240, 0x0241, 0x0240, 0x0240,
                    0x0260, 0x0260, 0x0261, 0x0260, 0x0280, 0x0280, 0x0281, 0x02A0, 0x02A0, 0x02A0,
                    0x02A0, 0x02C0, 0x02C0, 0x02C0, 0x02E0, 0x02E0, 0x0300, 0x02E1, 0x0300, 0x0300,
                    0x0321, 0x0320, 0x0320, 0x0340, 0x0340, 0x0341, 0x0360, 0x0360, 0x0380, 0x0381,
                    0x03A0, 0x03A1, 0x03C0, 0x03C0, 0x03E0, 0x0000,};
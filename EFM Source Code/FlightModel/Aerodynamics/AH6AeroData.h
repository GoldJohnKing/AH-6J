#pragma once

// Aerodynamics Data
// each data table has 12 points that correspond to airspeed1, which are:  -40, -30, -20, 0, 20, 30, 40, 60, 80, 100, 120, 130 knots

namespace Helicopter
{//								-40,	 -30,	 -20,		 0,		20,		 30,		40,		60,		80,		100,	  120,	   130
static double _XuData[12]  = {-0.0439, -0.0397, -0.0346, -0.0257, -0.0167, -0.0204, -0.0180, -0.0154, -0.0125, -0.0115, -0.0095, -0.0300 };		// forward speed affect on force out nose
static double _XwData[12]  = {0.0251,   0.0173,  0.0109,  0.0113,  0.0216,  0.0180,  0.0125,  0.0107,  0.0064,  0.0081,  0.0075,  0.0138 };		// downward speed affect on force out nose
static double _XqData[12]  = {0.5530,   0.5150,  0.4647,  0.3972,  0.4624,  0.5056,  0.5189,  0.5506,  0.5313,  0.4829,  0.3698,  0.2905 };		// pitch rate affect on force out nose
static double _XvData[12]  = {0.0001,   0.0002,  0.0019,  0.0004,  0.0024,  0.0038,  0.0008,  0.0015,  0.0011,  0.0015,  0.0003,  0.0001 };		// sideways speed affect on force out nose
static double _XpData[12]  = {-0.2325, -0.2377, -0.2435, -0.2494, -0.2375, -0.2125, -0.2285, -0.2234, -0.2203, -0.2237, -0.2433, -0.2578 };		// roll rate affect on force out nose
static double _XrData[12]  = {-0.0044, -0.0078, -0.0036, -0.0185, -0.0301, -0.0516, -0.0169, -0.0156, -0.0195, -0.0157, -0.0227, -0.0240 };		// yaw rate affect on force out nose
static double _XdcData[12] = {0.0665,   0.0526,  0.0431,  0.0260,  0.0108,  0.0028,  0.0058,  0.0057, -0.0210, -0.0263, -0.0346, -0.0353 };		// collective input affect on force out nose
static double _XdbData[12] = {0.1115,   0.1078,  0.1058,  0.1032,  0.0996,  0.0983,  0.0957,  0.0930,  0.0899,  0.0880,  0.0850,  0.0827 };		// pitch input affect on force out nose
static double _XdaData[12] = {-0.0040, -0.0043, -0.0039, -0.0034, -0.0039, -0.0043, -0.0046, -0.0044, -0.0049, -0.0041, -0.0041, -0.0041 };		// roll input affect on force out nose
static double _XdpData[12] = {0.0038,   0.0036,  0.0035, -0.0030, -0.0035, -0.0036, -0.0038, -0.0040, -0.0040, -0.0040, -0.0040, -0.0039 };		// pedal input affect on force out nose
//								-40,	 -30,	 -20,		 0,		20,		 30,		40,		60,		80,		100,	  120,	   130
static double _ZuData[12]  = { 0.0151,  0.0100,  0.0025,  0.0001,  0.0025,  0.0050,  0.0035,  0.0020, -0.0020, -0.0100, -0.0125, -0.0178 };		// forward speed affect on force down
static double _ZwData[12]  = {-0.6323, -0.5453, -0.4344,  0.0240, -0.4337, -0.5473, -0.6299, -0.7150, -0.7655, -0.7977, -0.8050, -0.8096 };		// downward speed affect on force down (1st attempt at VRS at 0 airspeed)
static double _ZqData[12]  = {-0.0692,  0.0449, -0.0392,  0.0050,  0.0483, -0.0650, -0.1564, -0.2152, -0.2194, -0.2723, -0.2307, -0.3092 };		// pitch rate affect on force down
static double _ZvData[12]  = { 0.0234,  0.0200,  0.0150,  0.0000,  0.0150,  0.0203,  0.0234,  0.0270,  0.0295,  0.0315,  0.0354,  0.0485 };		// sideways speed affect on force down
static double _ZpData[12]  = { 0.1166,  0.1602,  0.0332,  0.0177, -0.0006, -0.0783, -0.1242, -0.2914, -0.3605, -0.4821, -0.5336, -0.5825 };		// roll rate affect on force down
static double _ZrData[12]  = { 0.4127,  0.4815,  0.3121,  0.4495,  0.4654,  0.3827,  0.4415,  0.4056,  0.4658,  0.4861,  0.5800,  0.6244 };		// yaw rate affect on force down
static double _ZdcData[12] = {-0.9905, -0.9221, -0.9112, -0.8712, -0.9184, -0.9353, -0.9969, -0.9860, -0.9750, -0.9690, -0.9540, -0.9480 };		// collective input affect on force down (most important value for overall lift)
static double _ZdbData[12] = {-0.1265, -0.0891, -0.0746, -0.0019,  0.0841,  0.1034,  0.1348,  0.2211,  0.3185,  0.4017,  0.4907,  0.5212 };		// pitch input affect on force down
static double _ZdaData[12] = {-0.0025,  0.0084, -0.0056,  0.0013,  0.0125,  0.0025,  0.0058,  0.0032,  0.0033,  0.0005,  0.0039,  0.0043 };		// roll input affect on force down
static double _ZdpData[12] = {-0.0045, -0.0037, -0.0029, -0.0046, -0.0002,  0.0013,  0.0022,  0.0052,  0.0054,  0.0110,  0.0104,  0.0141 };		// pedal input affect on force down
//								-40,	 -30,	 -20,		 0,		20,		 30,		40,		60,		80,		100,	  120,	   130
static double _MuData[12]  = { 0.0459,  0.0514,  0.0502,  0.0414,  0.0511,  0.0480,  0.0406,  0.0264,  0.0213,  0.0160,  0.0120,  0.0110 };		// forward speed affect on pitch
static double _MwData[12]  = {-0.1590, -0.1172, -0.0787, -0.0196, -0.0099, -0.0019, -0.0113, -0.0130, -0.0086, -0.0093, -0.0045, -0.0065 };		// downward speed affect on pitch
static double _MqData[12]  = {-2.2755, -2.1514, -2.0047, -1.7645, -1.8793, -2.0215, -2.2421, -2.4843, -2.6776, -2.8275, -2.9488, -2.9912 };		// pitch rate affect on pitch
static double _MvData[12]  = {-0.0378, -0.0276, -0.0184, -0.0086, -0.0061, -0.0147, -0.0356, -0.0611, -0.0746, -0.0979, -0.1078, -0.1163 };		// sideways speed affect on pitch
static double _MpData[12]  = { 0.2764,  0.2999,  0.3334,  0.3763,  0.3497,  0.3529,  0.2852,  0.2077,  0.2004,  0.1469,  0.1673,  0.1693 };		// roll rate affect on pitch
static double _MrData[12]  = { 0.2079,  0.1740,  0.1543,  0.0719,  0.0954,  0.0824,  0.1843,  0.2636,  0.3948,  0.4617,  0.5662,  0.6034 };		// yaw rate affect on pitch
static double _MdcData[12] = {-0.1207, -0.0903, -0.0678, -0.0309,  0.0226,  0.0243,  0.0621,  0.1083,  0.1571,  0.1964,  0.2473,  0.2652 };		// collective input affect on pitch
static double _MdbData[12] = {-0.3036, -0.2972, -0.2927, -0.2216, -0.2200, -0.2160, -0.2078, -0.2038, -0.1869, -0.1957, -0.1947, -0.1939 };		// pitch input affect on pitch (most important value for pitch control)
static double _MdaData[12] = { 0.0143,  0.0144,  0.0152,  0.0138,  0.0140,  0.0154,  0.0152,  0.0144,  0.0163,  0.0155,  0.0168,  0.0172 };		// roll input affect on pitch
static double _MdpData[12] = {-0.0123, -0.0069, -0.0003, -0.0038,  0.0108,  0.0146,  0.0168,  0.0314,  0.0285,  0.0584,  0.0511,  0.0662 };		// pedal input affect on pitch
//								-40,	 -30,	 -20,		 0,		20,		 30,		40,		60,		80,		100,	  120,	   130
static double _YuData[12]  = {-0.0069, -0.0060, -0.0045,  0.0158,  0.0080,  0.0054,  0.0041,  0.0009,  0.0018,  0.0021,  0.0026,  0.0036 };		// forward speed affect on force out right wing
static double _YwData[12]  = { 0.0080,  0.0049,  0.0055, -0.0194, -0.0031, -0.0053, -0.0075, -0.0098, -0.0122, -0.0142, -0.0162, -0.0172 };		// downward speed affect on force out right wing
static double _YqData[12]  = {-0.1890, -0.2038, -0.2108, -0.2573, -0.2430, -0.2555, -0.2720, -0.3047, -0.2811, -0.3635, -0.3244, -0.3196 };		// pitch rate affect on force out right wing
static double _YvData[12]  = {-0.0678, -0.0566, -0.0467, -0.0435, -0.0490, -0.0581, -0.0679, -0.0836, -0.0994, -0.1174, -0.1344, -0.1438 };		// sideways speed affect on force out right wing
static double _YpData[12]  = {-0.5240, -0.4961, -0.4466, -0.4104, -0.4814, -0.5404, -0.5880, -0.5919, -0.5972, -0.5489, -0.4936, -0.4203 };		// roll rate affect on force out right wing
static double _YrData[12]  = { 0.1553,  0.1351,  0.1450,  0.1045,  0.1474,  0.1439,  0.1457,  0.2062,  0.2841,  0.3137,  0.3848,  0.4376 };		// yaw rate affect on force out right wing
static double _YdcData[12] = { 0.0250,  0.0310,  0.0350,  0.0450,  0.0350,  0.0310,  0.0250,  0.0210,  0.0105,  0.0075,  0.0055,  0.0055 };		// collective input affect on force out right wing
static double _YdbData[12] = { 0.0091,  0.0094,  0.0101,  0.0046,  0.0073,  0.0055,  0.0055,  0.0062,  0.0098,  0.0080,  0.0123,  0.0163 };		// pitch input affect on force out right wing
static double _YdaData[12] = { 0.0630,  0.0628,  0.0641,  0.0617,  0.0625,  0.0605,  0.0602,  0.0602,  0.0621,  0.0611,  0.0628,  0.0640 };		// roll input affect on force out right wing
static double _YdpData[12] = { 0.1881,  0.1796,  0.1987,  0.1841,  0.1865,  0.1650,  0.1613,  0.1912,  0.2149,  0.2196,  0.2360,  0.2320 };		// pedal input affect on force out right wing
//								-40,	 -30,	 -20,		 0,		20,		 30,		40,		60,		80,		100,	  120,	   130
static double _LuData[12]  = { 0.0036,  0.0089,  0.0096,  0.0010,  0.0018,  0.0002, -0.0063, -0.0083, -0.0036, -0.0029,  0.0010,  0.0047 };		// forward speed affect on roll
static double _LwData[12]  = {-0.0617, -0.0455, -0.0300, -0.0064, -0.0224, -0.0362, -0.0571, -0.0844, -0.1039, -0.1238, -0.1494, -0.1655 };		// downward speed affect on roll
static double _LqData[12]  = {-1.2755, -1.2462, -1.1905, -1.1360, -1.1404, -1.1554, -1.2325, -1.3056, -1.3429, -1.4309, -1.5519, -1.6260 };		// pitch rate affect on roll
static double _LvData[12]  = {-0.1425, -0.1430, -0.1414, -0.1516, -0.1461, -0.1462, -0.1571, -0.1642, -0.1774, -0.2024, -0.2348, -0.2542 };		// sideways speed affect on roll
static double _LpData[12]  = {-5.3893, -5.2968, -5.1219, -4.9198, -4.1712, -4.3030, -4.4483, -4.4853, -4.4042, -4.2565, -4.0022, -3.8062 };		// roll rate affect on roll
static double _LrData[12]  = {-0.2253, -0.2487, -0.2131, -0.2873, -0.2623, -0.2649, -0.2164, -0.1582, -0.0737, -0.0058,  0.0595,  0.0913 };		// yaw rate affect on roll
static double _LdcData[12] = { 0.0075,  0.0125,  0.0235,  0.0575,  0.0335,  0.0125,  0.0075,  0.0025,  0.0005,  0.0005,  0.0005,  0.0005 };		// collective input affect on roll
static double _LdbData[12] = { 0.0597,  0.0703,  0.0768,  0.0738,  0.0711,  0.0770,  0.0771,  0.0729,  0.0790,  0.0765,  0.0747,  0.0698 };		// pitch input affect on roll
static double _LdaData[12] = { 0.4956,  0.4954,  0.5018,  0.5037,  0.4992,  0.4993,  0.4976,  0.4941,  0.4982,  0.5005,  0.5054,  0.5089 };		// roll input affect on roll (most important value for roll control)
static double _LdpData[12] = {-0.0009, -0.0010, -0.0015, -0.0025, -0.0015, -0.0010, -0.0009, -0.0008, -0.0007, -0.0006, -0.0005, -0.0004 };		// pedal input affect on roll
//								-40,	 -30,	 -20,		 0,		20,		 30,		40,		60,		80,		100,	  120,	   130
static double _NuData[12]  = { 0.0400,  0.0200,  0.0152, -0.0001, -0.0200, -0.0450, -0.0455, -0.0455, -0.0460, -0.0460, -0.0460, -0.0460 };		// forward speed affect on yaw
static double _NwData[12]  = {-0.1573, -0.1096, -0.0780,  0.0818, -0.0249, -0.0440, -0.0712, -0.0800, -0.0407, -0.0125,  0.0700,  0.1340 };		// downward speed affect on yaw
static double _NqData[12]  = {-0.0846, -0.6168, -0.5082, -0.1724, -0.1569, -0.0275,  0.1582,  0.5060,  0.5444,  1.0475,  0.7900,  0.6085 };		// pitch rate affect on yaw
static double _NvData[12]  = { 0.2339,  0.1692,  0.1075, -0.0054,  0.0625,  0.1053,  0.1354,  0.1820,  0.2108,  0.25926, 0.2839,  0.3003 };		// sideways speed affect on yaw
static double _NpData[12]  = {-1.1928, -1.1801, -1.2004, -1.0748, -1.1071, -1.0852, -1.0122, -1.1022, -0.9747, -0.9802, -0.8117, -0.8152 };		// roll rate affect on yaw
static double _NrData[12]  = {-1.1483, -1.0321, -1.0663, -0.8645, -1.1038, -1.0691, -1.1024, -1.4412, -1.4727, -2.0187, -2.4360, -2.6430 };		// yaw rate affect on yaw
static double _NdcData[12] = { 0.1375,  0.1375,  0.1380,  0.1400,  0.1380,  0.1375,  0.1375,  0.1375,  0.1375,  0.1375,  0.1375,  0.1375 };		// collective input affect on yaw
static double _NdbData[12] = {-0.0207, -0.0109, -0.0088,  0.0194,  0.0138,  0.0329,  0.0436,  0.0566,  0.0553,  0.0676,  0.0332, -0.0113 };		// pitch input affect on yaw
static double _NdaData[12] = { 0.0655,  0.0664,  0.0630,  0.0780,  0.0699,  0.0782,  0.0785,  0.0741,  0.0646,  0.0730,  0.0711,  0.0706 };		// roll input affect on yaw
static double _NdpData[12] = {-0.2993, -0.3332, -0.3539, -0.3209, -0.3545, -0.3361, -0.2962, -0.2014, -0.1115, -0.0502, -0.0355, -0.0215 };		// pedal input affect on yaw (most important value for yaw control)
//								-40,	 -30,	 -20,		 0,		20,		 30,		40,		60,		80,		100,	  120,	   130

static const size_t airspeed1_size = 12;
static double airspeed1[12] = { -40, -30, -20, 0, 20, 30, 40, 60, 80, 100, 120, 130 };

}

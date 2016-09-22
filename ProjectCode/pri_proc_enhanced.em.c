#include <opnet.h>
#include <ema.h>
#include <opnet_emadefs.h>
#include <opnet_constants.h>



/* array for all textlist attributes in model */
Prg_List*		prg_lptr [75];

/* array for all objects in model */
EmaT_Object_Id		obj [237];



int
main (int argc, char* argv [])
	{
	EmaT_Model_Id			model_id;
	int					i;

	/* initialize EMA package */
	Ema_Init (EMAC_MODE_ERR_PRINT | EMAC_MODE_REL_60, argc, argv);

	/* create an empty model */
	model_id = Ema_Model_Create (MOD_PROCESS);



	/* create all objects */
	obj [0] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [1] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [2] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [3] = Ema_Object_Create (model_id, OBJ_ATTR_SYMMAP);
	obj [4] = Ema_Object_Create (model_id, OBJ_ATTR_SYMMAP);
	obj [5] = Ema_Object_Create (model_id, OBJ_ATTR_SYMMAP);
	obj [6] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [7] = Ema_Object_Create (model_id, OBJ_ATTR_SYMMAP);
	obj [8] = Ema_Object_Create (model_id, OBJ_ATTR_SYMMAP);
	obj [9] = Ema_Object_Create (model_id, OBJ_ATTR_SYMMAP);
	obj [10] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [11] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [12] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [13] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [14] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [15] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [16] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [17] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [18] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [19] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [20] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [21] = Ema_Object_Create (model_id, OBJ_ATTR_SYMMAP);
	obj [22] = Ema_Object_Create (model_id, OBJ_ATTR_SYMMAP);
	obj [23] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [24] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [25] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [26] = Ema_Object_Create (model_id, OBJ_ATTR_PROPS);
	obj [27] = Ema_Object_Create (model_id, OBJ_PR_ATTR_ASSGN);
	obj [28] = Ema_Object_Create (model_id, OBJ_PR_ATTR_ASSGN);
	obj [29] = Ema_Object_Create (model_id, OBJ_PR_ATTR_ASSGN);
	obj [30] = Ema_Object_Create (model_id, OBJ_PR_ATTR_ASSGN);
	obj [31] = Ema_Object_Create (model_id, OBJ_PR_ATTR_ASSGN);
	obj [32] = Ema_Object_Create (model_id, OBJ_PR_ATTR_ASSGN);
	obj [33] = Ema_Object_Create (model_id, OBJ_PR_ATTR_ASSGN);
	obj [34] = Ema_Object_Create (model_id, OBJ_PR_ATTR_ASSGN);
	obj [35] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [36] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [37] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [38] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [39] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [40] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [41] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [42] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [43] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [44] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [45] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [46] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [47] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [48] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [49] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [50] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [51] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [52] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [53] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [54] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [55] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [56] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [57] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [58] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [59] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [60] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [61] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [62] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [63] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [64] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [65] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [66] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [67] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [68] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [69] = Ema_Object_Create (model_id, OBJ_PR_STATE);
	obj [70] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [71] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [72] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [73] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [74] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [75] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [76] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [77] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [78] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [79] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [80] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [81] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [82] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [83] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [84] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [85] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [86] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [87] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [88] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [89] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [90] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [91] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [92] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [93] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [94] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [95] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [96] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [97] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [98] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [99] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [100] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [101] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [102] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [103] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [104] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [105] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [106] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [107] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [108] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [109] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [110] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [111] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [112] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [113] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [114] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [115] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [116] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [117] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [118] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [119] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [120] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [121] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [122] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [123] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [124] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [125] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [126] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [127] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [128] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [129] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [130] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [131] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [132] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [133] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [134] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [135] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [136] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [137] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [138] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [139] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [140] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [141] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [142] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [143] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [144] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [145] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [146] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [147] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [148] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [149] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [150] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [151] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [152] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [153] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [154] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [155] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [156] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [157] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [158] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [159] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [160] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [161] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [162] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [163] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [164] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [165] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [166] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [167] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [168] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [169] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [170] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [171] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [172] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [173] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [174] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [175] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [176] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [177] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [178] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [179] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [180] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [181] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [182] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [183] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [184] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [185] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [186] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [187] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [188] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [189] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [190] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [191] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [192] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [193] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [194] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [195] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [196] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [197] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [198] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [199] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [200] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [201] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [202] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [203] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [204] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [205] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [206] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [207] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [208] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [209] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [210] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [211] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [212] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [213] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [214] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [215] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [216] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [217] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [218] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [219] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [220] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [221] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [222] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [223] = Ema_Object_Create (model_id, OBJ_PR_TRANS);
	obj [224] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [225] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [226] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [227] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [228] = Ema_Object_Create (model_id, OBJ_PR_POS);
	obj [229] = Ema_Object_Create (model_id, OBJ_PR_STAT_DESC);
	obj [230] = Ema_Object_Create (model_id, OBJ_PR_STAT_DESC);
	obj [231] = Ema_Object_Create (model_id, OBJ_PR_STAT_DESC);
	obj [232] = Ema_Object_Create (model_id, OBJ_PR_STAT_DESC);
	obj [233] = Ema_Object_Create (model_id, OBJ_PR_STAT_DESC);
	obj [234] = Ema_Object_Create (model_id, OBJ_PR_STAT_DESC);
	obj [235] = Ema_Object_Create (model_id, OBJ_PR_STAT_DESC);
	obj [236] = Ema_Object_Create (model_id, OBJ_PR_STAT_DESC);


	/* assign attrs for object 'obj [0]' */
	/* create and init prg list 'prg_lptr [12]' */
	prg_lptr [12] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [0], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [12],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [1]' */
	/* create and init prg list 'prg_lptr [13]' */
	prg_lptr [13] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [1], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [13],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [2]' */
	/* create and init prg list 'prg_lptr [14]' */
	prg_lptr [14] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [14], 
		"Must larger than 1.",
		"To keep the same duty cycle as S-MAC(5%), Sleep Factor should be set 38",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [2], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_INTEGER,
		"default value",        COMP_CONTENTS_SYMBOL, "14",
		"comments",             COMP_CONTENTS, prg_lptr [14],
		"low limit",            COMP_CONTENTS, (double) 2,
		"symbol map list",      COMP_ARRAY_CONTENTS (0), obj [3],
		"symbol map list",      COMP_ARRAY_CONTENTS (1), obj [4],
		"symbol map list",      COMP_ARRAY_CONTENTS (2), obj [5],
		"flags",                COMP_CONTENTS, 25,
		"data type",            COMP_CONTENTS, 0,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [6]' */
	/* create and init prg list 'prg_lptr [15]' */
	prg_lptr [15] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [6], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS_SYMBOL, "0.016",
		"comments",             COMP_CONTENTS, prg_lptr [15],
		"symbol map list",      COMP_ARRAY_CONTENTS (0), obj [7],
		"symbol map list",      COMP_ARRAY_CONTENTS (1), obj [8],
		"symbol map list",      COMP_ARRAY_CONTENTS (2), obj [9],
		"flags",                COMP_CONTENTS, 16,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [10]' */
	/* create and init prg list 'prg_lptr [16]' */
	prg_lptr [16] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [10], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [16],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [11]' */
	/* create and init prg list 'prg_lptr [17]' */
	prg_lptr [17] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [11], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [17],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [12]' */
	/* create and init prg list 'prg_lptr [18]' */
	prg_lptr [18] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [12], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [18],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [13]' */
	/* create and init prg list 'prg_lptr [19]' */
	prg_lptr [19] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [13], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [19],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [14]' */
	/* create and init prg list 'prg_lptr [20]' */
	prg_lptr [20] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [14], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [20],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [15]' */
	/* create and init prg list 'prg_lptr [21]' */
	prg_lptr [21] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [15], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [21],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [16]' */
	/* create and init prg list 'prg_lptr [22]' */
	prg_lptr [22] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [16], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [22],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [17]' */
	/* create and init prg list 'prg_lptr [23]' */
	prg_lptr [23] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [17], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_TOGGLE,
		"default value",        COMP_TOGGLE,   EMAC_DISABLED,
		"comments",             COMP_CONTENTS, prg_lptr [23],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 2,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [18]' */
	/* create and init prg list 'prg_lptr [24]' */
	prg_lptr [24] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [18], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_STRING,
		"default value",        COMP_CONTENTS, "",
		"comments",             COMP_CONTENTS, prg_lptr [24],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 3,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [19]' */
	/* create and init prg list 'prg_lptr [25]' */
	prg_lptr [25] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [19], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_INTEGER,
		"default value",        COMP_CONTENTS, 0,
		"comments",             COMP_CONTENTS, prg_lptr [25],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 0,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [20]' */
	/* create and init prg list 'prg_lptr [26]' */
	prg_lptr [26] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [20], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_INTEGER,
		"default value",        COMP_CONTENTS_SYMBOL, "two CW",
		"comments",             COMP_CONTENTS, prg_lptr [26],
		"symbol map list",      COMP_ARRAY_CONTENTS (0), obj [21],
		"symbol map list",      COMP_ARRAY_CONTENTS (1), obj [22],
		"flags",                COMP_CONTENTS, 16,
		"data type",            COMP_CONTENTS, 0,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [23]' */
	/* create and init prg list 'prg_lptr [27]' */
	prg_lptr [27] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [23], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_TOGGLE,
		"default value",        COMP_TOGGLE,   EMAC_DISABLED,
		"comments",             COMP_CONTENTS, prg_lptr [27],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 2,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [24]' */
	/* create and init prg list 'prg_lptr [28]' */
	prg_lptr [28] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [28], 
		"Adaptively adjust the schedule (node duty cycle) to the network traffic load for Non-Last-Hop Transmission (NLHT).",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [24], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_TOGGLE,
		"default value",        COMP_TOGGLE,   EMAC_DISABLED,
		"comments",             COMP_CONTENTS, prg_lptr [28],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 2,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [25]' */
	/* create and init prg list 'prg_lptr [29]' */
	prg_lptr [29] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [29], 
		"The duty cycle (schedule) of grade-one nodes can be adjusted different from NLHT, which is denoted as LHT (last-hop transmission).",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [25], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_TOGGLE,
		"default value",        COMP_TOGGLE,   EMAC_DISABLED,
		"comments",             COMP_CONTENTS, prg_lptr [29],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 2,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [26]' */
	/* create and init prg list 'prg_lptr [30]' */
	prg_lptr [30] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [26], 
		"units",                COMP_CONTENTS, "",
		"default value",        COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"default value",        COMP_CONTENTS, (double) 0,
		"comments",             COMP_CONTENTS, prg_lptr [30],
		"symbol map list",      COMP_INTENDED, EMAC_DISABLED,
		"flags",                COMP_CONTENTS, 0,
		"data type",            COMP_CONTENTS, 1,
		"count properties",     COMP_INTENDED, EMAC_DISABLED,
		"list attribute definitions",COMP_INTENDED, EMAC_DISABLED,
		EMAC_EOL);




	/* set the model level attributes */
	/* create and init prg list 'prg_lptr [0]' */
	prg_lptr [0] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [0], 
		"Objid	\\process_id;",
		"",
		"Objid	\\node_id;",
		"",
		"int	\\node_address;",
		"",
		"int	\\grade;",
		"",
		"double	\\send_gm_timer;",
		"",
		"double	\\start_schedule_timer;",
		"",
		"int	\\sleep_factor;",
		"",
		"Evhandle	\\send_gm_event;",
		"",
		"/* Contention Window */",
		"double	\\CW;",
		"",
		"double	\\DIFS;",
		"",
		"double	\\SIFS;",
		"",
		"double	\\durRTS;",
		"",
		"double	\\durCTS;",
		"",
		"double	\\durDATA;",
		"",
		"double	\\durACK;",
		"",
		"double	\\durSleep;",
		"",
		"double	\\durActive_half;",
		"",
		"Evhandle	\\wait_RTS_event;",
		"",
		"Boolean	\\transceiver_state;",
		"",
		"Objid	\\rx_id;",
		"",
		"double	\\waking_time;",
		"",
		"double	\\second_contending_time;",
		"",
		"Evhandle	\\wait_CTS_event;",
		"",
		"Evhandle	\\wait_ACK_event;",
		"",
		"int	\\next_hop_1;",
		"",
		"int	\\next_hop_2;",
		"",
		"Evhandle	\\wait_DATA_event;",
		"",
		"double	\\record_time;",
		"",
		"int	\\node_type;",
		"",
		"double	\\start_grade_timer;",
		"",
		"double	\\all_sleeped_time;",
		"",
		"double	\\all_active_time;",
		"",
		"double	\\all_tx_time;",
		"",
		"double	\\all_rx_time;",
		"",
		"Objid	\\tx_id;",
		"",
		"Objid	\\tx_channel_objid;",
		"",
		"double	\\data_rate;",
		"",
		"Boolean	\\debug;",
		"",
		"List *	\\data_id_list;",
		"",
		"int	\\one_two_cw;",
		"",
		"List *	\\routing_table_list;",
		"",
		"double	\\queue_length;",
		"",
		"Objid	\\queue_id;",
		"",
		"Objid	\\subq_comp_attr_id;",
		"",
		"Objid	\\sub_queue_id;",
		"",
		"Stathandle	\\QLength_handle;",
		"",
		"Stathandle	\\avg_dc_handle;",
		"",
		"PriT_Mac_Flags*	\\mac_flags;",
		"",
		"double	\\CW_counter;",
		"",
		"/* the time duration of one slot */",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [0], 
		"double	\\slot_time;",
		"",
		"/* the event handle when decrease CW_counter */",
		"Evhandle	\\decrease_CW_event;",
		"",
		"/* for each number of packets in the queue,                 */",
		"/* record how many times this specific number of packets    */",
		"/* appearing in the queue, for calculting the parobability. */",
		"List *	\\queue_stat_list;",
		"",
		"Stathandle	\\QStatus_handle;",
		"",
		"int	\\ddc_sleep_factor;",
		"",
		"double	\\hops_avg_delay;",
		"",
		"int	\\hops_pkt_num;",
		"",
		"Stathandle	\\Hops_avg_delay_handle;",
		"",
		"double	\\queue_length_add_one;",
		"",
		"/* the number of pkts due to collision */",
		"Stathandle	\\lost_pkt_col_handle;",
		"",
		"/* the number of pkts due to bufferoverflow */",
		"Stathandle	\\lost_pkt_of_handle;",
		"",
		"Stathandle	\\avg_energy_handle;",
		"",
		"double	\\CW_grade;",
		"",
		"double	\\slot_time_grade;",
		"",
		"int	\\lht_sleep_factor;",
		"",
		"Evhandle	\\ddc_event_handle;",
		"",
		"Evhandle	\\lht_event_handle;",
		"",
		"Stathandle	\\send_prob_handle;",
		"",
		"double	\\send_success;",
		"",
		"double	\\total_send_trial;",
		"",
		"double	\\steady_time;",
		"",
		PRGC_NIL);

	/* create and init prg list 'prg_lptr [1]' */
	prg_lptr [1] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [1], 
		"Packet* pk_TV=NULL;",
		"int pk_type;",
		"double time;",
		"int dest_TV;",
		"int grade_TV;",
		"int hop_num_TV;",
		"int pk_size;",
		"int pk_ddc;",
		"",
		"//for \"queue_stat_list\"",
		"int list_i,*appear_num;",
		"//File",
		"FILE *in;",
		"char temp_file_name[300];",
		"//char message[512];",
		"int data_id;",
		"",
		"DataID * id_TV;",
		"",
		"//For remote statistics",
		"int src_grade; //record the source grade when receiving a data packet",
		"Ici* iciptr_TV;",
		"//char ici_format_name_TV[128];",
		PRGC_NIL);

	/* create and init prg list 'prg_lptr [2]' */
	prg_lptr [2] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [2], 
		"#include <math.h>",
		"//Define node type",
		"#define sink 	1",
		"#define sensor 	2",
		"",
		"//Define ici type",
		"/*#define		energy_dc_ici		1",
		"#define		delivery_ici		2",
		"#define		delay_ici			3",
		"*/",
		"",
		"#define stat_code	500",
		"",
		"//Define packet type",
		"#define grade_pk  1",
		"#define rts_pk    2",
		"#define cts_pk    3",
		"#define ack_pk    4",
		"#define data_pk   5",
		"",
		"//Define queue type",
		"#define grade_queue		0",
		"#define data_queue		1",
		"#define relay_queue		2",
		"",
		"//Define stream in-out NO.",
		"#define SRC_STRM 		1",
		"#define RCV_STRM 		0",
		"#define SEND_STRM 		0",
		"#define DISCARD_STRM 	1",
		"",
		"#define INFINITY 1.0E100",
		"",
		"//Define node state",
		"/*",
		"#define initial			0",
		"#define waking			1",
		"#define awake			2//go to sending state",
		"#define sleeping		3",
		"#define asleep			4",
		"*/",
		"",
		"",
		"//Define remote-interrupt code ",
		"#define REMOTE_STAT_CODE				500	/*remote statistics*/",
		"",
		"//Define self-interrupt code and transition condition",
		"#define START_GRADE_CODE				1000",
		"#define SEND_GM_CODE					6000",
		"#define START_SCHEDULE_CODE				7000",
		"#define TO_WAKE_UP_CODE					8000",
		"#define WAKING_TO_SEND_RTS_CODE			9000",
		"#define SEND_RTS_CODE					10000",
		"#define SEND_DATA_CODE					20000",
		"#define SEND_CTS_CODE					30000",
		"#define SEND_ACK_CODE					40000",
		"#define SLEEP_FROM_SECOND_CODE 			50000",
		"#define SLEEP_FROM_FIRST_CODE			60000",
		"#define DECREASE_CW_CODE				70000",
		"",
		"#define END	        		    	(op_intrpt_type() == OPC_INTRPT_ENDSIM)",
		"#define FROM_LOWER					((op_intrpt_type() == OPC_INTRPT_STRM) && (op_intrpt_strm() == RCV_STRM))",
		"#define FROM_UPPER					((op_intrpt_type() == OPC_INTRPT_STRM) && (op_intrpt_strm() == SRC_STRM))",
		"#define START_GRADE					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == START_GRADE_CODE))",
		"#define SEND_GM                 	((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_GM_CODE))",
		"",
		"#define START_SCHEDULE				((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == START_SCHEDULE_CODE))",
		"#define WAKING_TO_WAIT_RTS			(START_SCHEDULE && grade>=0 && grade%(sleep_factor+2)==0)",
		"#define CONTEND_TO_SEND_RTS			(START_SCHEDULE && grade>=0 && grade%(sleep_factor+2)==1)",
		"#define GO_TO_SLEEP					(START_SCHEDULE && grade>=0 && grade%(sleep_factor+2)>=2)",
		"",
		"#define WAKING_UP					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == TO_WAKE_UP_CODE))",
		"#define WAKING_TO_SEND_RTS			((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == WAKING_TO_SEND_RTS_CODE))",
		"#define SEND_RTS					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_RTS_CODE))",
		"#define SEND_DATA					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_DATA_CODE))",
		"#define SEND_CTS					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_CTS_CODE))",
		"#define SEND_ACK					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SEND_ACK_CODE))",
		"#define SLEEP_FROM_SECOND			((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SLEEP_FROM_SECOND_CODE))",
		"#define SLEEP_FROM_FIRST			((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == SLEEP_FROM_FIRST_CODE))",
		"#define CHECK_CHANNEL				((op_intrpt_type() == OPC_INTRPT_STAT) && op_intrpt_stat()==0)",
		"#define DECREASE_CW					((op_intrpt_type() == OPC_INTRPT_SELF) && (op_intrpt_code() == DECREASE_CW_CODE))",
		"#define DDC_ON						mac_flags->DDC_on == OPC_TRUE",
		"#define LHT_ON						(mac_flags->LHT_on == OPC_TRUE && grade == 1)",
		"",
		"typedef struct",
		"{",
		"	int rt_next_hop;",
		"	int rt_grade;",
		"}RoutingTable;",
		"",
		"",
		"typedef struct PriT_mac_Flags",
		"{",
		"	//Boolean queue_full; //the queue is full or not, check every start of T state.",
		"	Boolean queue_inf; //true if the queue length is infinity",
		"	Boolean busy_before_grade;//the channel is sensed busy before sending the GRADE message",
		"	Boolean busy_before_rts;//the channel is sensed busy before sending RTS.",
		"	Boolean busy_before_cts;//the channel is sensed busy before replying CTS.",
		"	Boolean post_backoff;//true if the node won't go to sleep during T state even if the queue is empty",
		"	Boolean DDC_on;//the flag showing whether open the dynamic duty cycle.",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [2], 
		"	Boolean ddc_relay;//show whether in dynamic duty cycle status if DDC_on is set",
		"	Boolean ddc_source;",
		"	Boolean LHT_on;//true when the LHT (Last-Hop Transmission) is supported",
		"	Boolean lht_next;//true if sleep time will really be used for data transmission.",
		"",
		"	Boolean received_ack; //true if the sender receives the ACK after sending DATA",
		"	Boolean received_data;//true if the receiver receives DATA after replying CTS",
		"}PriT_Mac_Flags;",
		"",
		"",
		"typedef struct",
		"{",
		"	int st_data_id;",
		"}DataID;",
		"",
		"//function prototype",
		"static Boolean data_id_exist(int id);",
		"static void grade_pk_proc(Packet * pk);",
		"static void upper_data_pk_proc(void);",
		"static void power_stat(void);",
		"static void record_grade(void);",
		"static void update_routing_table(int,int);",
		"static int rt_pos_find_next(void);",
		"",
		"int retx=0; //the number of retransmission",
		"",
		"double avg_energy_consumption = 0.0;",
		"double avg_duty_cycle=0.0;",
		"int data_nums_1=0;",
		"",
		"/*",
		"* Packets loss due to overflow should check the following sources",
		"* 1. function \"upper_data_pk_proc\" in FB, since a packet coming from ",
		"*    the upper layer should be inserted into the data queue.",
		"* 2. state \"RCV(1)\", when the relay node receives a packet from the ",
		"*    lower layer, it needs to store it into the data queue.",
		"*/",
		"double pkts_loss_overflow = 0.0;",
		"",
		"/*",
		"* The packets loss due to collision is equal to the number of ",
		"* retransmissions, i.e., the variable\"retx\" when the retransmission is not supported.",
		"* \"retx\" contains the following operations",
		"* 1. in state \"send data\" (in process \"pri_proc_enhanced\"). \"retx\" is increased whenever",
		"*    it sends a packet out, assuming the packet is potentially collidided.",
		"* 2. in state \"RCV(2)\", \"retx\" is decreased when ACK is received to show the packet is ",
		"*    successfully received. ",
		"*/",
		"double pkts_loss_collision = 0.0;",
		PRGC_NIL);

	/* create and init prg list 'prg_lptr [3]' */
	prg_lptr [3] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [3], 
		"",
		"static void update_routing_table(int node_hop,int node_grade)",
		"{",
		"	RoutingTable *rt;",
		"	FIN(update_routing_table(int node_hop,int node_grade));",
		"	",
		"	rt = (RoutingTable *)op_prg_mem_alloc(sizeof(RoutingTable));",
		"	",
		"	rt->rt_next_hop = node_hop;",
		"	rt->rt_grade = node_grade;",
		"	op_prg_list_insert(routing_table_list,rt,OPC_LISTPOS_TAIL);",
		"	",
		"	FOUT;",
		"}",
		"",
		"//Deal with grade pk",
		"static void",
		"grade_pk_proc(Packet * pk)",
		"{",
		"//var",
		"	int pre_hop, grade_in_pk;//,sink_id_in_pk;",
		"//in",
		"	FIN(grade_pk_proc(pk));",
		"//body",
		"	op_pk_nfd_get(pk,\"Grade\",&grade_in_pk);",
		"	op_pk_nfd_get(pk,\"Previous Hop\",&pre_hop);",
		"",
		"	//op_pk_nfd_get(pk,\"Sink ID\",&sink_id_in_pk);",
		"	",
		"	if(grade<0)",
		"	{",
		"		grade = grade_in_pk;",
		"		//op_ima_obj_attr_set(process_id,\"grade\",grade);",
		"		op_ima_obj_attr_set(node_id,\"grade\",grade);",
		"		//sink_id = sink_id_in_pk;",
		"		",
		"		update_routing_table(pre_hop,grade_in_pk-1);",
		"		",
		"		++grade_in_pk;",
		"		op_pk_nfd_set(pk,\"Grade\",grade_in_pk);",
		"		op_pk_nfd_set(pk,\"Previous Hop\",node_address);",
		"		",
		"		//cancel the previous event if pending",
		"		if(op_ev_valid(send_gm_event))",
		"		{",
		"			op_ev_cancel(send_gm_event);",
		"		}",
		"		//at the same time, clear grade_queue",
		"		if(op_subq_empty(grade_queue) == OPC_FALSE)",
		"		{",
		"			op_subq_flush(grade_queue);",
		"		}",
		"		",
		"		op_subq_pk_insert (grade_queue,pk,OPC_QPOS_TAIL);",
		"		//send_gm_event = op_intrpt_schedule_self(op_sim_time() + op_dist_exponential(send_gm_timer), SEND_GM_CODE);",
		"		//comment the above sentence and set timer for sending grade message",
		"		CW_counter = op_dist_outcome(op_dist_load(\"uniform_int\",0.0,CW_grade*1000-1)); // from [0,W/2-1]",
		"		//if(debug){printf(\"******************\\n\");printf(\"\\nGM process: CW_counter is:%f.\\n\\n\",CW_counter);}",
		"		",
		"		if(CW_counter == 0.0){",
		"			op_intrpt_schedule_self(op_sim_time()+0.0, SEND_GM_CODE);",
		"		}else{",
		"			send_gm_event = op_intrpt_schedule_self(op_sim_time()+slot_time_grade,DECREASE_CW_CODE);",
		"			CW_counter--;",
		"		}",
		"		",
		"		FOUT;",
		"	}",
		"	",
		"	if(grade_in_pk < grade)",
		"	{",
		"		grade = grade_in_pk;",
		"		//op_ima_obj_attr_set(process_id,\"grade\",grade);",
		"		op_ima_obj_attr_set(node_id,\"grade\",grade);",
		"		//if(sink_id != sink_id_in_pk)",
		"		//{",
		"		//	sink_id = sink_id_in_pk;",
		"		//}",
		"		op_prg_list_free(routing_table_list);",
		"		update_routing_table(pre_hop,grade_in_pk-1);",
		"			",
		"		++grade_in_pk;",
		"		op_pk_nfd_set(pk,\"Grade\",grade_in_pk);",
		"		op_pk_nfd_set(pk,\"Previous Hop\",node_address);",
		"		",
		"		//cancel the previous event if pending",
		"		if(op_ev_valid(send_gm_event))",
		"		{",
		"			op_ev_cancel(send_gm_event);",
		"		}",
		"		//at the same time, clear grade_queue",
		"		if(op_subq_empty(grade_queue) == OPC_FALSE)",
		"		{",
		"			op_subq_flush(grade_queue);",
		"		}",
		"		",
		"		op_subq_pk_insert (grade_queue,pk,OPC_QPOS_TAIL);",
		"	    //send_gm_event = op_intrpt_schedule_self(op_sim_time() + op_dist_exponential(send_gm_timer), SEND_GM_CODE);",
		"		//comment the above sentence and set timer for sending grade message",
		"		CW_counter = op_dist_outcome(op_dist_load(\"uniform_int\",0.0,CW_grade*1000-1)); // from [0,W-1]",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [3], 
		"		if(CW_counter == 0.0){",
		"			op_intrpt_schedule_self(op_sim_time()+0.0, SEND_GM_CODE);",
		"		}else{",
		"			send_gm_event = op_intrpt_schedule_self(op_sim_time()+slot_time_grade,DECREASE_CW_CODE);",
		"			CW_counter--;",
		"		}",
		"		",
		"		FOUT;",
		"	}",
		"	",
		"	if(grade_in_pk == grade)",
		"	{",
		"		update_routing_table(pre_hop,grade_in_pk-1);		",
		"	}",
		"	",
		"	op_pk_destroy(pk);",
		"	",
		"//out",
		"	FOUT;",
		"}",
		"",
		"//Received DATA from upper layer",
		"static void ",
		"upper_data_pk_proc(void)",
		"{",
		"//var",
		"	Packet* upper_pk;",
		"//in",
		"	FIN(upper_data_pk_proc());",
		"//body",
		"	upper_pk = op_pk_get(SRC_STRM);",
		"/*",
		"	if(mac_flags->queue_full==OPC_TRUE){",
		"		op_pk_destroy(upper_pk);",
		"		op_sim_message(\"queue is full, upper layer packet is dropped!\",\"\");",
		"		if(debug)",
		"			printf(\"The data subqueue is full, the upper layer packet is dropped.\");",
		"	}else{		",
		"*/",
		"	if(op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)<queue_length_add_one || mac_flags->queue_inf == OPC_TRUE){//data queue is not full",
		"		op_pk_nfd_set(upper_pk,\"Type\",data_pk);",
		"		op_pk_nfd_set(upper_pk,\"Src\",node_address);",
		"		op_pk_nfd_set(upper_pk,\"Grade\",grade);",
		"	",
		"		op_subq_pk_insert (data_queue,upper_pk,OPC_QPOS_TAIL);",
		"	",
		"	//op_stat_write(QLength_handle, op_subq_stat(data_queue,OPC_QSTAT_PKSIZE));",
		"		if(debug)",
		"			printf(\"Have inserted the received DATA from \\\"gsrc\\\" into DATA queue\\n\");",
		"	}else{//data queue is full",
		"		pkts_loss_overflow = pkts_loss_overflow + 1.0;",
		"		if(debug)",
		"			printf(\"in function upper_data_pk_proc, data queue is full, the arrived pkt from the upper layer is dropped.\\n\");",
		"	}",
		"//out",
		"	FOUT;",
		"}",
		"",
		"//In \"end\" state, proceed power statistic",
		"static void",
		"power_stat(void)",
		"{",
		"//var",
		"	FILE *in;",
		"	char temp_file_name[300];",
		"	int nodes_num,sink_num;",
		"//	char message[512];",
		"	",
		"	Ici* iciptr;",
		"	//for remote statistics",
		"	double node_energy_consumption,node_duty_cycle; ",
		"//in",
		"	FIN(power_stat(void));",
		"//body",
		"	//average hop delay statistics",
		"	op_stat_write_t(Hops_avg_delay_handle,hops_avg_delay/hops_pkt_num,stat_code+1.0);",
		"	",
		"	",
		"	op_ima_obj_attr_get(node_id,\"Power Record File\",temp_file_name);",
		"	if(strcmp(temp_file_name,\"disabled\")!=0)",
		"	{	",
		"		//op_sim_message(\"power stat\",\"\");",
		"		if(node_type == sensor){",
		"			node_energy_consumption = all_sleeped_time*0.05+(all_active_time-(all_tx_time+all_rx_time))*0.45+(all_tx_time+all_rx_time)*0.5;",
		"			avg_energy_consumption += node_energy_consumption;",
		"			node_duty_cycle = all_active_time/(all_sleeped_time+all_active_time);",
		"			avg_duty_cycle += node_duty_cycle;",
		"			",
		"			/****************************************************************/",
		"			/*create ICI for statistic purpose; then set remote interruption*/",
		"			/*for average duty cycle per node								*/",
		"			/****************************************************************/",
		"			//printf(\"preparing to install ici.\\n\\n\");",
		"			iciptr = op_ici_create(\"energy_dc_ici\");",
		"			//op_ici_attr_set (iciptr, \"type\",energy_dc_ici);",
		"			op_ici_attr_set_dbl(iciptr, \"duty_cycle\",node_duty_cycle);",
		"			op_ici_attr_set_dbl(iciptr, \"energy_consumption\",node_energy_consumption);",
		"			op_ici_attr_set_dbl(iciptr, \"net_running_time\", (all_sleeped_time+all_active_time));",
		"			op_ici_install (iciptr);",
		"			//printf(\"install ici.\\n\");",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [3], 
		"			op_intrpt_force_remote (REMOTE_STAT_CODE,op_id_from_name(node_id,OPC_OBJTYPE_PROC,\"statistics\"));",
		"			op_ici_install (OPC_NIL); ",
		"		}",
		"		nodes_num = op_topo_object_count (OPC_OBJTYPE_NDMOB);",
		"		op_ima_obj_attr_get(process_id, \"Sink Num\",&sink_num);",
		"		if(node_address == nodes_num-sink_num){",
		"			",
		"			//sprintf(message,\"node_address=%d, grade=%d.\\n\",node_address,grade);",
		"			//op_sim_message(message,\"\");",
		"			",
		"			//op_stat_write_t(avg_dc_handle,avg_duty_cycle/(nodes_num-sink_num),(double)(nodes_num-sink_num));",
		"			op_stat_write_t(avg_dc_handle,avg_duty_cycle/(nodes_num-sink_num),stat_code+2.0);",
		"			op_stat_write_t(avg_energy_handle, avg_energy_consumption/((nodes_num-sink_num)*(all_sleeped_time+all_active_time)),stat_code+3.0);",
		"			//op_stat_write(avg_dc_handle,0);",
		"			",
		"			in = fopen(temp_file_name,\"at\");",
		"	",
		"			//fprintf(in,\"%d %f %f %f\\r\\n\",node_address,all_sleeped_time*0.05+(all_active_time-(all_tx_time+all_rx_time))*0.45+(all_tx_time+all_rx_time)*0.5,all_active_time/(all_sleeped_time+all_active_time),(all_sleeped_time+all_active_time));",
		"			",
		"		",
		"			//fprintf(in,\"%d %f %f %d\\r\\n\",node_address,avg_energy_consumption/((nodes_num-sink_num)*(all_sleeped_time+all_active_time)),(avg_duty_cycle/(nodes_num-sink_num))*100,nodes_num-sink_num);",
		"			fprintf(in,\"%f\\r\\n\",(avg_duty_cycle/(nodes_num-sink_num)));",
		"		",
		"			fclose(in);",
		"		}",
		"	}",
		"//out",
		"	FOUT;",
		"}",
		"",
		"static void record_grade(void)",
		"{",
		"/*",
		"* Following things are recorded in this function:",
		"* 1. node adress, and its grade",
		"* 2. the number of retransmissions",
		"* 3. the number of lost pkts due to collision: pkts_loss_collision",
		"* 4. the number of lost pkts due to buffer overflow: pkts_loss_overflow",
		"*",
		"*/",
		"//var",
		"	FILE *file_in;",
		"	char file_name[300];",
		"	Ici* iciptr;",
		"//in",
		"	FIN(record_grade(void));",
		"//body",
		"	op_ima_obj_attr_get(node_id,\"Grade Record File\",file_name);",
		"	",
		"	file_in = fopen(file_name,\"at\");",
		"	fprintf(file_in,\"%d	%d\\r\\n\",\\",
		"		node_address,grade);",
		"	fclose(file_in);",
		"	",
		"	if(node_type==sink && node_address == -1)",
		"	{",
		"		op_ima_obj_attr_get(process_id,\"Retx File\",file_name);",
		"		file_in = fopen(file_name,\"at\");",
		"		fprintf(file_in,\"%d	%d	%f\\r\\n\",\\",
		"		retx,data_nums_1,(double)retx/(double)data_nums_1);",
		"		fclose(file_in);",
		"		",
		"		pkts_loss_collision = retx;",
		"		op_stat_write_t(lost_pkt_col_handle, pkts_loss_collision, stat_code+4.0);",
		"		op_stat_write_t(lost_pkt_of_handle, pkts_loss_overflow, stat_code+5.0);",
		"	}",
		"	",
		"	/****************************************************************/",
		"	/*create ICI for statistic purpose; then set remote interruption*/",
		"	/*for recording the grade distribution in the network			*/",
		"	/****************************************************************/",
		"	if(node_type==sensor){ //the sink node doesn't need to report its grade and childs",
		"		iciptr = op_ici_create(\"grade_ici\");",
		"		op_ici_attr_set_int32(iciptr, \"node_address\",node_address);",
		"		op_ici_attr_set_int32(iciptr, \"node_grade\",grade);",
		"		op_ici_attr_set_int32(iciptr, \"child_nums\",op_prg_list_size(routing_table_list));",
		"		op_ici_install (iciptr);",
		"		op_intrpt_force_remote (REMOTE_STAT_CODE,op_id_from_name(node_id,OPC_OBJTYPE_PROC,\"statistics\"));",
		"		op_ici_install (OPC_NIL);",
		"	}",
		"//out",
		"	FOUT;",
		"}",
		"",
		"static Boolean data_id_exist(int id)",
		"{",
		"//var",
		"	int i,list_size;",
		"	DataID* ID;",
		"	Boolean flag=OPC_FALSE;",
		"//in",
		"	FIN(data_id_exist(int id));",
		"//body",
		"	list_size=op_prg_list_size(data_id_list);",
		"	for(i=0;i<list_size;i++){",
		"		ID=(DataID *)op_prg_list_access(data_id_list,i);",
		"		if(ID->st_data_id==id){",
		"			flag=OPC_TRUE;",
		"			break;",
		"		}",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [3], 
		"	}",
		"//out",
		"	FRET(flag);",
		"}",
		"",
		"static int rt_pos_find_next()",
		"{",
		"	RoutingTable* rt;",
		"	int i,rt_size;",
		"	",
		"    FIN(rt_find_next());",
		"	",
		"	rt_size = op_prg_list_size(routing_table_list);",
		"	if(rt_size>0)",
		"	{",
		"		i = op_dist_outcome(op_dist_load(\"uniform_int\",0,rt_size-1));",
		"		rt = op_prg_list_access(routing_table_list,i);",
		"		FRET(rt->rt_next_hop);",
		"	}",
		"	FRET(0); //\"0\" can not be used as the node address---reserved number",
		"}",
		"",
		"static void queue_stat()",
		"{",
		"//var",
		"	int list_size;",
		"	int list_i,*list_element;",
		"	double sum=0.0;",
		"	FILE *file_in;",
		"	char file_name[300];",
		"//in",
		"	FIN(queue_stat());",
		"//body",
		"	if(mac_flags->queue_inf==OPC_TRUE || node_type==sink)",
		"		FOUT;",
		"	",
		"	list_size = op_prg_list_size(queue_stat_list);",
		"	for(list_i=0;list_i<list_size;list_i++){",
		"		list_element = op_prg_list_access(queue_stat_list,list_i);",
		"		sum=sum + (*list_element);",
		"	}",
		"	",
		"	op_ima_obj_attr_get(node_id,\"Grade Record File\",file_name);",
		"	file_in = fopen(file_name,\"at\");",
		"	fprintf(file_in,\"node %d:\\n\",\\",
		"		node_address);	",
		"	",
		"	for(list_i=0;list_i<list_size;list_i++){",
		"		list_element = op_prg_list_access(queue_stat_list,list_i);",
		"		op_stat_write_t(QStatus_handle,(*list_element)/sum,list_i+1);",
		"		fprintf(file_in,\"%d	%f\\n\",list_i,(*list_element)/sum);",
		"		if(debug) printf(\"packet #: %d, appear times:%d.\\n\",list_i,*list_element);",
		"	}",
		"	fclose(file_in);",
		"	",
		"	if(total_send_trial!=0.0){",
		"		op_stat_write_t(send_prob_handle,send_success/total_send_trial,node_address);",
		"	}",
		"//out",
		"	FOUT;",
		"}",
		PRGC_NIL);

	/* create and init prg list 'prg_lptr [4]' */
	prg_lptr [4] = (Prg_List *)prg_list_create ();
	/* create and init prg list 'prg_lptr [5]' */
	prg_lptr [5] = (Prg_List *)prg_list_create ();
	/* create and init prg list 'prg_lptr [6]' */
	prg_lptr [6] = (Prg_List *)prg_list_create ();
	/* create and init prg list 'prg_lptr [7]' */
	prg_lptr [7] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [7], 
		"2010-05-18",
		"    Fusion of Routing and Mac",
		PRGC_NIL);

	/* create and init prg list 'prg_lptr [8]' */
	prg_lptr [8] = (Prg_List *)prg_list_create ();
	/* create and init prg list 'prg_lptr [9]' */
	prg_lptr [9] = (Prg_List *)prg_list_create ();
	/* create and init prg list 'prg_lptr [10]' */
	prg_lptr [10] = (Prg_List *)prg_list_create ();
	/* create and init prg list 'prg_lptr [11]' */
	prg_lptr [11] = (Prg_List *)prg_list_create ();
	Ema_Model_Attr_Set (model_id,
		"state vars",           COMP_CONTENTS, prg_lptr [0],
		"temp vars",            COMP_CONTENTS, prg_lptr [1],
		"header block",         COMP_CONTENTS, prg_lptr [2],
		"function block",       COMP_CONTENTS, prg_lptr [3],
		"diag block",           COMP_CONTENTS, prg_lptr [4],
		"termination block",    COMP_CONTENTS, prg_lptr [5],
		"global stat descs",    COMP_ARRAY_CONTENTS (0), obj [229],
		"global stat descs",    COMP_ARRAY_CONTENTS (1), obj [230],
		"global stat descs",    COMP_ARRAY_CONTENTS (2), obj [231],
		"global stat descs",    COMP_ARRAY_CONTENTS (3), obj [232],
		"local stat descs",     COMP_ARRAY_CONTENTS (0), obj [233],
		"local stat descs",     COMP_ARRAY_CONTENTS (1), obj [234],
		"local stat descs",     COMP_ARRAY_CONTENTS (2), obj [235],
		"local stat descs",     COMP_ARRAY_CONTENTS (3), obj [236],
		"child processes",      COMP_CONTENTS, prg_lptr [6],
		"model comments",       COMP_CONTENTS, prg_lptr [7],
		EMAC_EOL);

	Ema_Model_Attr_Set (model_id,
		"ext fileset",          COMP_CONTENTS, prg_lptr [8],
		"packet formats",       COMP_CONTENTS, prg_lptr [9],
		"interface descriptions",COMP_INTENDED, EMAC_DISABLED,
		"attribute assignments",COMP_ARRAY_CONTENTS (0), obj [27],
		"attribute assignments",COMP_ARRAY_CONTENTS (1), obj [28],
		"attribute assignments",COMP_ARRAY_CONTENTS (2), obj [29],
		"attribute assignments",COMP_ARRAY_CONTENTS (3), obj [30],
		"attribute assignments",COMP_ARRAY_CONTENTS (4), obj [31],
		"attribute assignments",COMP_ARRAY_CONTENTS (5), obj [32],
		"attribute assignments",COMP_ARRAY_CONTENTS (6), obj [33],
		"attribute assignments",COMP_ARRAY_CONTENTS (7), obj [34],
		"simulation attributes",COMP_INTENDED, EMAC_DISABLED,
		"ODB labels",           COMP_CONTENTS, prg_lptr [10],
		"ODB labels descriptions",COMP_CONTENTS, prg_lptr [11],
		"code language",        COMP_CONTENTS, "C",
		"temp vars in diagnostic block",COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);

	Ema_Model_Attr_Set (model_id,
		"temp vars in termination block",COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* create model level attribute extensions */
	Ema_Model_Attr_Add (model_id, "Send GM Timer", obj [0]);
	Ema_Model_Attr_Add (model_id, "Start Schedule Timer", obj [1]);
	Ema_Model_Attr_Add (model_id, "Sleep Factor", obj [2]);
	Ema_Model_Attr_Tag_List_Set (model_id, "Sleep Factor", "Must be larger than 1.");
	Ema_Model_Attr_Add (model_id, "CW", obj [6]);
	Ema_Model_Attr_Tag_List_Set (model_id, "CW", "Contention Window");
	Ema_Model_Attr_Add (model_id, "durRTS", obj [10]);
	Ema_Model_Attr_Tag_List_Set (model_id, "durRTS", "duration for sending RTS");
	Ema_Model_Attr_Add (model_id, "durCTS", obj [11]);
	Ema_Model_Attr_Tag_List_Set (model_id, "durCTS", "duration for sending CTS");
	Ema_Model_Attr_Add (model_id, "durDATA", obj [12]);
	Ema_Model_Attr_Tag_List_Set (model_id, "durDATA", "duration for sending DATA");
	Ema_Model_Attr_Add (model_id, "durACK", obj [13]);
	Ema_Model_Attr_Tag_List_Set (model_id, "durACK", "duration for sending ACK");
	Ema_Model_Attr_Add (model_id, "DIFS", obj [14]);
	Ema_Model_Attr_Add (model_id, "SIFS", obj [15]);
	Ema_Model_Attr_Add (model_id, "Start Grade Timer", obj [16]);
	Ema_Model_Attr_Add (model_id, "Debug", obj [17]);
	Ema_Model_Attr_Add (model_id, "Retx File", obj [18]);
	Ema_Model_Attr_Add (model_id, "Sink Num", obj [19]);
	Ema_Model_Attr_Add (model_id, "one/two CW", obj [20]);
	Ema_Model_Attr_Add (model_id, "Post Backoff", obj [23]);
	Ema_Model_Attr_Add (model_id, "Dynamic Duty Cycle", obj [24]);
	Ema_Model_Attr_Add (model_id, "LHT", obj [25]);
	Ema_Model_Attr_Add (model_id, "Steady Time", obj [26]);
	Ema_Model_Attr_Tag_List_Set (model_id, "Steady Time", "the time whent the system is steady");


	/* assign attrs for object 'obj [3]' */
	Ema_Object_Attr_Set (model_id, obj [3], 
		"symbol",               COMP_CONTENTS, "14",
		"value",                COMP_CONTENTS_TYPE, EMAC_INTEGER,
		"value",                COMP_CONTENTS, 14,
		EMAC_EOL);


	/* assign attrs for object 'obj [4]' */
	Ema_Object_Attr_Set (model_id, obj [4], 
		"symbol",               COMP_CONTENTS, "18",
		"value",                COMP_CONTENTS_TYPE, EMAC_INTEGER,
		"value",                COMP_CONTENTS, 18,
		EMAC_EOL);


	/* assign attrs for object 'obj [5]' */
	Ema_Object_Attr_Set (model_id, obj [5], 
		"symbol",               COMP_CONTENTS, "22",
		"value",                COMP_CONTENTS_TYPE, EMAC_INTEGER,
		"value",                COMP_CONTENTS, 22,
		EMAC_EOL);


	/* assign attrs for object 'obj [7]' */
	Ema_Object_Attr_Set (model_id, obj [7], 
		"symbol",               COMP_CONTENTS, "0.016",
		"value",                COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"value",                COMP_CONTENTS, (double) 0.016,
		EMAC_EOL);


	/* assign attrs for object 'obj [8]' */
	Ema_Object_Attr_Set (model_id, obj [8], 
		"symbol",               COMP_CONTENTS, "0.064",
		"value",                COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"value",                COMP_CONTENTS, (double) 0.064,
		EMAC_EOL);


	/* assign attrs for object 'obj [9]' */
	Ema_Object_Attr_Set (model_id, obj [9], 
		"symbol",               COMP_CONTENTS, "0.128",
		"value",                COMP_CONTENTS_TYPE, EMAC_DOUBLE,
		"value",                COMP_CONTENTS, (double) 0.128,
		EMAC_EOL);


	/* assign attrs for object 'obj [21]' */
	Ema_Object_Attr_Set (model_id, obj [21], 
		"symbol",               COMP_CONTENTS, "one CW",
		"value",                COMP_CONTENTS_TYPE, EMAC_INTEGER,
		"value",                COMP_CONTENTS, 1,
		EMAC_EOL);


	/* assign attrs for object 'obj [22]' */
	Ema_Object_Attr_Set (model_id, obj [22], 
		"symbol",               COMP_CONTENTS, "two CW",
		"value",                COMP_CONTENTS_TYPE, EMAC_INTEGER,
		"value",                COMP_CONTENTS, 2,
		EMAC_EOL);


	/* assign attrs for object 'obj [35]' */
	/* create and init prg list 'prg_lptr [31]' */
	prg_lptr [31] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [31], 
		"// Obtain related ID",
		"process_id = op_id_self();",
		"node_id = op_topo_parent(process_id);",
		"rx_id = op_id_from_name(node_id,OPC_OBJTYPE_RARX,\"rx\");",
		"tx_id = op_id_from_name(node_id,OPC_OBJTYPE_RATX,\"tx\");//the name of receiver radio in node layer called \"tx\"",
		"",
		"",
		"//obtain tx channel of compound type",
		"op_ima_obj_attr_get_objid (tx_id, \"channel\",&tx_channel_objid);",
		"",
		"tx_channel_objid = op_topo_child (tx_channel_objid, OPC_OBJTYPE_RATXCH, 0);",
		"",
		"op_ima_obj_attr_get(process_id, \"Debug\",&debug);",
		"",
		"op_ima_obj_attr_get(tx_channel_objid,\"data rate\",&data_rate);",
		"",
		"//debug =OPC_TRUE;",
		"",
		"",
		"if(debug)",
		"	printf(\"data_rate=%f\\n\",data_rate);",
		"",
		"pk_TV = op_pk_create_fmt(\"MAC_DATA_PK\");",
		"pk_size=op_pk_total_size_get(pk_TV);",
		"durDATA=(pk_size+10)/data_rate;",
		"op_pk_destroy(pk_TV);",
		"if(debug)",
		"	printf(\"durDATA=%f\\n\",durDATA);",
		"",
		"pk_TV = op_pk_create_fmt(\"MAC_RTS_PK\");",
		"pk_size=op_pk_total_size_get(pk_TV);",
		"durRTS=(pk_size+10)/data_rate;",
		"op_pk_destroy(pk_TV);",
		"if(debug)",
		"	printf(\"durRTS=%f\\n\",durRTS);",
		"",
		"pk_TV = op_pk_create_fmt(\"MAC_CTS_PK\");",
		"pk_size=op_pk_total_size_get(pk_TV);",
		"durCTS=(pk_size+10)/data_rate;",
		"op_pk_destroy(pk_TV);",
		"if(debug)",
		"	printf(\"durCTS=%f\\n\",durCTS);",
		"",
		"pk_TV = op_pk_create_fmt(\"MAC_ACK_PK\");",
		"pk_size=op_pk_total_size_get(pk_TV);",
		"durACK=(pk_size+10)/data_rate;",
		"op_pk_destroy(pk_TV);",
		"if(debug)",
		"	printf(\"durACK=%f\\n\",durACK);",
		"",
		"//obtain parameter",
		"op_ima_obj_attr_get(process_id, \"Start Grade Timer\", &start_grade_timer);		//1",
		"op_ima_obj_attr_get(process_id, \"Send GM Timer\", &send_gm_timer);				//2",
		"op_ima_obj_attr_get(process_id, \"Start Schedule Timer\", &start_schedule_timer);	//3",
		"op_ima_obj_attr_get(process_id, \"Sleep Factor\", &sleep_factor);					//4",
		"op_ima_obj_attr_get(process_id, \"CW\",&CW);										//5",
		"//op_ima_obj_attr_get(process_id, \"durRTS\",&durRTS);								//6",
		"//op_ima_obj_attr_get(process_id, \"durCTS\",&durCTS);								//7",
		"//op_ima_obj_attr_get(process_id, \"durDATA\",&durDATA);							//8",
		"//op_ima_obj_attr_get(process_id, \"durACK\",&durACK);								//9",
		"op_ima_obj_attr_get(process_id, \"DIFS\",&DIFS);									//10",
		"op_ima_obj_attr_get(process_id, \"SIFS\",&SIFS);									//11",
		"op_ima_obj_attr_get(process_id,\"one/two CW\", &one_two_cw);",
		"op_ima_obj_attr_get(process_id, \"Steady Time\",&steady_time);",
		"",
		"",
		"op_ima_obj_attr_get(node_id, \"user id\", &node_address);",
		"op_ima_obj_attr_get(node_id, \"Node Type\",&node_type);",
		"",
		"//op_ima_obj_attr_get(process_id, \"Communication Range\",&range);",
		"//op_ima_obj_attr_set(node_id, \"Communication Range\",range);",
		"",
		"op_ima_obj_attr_get(rx_id, \"state\", &transceiver_state);",
		"",
		"routing_table_list=op_prg_list_create();",
		"CW_grade = CW*1100;",
		"slot_time_grade = 0.001;",
		"grade = -1;",
		"//op_ima_obj_attr_set(process_id,\"grade\",grade);",
		"op_ima_obj_attr_set(node_id,\"grade\",grade);",
		"//sink_id = -1;",
		"",
		"all_sleeped_time = 0;",
		"all_active_time = 0;",
		"all_tx_time = 0;",
		"all_rx_time = 0;",
		"slot_time = 0.001; //the time duration of one slot is 0.001 seconds, i.e., 1ms",
		"",
		"data_id_list=op_prg_list_create();",
		"",
		"mac_flags=(PriT_Mac_Flags *) op_prg_mem_alloc (sizeof (PriT_Mac_Flags));",
		"/*",
		"if(op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)==queue_length){",
		"	mac_flags->queue_full=OPC_TRUE;",
		"}else{",
		"	mac_flags->queue_full=OPC_FALSE;",
		"}*/",
		"//Initialization of the used flags: mac_flags",
		"//mac_flags->queue_full=OPC_FALSE;",
		"mac_flags->busy_before_grade=OPC_FALSE;",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [31], 
		"mac_flags->busy_before_rts=OPC_FALSE;",
		"mac_flags->busy_before_cts=OPC_FALSE;",
		"mac_flags->queue_inf=OPC_FALSE;",
		"mac_flags->post_backoff=OPC_FALSE;",
		"mac_flags->ddc_source=OPC_FALSE;",
		"mac_flags->ddc_relay=OPC_FALSE;",
		"mac_flags->received_ack = OPC_FALSE;",
		"mac_flags->received_data = OPC_FALSE;",
		"mac_flags->LHT_on = OPC_FALSE;",
		"mac_flags->lht_next=OPC_FALSE;",
		"",
		"op_ima_obj_attr_get(process_id,\"Post Backoff\",&mac_flags->post_backoff);",
		"op_ima_obj_attr_get(process_id,\"Dynamic Duty Cycle\",&mac_flags->DDC_on);",
		"ddc_sleep_factor=-1;",
		"if(DDC_ON){",
		"	ddc_sleep_factor=sleep_factor;",
		"	if(debug) printf(\"ddc_sleep_factor=%d.\\n\",ddc_sleep_factor);",
		"}",
		"",
		"op_ima_obj_attr_get(process_id,\"LHT\",&mac_flags->LHT_on);",
		"lht_sleep_factor = -1;",
		"if(LHT_ON){",
		"	lht_sleep_factor=sleep_factor;",
		"	if(debug) printf(\"lht_sleep_factor=%d.\\n\",lht_sleep_factor);",
		"}",
		"",
		"//obtain the queue length",
		"queue_id = op_topo_child(node_id,OPC_OBJTYPE_QUEUE,0);",
		"subq_comp_attr_id = op_topo_child(queue_id,OPC_OBJTYPE_COMP,0);",
		"sub_queue_id = op_topo_child(subq_comp_attr_id,OPC_OBJTYPE_SUBQ,1);",
		"//queue_length's type is double",
		"op_ima_obj_attr_get(sub_queue_id,\"pk capacity\",&queue_length);",
		"queue_length_add_one = -1;",
		"",
		"if(queue_length==INFINITY){",
		"	mac_flags->queue_inf=OPC_TRUE;",
		"	queue_length_add_one = queue_length;",
		"	if(debug) printf(\"it's infinity!!!\\n\");",
		"}else{",
		"	if(debug) printf(\"it's not infinity!!!\\n\");",
		"	//queue_length_add_one=queue_length+1.0;",
		"	queue_length_add_one=queue_length;",
		"	op_ima_obj_attr_set(sub_queue_id,\"pk capacity\",queue_length_add_one);",
		"	",
		"	mac_flags->queue_inf=OPC_FALSE;",
		"	queue_stat_list = op_prg_list_create();",
		"	for(list_i=0;list_i<=queue_length;list_i++){",
		"		appear_num=(int*)op_prg_mem_alloc(sizeof(int));",
		"		*appear_num=0;",
		"		op_prg_list_insert(queue_stat_list,appear_num,OPC_LISTPOS_TAIL);",
		"	}",
		"}",
		"if (debug) {",
		"	printf(\"queue length:\\n\");",
		"	printf(\"The maximum queue length is %f, queue_length_add_on is:%f.\\n\",queue_length,queue_length_add_one);",
		"}",
		"",
		"//data_nums=0;",
		"",
		"//durActive contains two parts: durReceive & durSedn, and durReceive==durSend",
		"if(one_two_cw == 2){",
		"	durActive_half = 2*CW+durRTS+durCTS+durDATA+durACK+DIFS+3*SIFS;",
		"}else if(one_two_cw == 1){",
		"	durActive_half = 2*CW+durRTS+durCTS+durDATA+durACK+DIFS+3*SIFS;",
		"}",
		"if(debug)",
		"	printf(\"durActive_half=%f, T_cycle=%f\\n\",durActive_half,(sleep_factor+2)*durActive_half);",
		"",
		"durSleep = sleep_factor * durActive_half;",
		"if(node_type == sink)",
		"{",
		"	if(node_address==-2){",
		"		start_grade_timer=5.0;",
		"	}",
		"	op_intrpt_schedule_self(op_sim_time() + start_grade_timer,START_GRADE_CODE);",
		"}	",
		"",
		"op_intrpt_schedule_self(op_sim_time() + start_schedule_timer, START_SCHEDULE_CODE);",
		"",
		"hops_avg_delay=0.0;",
		"hops_pkt_num=0;",
		"",
		"//statistics regester",
		"QLength_handle = op_stat_reg(\"Queue Length\", OPC_STAT_INDEX_NONE, OPC_STAT_LOCAL);",
		"QStatus_handle = op_stat_reg(\"Queue Status\",OPC_STAT_INDEX_NONE, OPC_STAT_LOCAL);",
		"Hops_avg_delay_handle = op_stat_reg(\"Average Packet Delay\",OPC_STAT_INDEX_NONE, OPC_STAT_LOCAL);",
		"",
		"avg_dc_handle = op_stat_reg(\"General.Average Duty Cycle\", OPC_STAT_INDEX_NONE, OPC_STAT_GLOBAL);",
		"lost_pkt_col_handle = op_stat_reg(\"General.Lost Pkt Due Collision\", OPC_STAT_INDEX_NONE, OPC_STAT_GLOBAL);",
		"lost_pkt_of_handle = op_stat_reg(\"General.Lost Pkt Due Overflow\", OPC_STAT_INDEX_NONE, OPC_STAT_GLOBAL);",
		"avg_energy_handle = op_stat_reg(\"General.Average Energy Consumption\", OPC_STAT_INDEX_NONE, OPC_STAT_GLOBAL);",
		"send_prob_handle = op_stat_reg(\"Send Probability\", OPC_STAT_INDEX_NONE, OPC_STAT_LOCAL);",
		"send_success=0.0;",
		"total_send_trial=0.0;",
		"//op_ima_obj_attr_get (process_id, \"subqueue\", &subq_objid);",
		"//num_subqs = op_topo_child_count (subq_objid, OPC_OBJTYPE_SUBQ);",
		"//printf(\"子队列个数:%d\\n\",num_subqs);",
		PRGC_NIL);

	/* create and init prg list 'prg_lptr [32]' */
	prg_lptr [32] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [32], 
		"/*",
		"op_ima_obj_attr_get(node_id,\"Grade Record File\",temp_file_name);",
		"remove(temp_file_name);",
		"op_ima_obj_attr_get(node_id,\"Log File\",temp_file_name);",
		"remove(temp_file_name);",
		"*/",
		"if(node_type == sink)",
		"{",
		"	op_ima_obj_attr_get(node_id,\"Log File\",temp_file_name);",
		"	in = fopen(temp_file_name,\"at\");",
		"	",
		"	fprintf(in,\"Begin:\\r\\ndurActive_half: %f, durSleep: %f. cycle time: (%d+2)*%f=%f.(in \\\"gmac->init\\\")\\r\\n\",\\",
		"		durActive_half,durSleep,sleep_factor,durActive_half,(sleep_factor+2)*durActive_half);",
		"	fprintf(in,\"duty cycle:%f.\\r\\n\",\\",
		"			durActive_half*2/(durActive_half*2+durSleep));",
		"	fclose(in);",
		"}",
		"/*",
		"if(strcmp(temp_file_name,\"disable\")!=0)",
		"{	",
		"	printf(\"Node:%d, 此节点可产生记录.\\n\",node_address);",
		"	in = fopen(temp_file_name,\"at\");",
		"	fprintf(in,\"Simulation_time		Average_power_consumed\\r\\n\");",
		"	fclose(in);",
		"}",
		"*/",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [35], 
		"name",                 COMP_CONTENTS, "init",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [31],
		"Exit Execs",           COMP_CONTENTS, prg_lptr [32],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [36],
		"initial",              COMP_TOGGLE,   EMAC_ENABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [37]' */
	/* create and init prg list 'prg_lptr [33]' */
	prg_lptr [33] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [33], 
		"///*",
		"if(CHECK_CHANNEL){",
		"	if(op_ev_valid(send_gm_event)){",
		"		//op_ev_cancel(send_gm_event);",
		"		//send_gm_event = op_intrpt_schedule_self(op_sim_time() + op_dist_exponential(send_gm_timer), SEND_GM_CODE);",
		"		mac_flags->busy_before_grade=OPC_TRUE;",
		"",
		"	}",
		"}",
		"",
		"if(DECREASE_CW){",
		"	if(mac_flags->busy_before_grade == OPC_TRUE){",
		"		//The channel is sensed busy, reset the flag and timer.",
		"		mac_flags->busy_before_grade = OPC_FALSE;",
		"		",
		"		CW_counter = op_dist_outcome(op_dist_load(\"uniform_int\",0.0,CW_grade*1000-1)); // from [0,W-1]",
		"		if(CW_counter == 0.0){",
		"			op_intrpt_schedule_self(op_sim_time()+0.0,SEND_GM_CODE);",
		"		}else{",
		"			send_gm_event = op_intrpt_schedule_self(op_sim_time()+slot_time_grade,DECREASE_CW_CODE);",
		"			CW_counter--;",
		"		}",
		"	}else if(CW_counter == 0.0){",
		"		op_intrpt_schedule_self(op_sim_time()+0.0,SEND_GM_CODE);		",
		"	}else{",
		"		send_gm_event = op_intrpt_schedule_self_mt(op_sim_time()+slot_time_grade,DECREASE_CW_CODE);",
		"		CW_counter--;",
		"	}",
		"}",
		"//*/",
		"",
		"if(END)",
		"{",
		"/*",
		"	op_ima_obj_attr_get(node_id,\"Grade Record File\",temp_file_name);",
		"	",
		"	in = fopen(temp_file_name,\"at\");",
		"	fprintf(in,\"节点：%d, 其级别为：%d\\r\\n\",\\",
		"		node_address,grade);",
		"	fclose(in);",
		"*/",
		"	record_grade();",
		"	",
		"	op_prg_list_free (data_id_list);",
		"	op_prg_mem_free (data_id_list);",
		"",
		"	op_prg_list_free (routing_table_list);",
		"	op_prg_mem_free (routing_table_list);",
		"	op_prg_list_free (queue_stat_list);",
		"	op_prg_mem_free (queue_stat_list);",
		"}",
		"",
		"//Received DATA from upper layer",
		"if(FROM_UPPER)",
		"{",
		"	if(debug)",
		"		printf(\"In \\\"idle\\\" state: received DATA which is from \\\"gsrc\\\".\\n\");",
		"	upper_data_pk_proc();",
		"}",
		PRGC_NIL);

	/* create and init prg list 'prg_lptr [34]' */
	prg_lptr [34] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [34], 
		"/*",
		"if(node_type!=sink)",
		"	grade=1;",
		"",
		"*/",
		"if(grade == 1){",
		"	op_ima_obj_attr_get(process_id,\"LHT\",&mac_flags->LHT_on);",
		"	",
		"	lht_sleep_factor = -1;",
		"	if(LHT_ON){",
		"		lht_sleep_factor=sleep_factor;",
		"		if(debug) printf(\"lht_sleep_factor=%d.\\n\",lht_sleep_factor);",
		"	}",
		"}",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [37], 
		"name",                 COMP_CONTENTS, "idle",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [33],
		"Exit Execs",           COMP_CONTENTS, prg_lptr [34],
		"position",             COMP_CONTENTS, obj [38],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [39]' */
	/* create and init prg list 'prg_lptr [35]' */
	prg_lptr [35] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [35], 
		"pk_TV = op_pk_get(RCV_STRM);",
		"op_pk_nfd_get(pk_TV,\"Type\",&pk_type);",
		"if(pk_type == grade_pk)",
		"{",
		"	grade_pk_proc(pk_TV);",
		"}",
		"else",
		"{",
		"	printf(\"In \\\"GM proc\\\" state, the type of the received packet is: %d, grade=%d.\\n\",pk_type,grade);",
		"	op_pk_destroy(pk_TV);",
		"	op_sim_end(\"Waiting Grade Message Err: Are you kidding me?\",\"I'm waiting Grade Message\",\"Not you\",\"请仔细检查\");",
		"",
		"}",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [39], 
		"name",                 COMP_CONTENTS, "GM proc",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [35],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [40],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [41]' */
	/* create and init prg list 'prg_lptr [37]' */
	prg_lptr [37] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [37], 
		"if(op_subq_empty(grade_queue) == OPC_FALSE)",
		"{",
		"	pk_TV = op_subq_pk_remove(grade_queue, OPC_QPOS_HEAD);",
		"	op_pk_send(pk_TV,SEND_STRM);",
		"	//printf(\"In \\\"send gm\\\" state. The grade message is removed!\\n\");",
		"}",
		"",
		"else",
		"{",
		"	op_sim_end(\"Err: grade queue is empty, simulation is over!\",\"\",\"\",\"\");",
		"}",
		"",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [41], 
		"name",                 COMP_CONTENTS, "send gm",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [37],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [42],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [43]' */
	/* create and init prg list 'prg_lptr [39]' */
	prg_lptr [39] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [39], 
		"if(op_intrpt_code() == START_SCHEDULE_CODE)// from \"GO_TO_SLEEP\"",
		"{	",
		"	if(grade % (sleep_factor+2)>=2)",
		"	{",
		"		time = (sleep_factor+2-grade%(sleep_factor+2))*durActive_half;",
		"		//time = durSleep - ((grade%(sleep_factor+2))-3)*durActive_half;			",
		"	}",
		"	else",
		"	{",
		"		op_sim_end(\"仿真出错\",\"grade%(sleep_factor+2)不大于3或0\",\"请反思\",\"\");",
		"	}",
		"	/*",
		"	op_ima_obj_attr_get(node_id,\"Log File\",temp_file_name);",
		"	in = fopen(temp_file_name,\"at\");",
		"	fprintf(in,\"Node:%d, Grade:%d, Grade%%(%d+2): %d, time:%f, enter into \\\"sleeping\\\"state, been \\\"asleep\\\" for: %f.\\r\\n\",\\",
		"		node_address,grade,sleep_factor,grade%(sleep_factor+2),op_sim_time(),durSleep-time);",
		"	fclose(in);",
		"	*/",
		"	//set timer,when wake up, go to \"waking\" state",
		"	op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);",
		"	if(debug)",
		"		printf(\"Node:%d, Grade:%d, time:%f,in sleeping period.\\n\\",
		"			Initial to sleeping.\\n\\",
		"			After %f seconds, go to wake up.\\n\",\\",
		"			node_address,grade,op_sim_time(),time);",
		"	",
		"	//time statistic",
		"	record_time = op_sim_time();",
		"}",
		"else",
		"if(op_intrpt_code() == SLEEP_FROM_FIRST_CODE)//sleep from first period",
		"{",
		"	//time = CW+durCTS+durDATA+durACK+3*SIFS;",
		"	time = waking_time + durActive_half - op_sim_time();",
		"		",
		"	if (node_type == sensor){",
		"		",
		"		if(mac_flags->received_data == OPC_FALSE){",
		"			mac_flags->ddc_relay = OPC_FALSE;",
		"		}",
		"		",
		"		//when wake up, go to \"second contention\" state",
		"		op_intrpt_schedule_self(op_sim_time() + time, WAKING_TO_SEND_RTS_CODE);",
		"		if(debug)",
		"			printf(\"Node:%d, Grade:%d, time:%f,in sleeping period.\\n\\",
		"				To sleeping from the first period.\\n\\",
		"				After %f seconds, go to second period.\\n\",\\",
		"				node_address,grade,op_sim_time(),time);",
		"	",
		"		//time statistic",
		"		all_active_time = all_active_time+(op_sim_time()-record_time);",
		"		record_time = op_sim_time();",
		"	}else if(node_type == sink){",
		"		//when wake up, go to \"waking\" state	",
		"		op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);",
		"		",
		"		if(debug)",
		"			printf(\"Node:%d, Grade:%d, time:%f,sink node in sleeping period.\\n\\",
		"				from the first period.\\n\\",
		"				After %f seconds, go to wake up.\\n\\n\",\\",
		"				node_address,grade,op_sim_time(),time);",
		"	",
		"		//time statistic",
		"		all_active_time = all_active_time+(op_sim_time()-record_time);",
		"		record_time = op_sim_time();",
		"	}",
		"}",
		"else",
		"if(op_intrpt_code() == SLEEP_FROM_SECOND_CODE)//sleep from second period",
		"{",
		"",
		"	if(mac_flags->received_ack == OPC_FALSE){",
		"		mac_flags->ddc_source = OPC_FALSE;",
		"	}",
		"	",
		"	if(DDC_ON){",
		"		if(mac_flags->ddc_relay == OPC_TRUE){",
		"			time=second_contending_time + durActive_half + 2*durActive_half - op_sim_time();",
		"			/*******************************************************/",
		"			/*****create ICI for DDC or LHT purpose ****************/",
		"			/*******************************************************/",
		"			/*",
		"			iciptr_TV = op_ici_create(\"\");",
		"			op_ici_attr_set_int32(iciptr_TV, \"\",);",
		"			op_ici_attr_set_int32(iciptr_TV, \"\",);",
		"			op_ici_attr_set_dbl(iciptr_TV, \"\",);",
		"			op_ici_install (iciptr_TV);*/",
		"			ddc_event_handle = op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);",
		"			//op_ici_install (OPC_NIL);",
		"			",
		"			//mac_flags->ddc_source=OPC_TRUE;",
		"			///*",
		"			ddc_sleep_factor=ddc_sleep_factor - 4;",
		"			mac_flags->ddc_relay = OPC_FALSE;",
		"			mac_flags->ddc_source = OPC_FALSE;",
		"			//*/",
		"		}else if(mac_flags->ddc_source == OPC_TRUE){",
		"			time=second_contending_time + durActive_half + 3*durActive_half - op_sim_time();",
		"			ddc_event_handle = op_intrpt_schedule_self(op_sim_time() + time, WAKING_TO_SEND_RTS_CODE);",
		"			//mac_flags->ddc_source=OPC_FALSE;",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [39], 
		"			",
		"			///*",
		"			ddc_sleep_factor=ddc_sleep_factor - 4;",
		"			mac_flags->ddc_relay = OPC_FALSE;",
		"			mac_flags->ddc_source = OPC_FALSE;",
		"			//*/",
		"		}else{",
		"			//ddc_sleep_factor = ddc_sleep_factor - 2;",
		"			time=second_contending_time + durActive_half + ddc_sleep_factor*durActive_half - op_sim_time();",
		"			if(debug) printf(\"time=%f.\\n\\n\",time);",
		"			op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);",
		"			",
		"			ddc_sleep_factor=sleep_factor;",
		"		}",
		"		",
		"		if(LHT_ON){",
		"			if(mac_flags->lht_next=OPC_TRUE){",
		"				time=second_contending_time + durActive_half + 0*durActive_half - op_sim_time();",
		"				lht_event_handle = op_intrpt_schedule_self(op_sim_time() + time, WAKING_TO_SEND_RTS_CODE);",
		"			",
		"				lht_sleep_factor = lht_sleep_factor-1;",
		"				mac_flags->lht_next=OPC_FALSE;",
		"			}",
		"			/*",
		"			else{",
		"				time=second_contending_time + durActive_half + lht_sleep_factor*durActive_half - op_sim_time();",
		"				op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);",
		"			",
		"				lht_sleep_factor=sleep_factor;",
		"			}",
		"			*/",
		"		}",
		"	}else if (LHT_ON){",
		"		if(mac_flags->lht_next=OPC_TRUE){",
		"			time=second_contending_time + durActive_half + 0*durActive_half - op_sim_time();",
		"			lht_event_handle = op_intrpt_schedule_self(op_sim_time() + time, WAKING_TO_SEND_RTS_CODE);",
		"			",
		"			lht_sleep_factor = lht_sleep_factor-1;",
		"			mac_flags->lht_next=OPC_FALSE;",
		"		}else{",
		"			time=second_contending_time + durActive_half + lht_sleep_factor*durActive_half - op_sim_time();",
		"			op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);",
		"			",
		"			lht_sleep_factor=sleep_factor;",
		"		}",
		"	}else{",
		"",
		"		time = second_contending_time + durActive_half + durSleep - op_sim_time();",
		"	",
		"		//when wake up, go to \"waking\" state",
		"		op_intrpt_schedule_self(op_sim_time() + time, TO_WAKE_UP_CODE);",
		"		if(debug)",
		"			printf(\"Node:%d, Grade:%d, time:%f,in sleeping period.\\n\\",
		"				To sleeping from second period.\\n\\",
		"				After %f seconds, go to \\\"wakeing\\\" state.\\n\",\\",
		"				node_address,grade,op_sim_time(),time);",
		"	}",
		"	//time statistic",
		"	all_active_time = all_active_time+(op_sim_time()-record_time);",
		"	record_time = op_sim_time();",
		"}",
		"",
		"//Received DATA from upper layer",
		"if(FROM_UPPER)",
		"{",
		"	if(debug)",
		"		printf(\"Node: %d, In \\\"sleeping\\\" state: received DATA which is from \\\"gsrc\\\".\\n\",node_address);",
		"	upper_data_pk_proc();",
		"}",
		"",
		"if((FROM_LOWER && !transceiver_state)||(FROM_LOWER && node_type==sink))",
		"{	",
		"	op_pk_destroy(op_pk_get(RCV_STRM));",
		"	if(debug)",
		"		printf(\"Node:%d, time:%f. Node is sleeping, destroy the received pk.\\n\",\\",
		"			node_address,op_sim_time());",
		"}",
		"if(END)",
		"{",
		"	all_sleeped_time = all_sleeped_time + (op_sim_time()-record_time);",
		"	power_stat();",
		"	record_grade();",
		"	queue_stat();",
		"	",
		"	op_prg_list_free (data_id_list);",
		"	op_prg_mem_free (data_id_list);",
		"	op_prg_list_free (routing_table_list);",
		"	op_prg_mem_free (routing_table_list);",
		"	op_prg_list_free (queue_stat_list);",
		"	op_prg_mem_free (queue_stat_list);",
		"}",
		"//close transceiver",
		"transceiver_state = OPC_FALSE;",
		"op_ima_obj_attr_set(rx_id, \"state\", transceiver_state);",
		PRGC_NIL);

	/* create and init prg list 'prg_lptr [40]' */
	prg_lptr [40] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [43], 
		"name",                 COMP_CONTENTS, "sleeping",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [39],
		"Exit Execs",           COMP_CONTENTS, prg_lptr [40],
		"position",             COMP_CONTENTS, obj [44],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [45]' */
	/* create and init prg list 'prg_lptr [41]' */
	prg_lptr [41] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [41], 
		"",
		"//Log record",
		"if(WAKING_TO_WAIT_RTS)",
		"{",
		"	/*",
		"	op_ima_obj_attr_get(node_id,\"Log File\",temp_file_name);",
		"	in = fopen(temp_file_name,\"at\");",
		"	fprintf(in,\"Node:%d, Grade:%d, Grade%%4: %d, time:%f, enter into \\\"waking\\\" state.\\r\\n\",\\",
		"		node_address,grade,grade%4, op_sim_time());",
		"	fclose(in);",
		"	*/",
		"	record_time = op_sim_time();",
		"}	",
		"",
		"/*",
		"if(DDC_ON){",
		"	if(mac_flags->ddc_relay=OPC_TRUE){",
		"		mac_flags->ddc_relay=OPC_FALSE;",
		"	}",
		"}",
		"*/",
		"",
		"//enable transceiver",
		"//if(node_type == sensor){",
		"	transceiver_state = OPC_TRUE;",
		"	op_ima_obj_attr_set(rx_id, \"state\", transceiver_state);",
		"//}",
		"",
		"waking_time = op_sim_time();",
		"",
		"if(mac_flags->queue_inf==OPC_TRUE || op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)<queue_length_add_one){ //queue is not full",
		"	time = CW+DIFS+durRTS;",
		"	wait_RTS_event = op_intrpt_schedule_self(op_sim_time() + time, SLEEP_FROM_FIRST_CODE);",
		"}else{ //queue is full, cannot receive anything, go to sleep immediately.",
		"	op_intrpt_schedule_self(op_sim_time() + 0.0, SLEEP_FROM_FIRST_CODE);",
		"}",
		"",
		"if(debug)",
		"	printf(\"Node:%d, Grade:%d, time:%f, entered into first period (\\\"waking\\\" state).\\n\\",
		"	    Waiting RTS.\\n\\",
		"		If no RTS, after %f seconds, go to sleep.\\n\",\\",
		"		node_address,grade,op_sim_time(),time);",
		"",
		"//time statistic",
		"//if(node_type == sensor){",
		"	all_sleeped_time = all_sleeped_time + (op_sim_time() - record_time);",
		"	record_time = op_sim_time();",
		"//}",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [45], 
		"name",                 COMP_CONTENTS, "waking",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [41],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [46],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [47]' */
	/* create and init prg list 'prg_lptr [43]' */
	prg_lptr [43] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [43], 
		"/*",
		"* obtain the associated ici first",
		"*/",
		"/*",
		"iciptr_TV = op_intrpt_ici (); ",
		"if(iciptr_TV != OPC_NIL){",
		"	op_ici_format(iciptr_TV,ici_format_name_TV);",
		"}else{",
		"	",
		"}",
		"*/",
		"",
		"//if the maximum queue length is set to be \"queue_length+1\",",
		"//you should remove the additional packet packet ",
		"//at the last position of the queue, here.",
		"// add your code here.",
		"/*",
		"if((mac_flags->queue_inf==OPC_FALSE) && (op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)==queue_length_add_one)){",
		"	if(debug) printf(\"Node: %d, grade: %d, time: %f. queue is not infinity, and queue length is added by one: %d,\\",
		"		the last one need to be removed.\\n\\n\",node_address,grade,op_sim_time(),queue_length_add_one);",
		"	pk_TV = op_subq_pk_remove(data_queue, OPC_QPOS_TAIL);",
		"	op_pk_destroy(pk_TV);",
		"	pkts_loss_overflow = pkts_loss_overflow + 1.0;",
		"	if(debug)",
		"		printf(\"in state \\\"second contention\\\", data queue is full, the additional one is dropped.\\n\");",
		"",
		"}",
		"*/",
		"",
		"//The number of packets in the queue at the beginning of T state.",
		"if(op_sim_time()>=steady_time){",
		"	op_stat_write(QLength_handle, op_subq_stat(data_queue,OPC_QSTAT_PKSIZE));",
		"}",
		"",
		"//calculate the number of times a specific number of packets ",
		"//appearing in the queue if the queue length is not infinity.",
		"if(mac_flags->queue_inf == OPC_FALSE && op_sim_time()>=steady_time){",
		"	list_i=op_subq_stat(data_queue,OPC_QSTAT_PKSIZE);",
		"	appear_num = op_prg_list_access(queue_stat_list,list_i);",
		"	(*appear_num)++;",
		"	if(debug) printf(\"queue_stat_list size: %d.\\n\",op_prg_list_size(queue_stat_list));",
		"}",
		"",
		"",
		"",
		"/*",
		"if(op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)==queue_length){",
		"	mac_flags->queue_full=OPC_TRUE;",
		"}else{",
		"	mac_flags->queue_full=OPC_FALSE;",
		"}",
		"*/",
		"",
		"//Log record",
		"if(CONTEND_TO_SEND_RTS)",
		"{",
		"	/*",
		"	op_ima_obj_attr_get(node_id,\"Log File\",temp_file_name);",
		"	in = fopen(temp_file_name,\"at\");",
		"	fprintf(in,\"Node:%d, Grade:%d, Grade%%4: %d, time:%f, enter into \\\"second contention\\\" state.\\r\\n\",\\",
		"		node_address,grade,grade%4,op_sim_time());",
		"	fclose(in);",
		"	*/",
		"	record_time = op_sim_time();",
		"}",
		"",
		"",
		"/*",
		"1. check data_queue",
		"   if(Y) open transceiver, contending for sending RTS",
		"   if(N) go to sleep",
		"*/",
		"",
		"//enable transceiver",
		"transceiver_state = OPC_TRUE;",
		"op_ima_obj_attr_set(rx_id, \"state\", transceiver_state);",
		"",
		"/*",
		"if(DDC_ON){",
		"	if(mac_flags->ddc_source==OPC_FALSE){//In the last cycle, ddc_source is not set.",
		"		ddc_sleep_factor=sleep_factor;",
		"	}else{",
		"		mac_flags->ddc_source=OPC_FALSE;",
		"		ddc_sleep_factor=ddc_sleep_factor - 4;",
		"	}",
		"	",
		"	if(mac_flags->ddc_relay==OPC_TRUE || op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)>1){",
		"		if(ddc_sleep_factor>=6){",
		"			mac_flags->ddc_source=OPC_TRUE;",
		"		}else{",
		"			mac_flags->ddc_source=OPC_FALSE;",
		"			mac_flags->ddc_relay=OPC_FALSE;",
		"		}",
		"	}",
		"	if(debug) printf(\"ddc_sleep_factor=%d, mac_flags->ddc_relay=%d, mac_flags->ddc_source=%d.\\n\\n\",\\",
		"		ddc_sleep_factor, mac_flags->ddc_relay,mac_flags->ddc_source);",
		"}",
		"*/",
		"",
		"",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [43], 
		"second_contending_time = op_sim_time();",
		"if(op_subq_empty(data_queue) == OPC_FALSE || mac_flags->post_backoff==OPC_TRUE)",
		"{//data queue is not empty, or post backoff is set",
		"//	time = op_dist_uniform(CW*1000.0)/1000.0 + DIFS;",
		"	",
		"	//debug=OPC_TRUE;",
		"    if(op_sim_time()>=steady_time) {total_send_trial++;}",
		"",
		"	CW_counter = op_dist_outcome(op_dist_load(\"uniform_int\",CW*1000.0-1,CW*1000.0-1)); // from [0,W-1]",
		"	if(debug) printf(\"1. in send rts, CW_counter = %f.\\n\",CW_counter);",
		"	",
		"	if(CW_counter == 0.0){",
		"		if(op_subq_empty(data_queue) == OPC_TRUE){",
		"			op_intrpt_schedule_self(op_sim_time()+DIFS,SLEEP_FROM_SECOND_CODE);",
		"		}else{",
		"			if(op_sim_time()>=steady_time) {send_success++;}",
		"			op_intrpt_schedule_self(op_sim_time()+DIFS+0.0,SEND_RTS_CODE);",
		"		}",
		"	}else{",
		"		decrease_CW_event = op_intrpt_schedule_self(op_sim_time()+DIFS+slot_time,DECREASE_CW_CODE);",
		"		CW_counter--;",
		"	}",
		"	//time = time/1000.0 + DIFS;",
		"	//if(debug) printf(\"2. in send rts, CW_counter = %f.\\n\",CW_counter);",
		"	",
		"	if(debug)",
		"		printf(\"Node:%d, Grade:%d, time:%f, in second period.\\n\\",
		"			data_queue is not empty, Contending to send RTS.\\n\\",
		"			Waiting to send RTS.\\n\",\\",
		"			node_address,grade,op_sim_time());",
		"	//sprintf(message,\"Contend to send RTS, op_dist_uniform(CW)=%f\\n\",time-DIFS);",
		"	//op_sim_message(\"\",message);",
		"}",
		"else//data queue is empty and post_backoff is not used, go to sleep",
		"{",
		"	//debug=OPC_FALSE;",
		"",
		"	op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);",
		"	if(debug)",
		"		printf(\"Node:%d, Grade:%d, time:%f, in second period.\\n\\",
		"			data_queue is empty.\\n\\",
		"			Go to sleep immediately.\\n\",\\",
		"			node_address,grade,op_sim_time());",
		"}",
		"",
		"//time statistic",
		"all_sleeped_time = all_sleeped_time + (op_sim_time()-record_time);",
		"record_time = op_sim_time();",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [47], 
		"name",                 COMP_CONTENTS, "second contention",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [43],
		"Enter Execs",          COMP_USER_INTENDED, EMAC_ENABLED,
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [48],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [49]' */
	/* create and init prg list 'prg_lptr [45]' */
	prg_lptr [45] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [45], 
		"//send RTS",
		"if(pk_TV!=NULL)",
		"{",
		"	op_pk_destroy(pk_TV);",
		"}",
		"if(node_type!=sink && (next_hop_2=rt_pos_find_next())==0)",
		"{",
		"	op_sim_end(\"Routing table is empty Err: Are you sure you are not kidding me?\",\"\",\"\",\"\");",
		"}",
		"",
		"pk_TV = op_pk_create_fmt(\"MAC_RTS_PK\");",
		"op_pk_nfd_set(pk_TV, \"Type\", rts_pk);",
		"op_pk_nfd_set(pk_TV,\"Src\", node_address);",
		"op_pk_nfd_set(pk_TV,\"Grade\",grade);",
		"op_pk_nfd_set(pk_TV, \"Dest\", next_hop_2);",
		"op_pk_nfd_set(pk_TV, \"Dynamic DC\", 0);",
		"",
		"if(DDC_ON && (op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)>1 || mac_flags->ddc_relay == OPC_TRUE)){",
		"/*",
		"When DDC_ON is true, and LHT_ON is false, there are two cases in which a node needs to set the RTS's \"Dynamic DC\" field.",
		"one is the queue length is larger than one, the other is the flag ddc_relay is true.",
		"*/",
		"	if(!op_ev_valid(ddc_event_handle)){ //indicates that ddc event has not been set or has happened.",
		"		if(ddc_sleep_factor>=6){",
		"			mac_flags->ddc_source=OPC_TRUE;//the flag set here is used in \"sleeping\"",
		"			op_pk_nfd_set(pk_TV, \"Dynamic DC\", 1);",
		"			if(debug) printf(\"Set the field: Dynamic DC of the RTS packet.\\n\\n\");",
		"		}else{",
		"			mac_flags->ddc_source=OPC_FALSE;",
		"			mac_flags->ddc_relay=OPC_FALSE;",
		"		}",
		"		",
		"		if(grade==1 && mac_flags->ddc_relay == OPC_FALSE){",
		"		// if the condition is not that the curent node in grade 1 needs to relay packet for nodes in grade 2,",
		"		// then we don't need to use DDC.",
		"			mac_flags->ddc_source=OPC_FALSE;",
		"			mac_flags->ddc_relay=OPC_FALSE;",
		"		}",
		"		",
		"	}else{",
		"		if(debug) printf(\"in wait CTS, ddc_event is not valid, node can come to this state due to lht_event!\\n\\n\");",
		"	}",
		"}",
		"",
		"if(LHT_ON){ ",
		"	if(op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)>1){",
		"		if(!DDC_ON){",
		"			if(lht_sleep_factor > 2){",
		"				mac_flags->lht_next=OPC_TRUE;",
		"			}",
		"		}else{ //DDC_ON is true",
		"			if(op_ev_valid(ddc_event_handle)){//has set ddc event",
		"				if(lht_sleep_factor > ddc_sleep_factor+2){",
		"					mac_flags->lht_next=OPC_TRUE;",
		"				}else{",
		"				}",
		"				",
		"			}else{ //has not set ddc event",
		"		",
		"				if(mac_flags->ddc_relay == OPC_TRUE){//ddc will happen",
		"					lht_sleep_factor = ddc_sleep_factor;",
		"					if(lht_sleep_factor > 2){",
		"						mac_flags->lht_next=OPC_TRUE;",
		"					}",
		"				}else{//ddc won't happen",
		"					if(lht_sleep_factor > 2){",
		"						mac_flags->lht_next=OPC_TRUE;",
		"					}",
		"				}",
		"			}",
		"		}",
		"	}",
		"}",
		"",
		"op_pk_send(pk_TV, SEND_STRM);",
		"",
		"//time statistic",
		"all_tx_time = all_tx_time + durRTS;",
		"",
		"//set timer for waiting CTS from lower grade nodes",
		"if(one_two_cw == 2){",
		"	time = durRTS+CW+SIFS+durCTS;",
		"}else if(one_two_cw == 1){",
		"	time = durRTS+SIFS+durCTS;",
		"}",
		"",
		"wait_CTS_event = op_intrpt_schedule_self(op_sim_time() + time,SLEEP_FROM_SECOND_CODE);",
		"if(debug)",
		"	printf(\"Node:%d, Grade:%d, time:%f, in second period.\\n\\",
		"		Have sent RTS.\\n\\",
		"		Waiting to receive CTS.\\n\\",
		"		If no CTS, after %f seconds, go to sleep.\\n\",\\",
		"		node_address,grade,op_sim_time(),time);",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [49], 
		"name",                 COMP_CONTENTS, "wait CTS",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [45],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [50],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [51]' */
	/* create and init prg list 'prg_lptr [47]' */
	prg_lptr [47] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [47], 
		"//Received DATA from upper layer",
		"if(FROM_UPPER)",
		"{",
		"	if(debug)",
		"		printf(\"Node:%d,In \\\"first\\\" state: received DATA which is from \\\"gsrc\\\".\\n\",node_address);",
		"	upper_data_pk_proc();",
		"}",
		"",
		"if(END)",
		"{",
		"",
		"	all_active_time = all_active_time+(op_sim_time()-record_time);",
		"	power_stat();",
		"	record_grade();",
		"	queue_stat();",
		"	",
		"	op_prg_list_free (data_id_list);",
		"	op_prg_mem_free (data_id_list);",
		"	op_prg_list_free (routing_table_list);",
		"	op_prg_mem_free (routing_table_list);",
		"	op_prg_list_free (queue_stat_list);",
		"	op_prg_mem_free (queue_stat_list);",
		"}",
		"",
		"if(DECREASE_CW){",
		"	if(mac_flags->busy_before_cts == OPC_TRUE){",
		"		//The channel is sensed busy, reset the flag and go to sleep immediately.",
		"		mac_flags->busy_before_cts = OPC_FALSE;",
		"		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);",
		"		if(debug)",
		"			printf(\"In \\\"first\\\" state: The channel is sensed busy, \\",
		"				reset the flag and go to sleep immediately.\\n\\n\");",
		"	}else if(CW_counter == 0){",
		"		op_intrpt_schedule_self(op_sim_time()+0.0,SEND_CTS_CODE);",
		"		if(debug)",
		"			printf(\"In \\\"second\\\" state: CW_counter = %f.\\n\",CW_counter);",
		"	}else{",
		"		decrease_CW_event = op_intrpt_schedule_self_mt(op_sim_time()+slot_time,DECREASE_CW_CODE);",
		"		CW_counter--;",
		"	}",
		"",
		"}",
		PRGC_NIL);

	/* create and init prg list 'prg_lptr [48]' */
	prg_lptr [48] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [51], 
		"name",                 COMP_CONTENTS, "first",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [47],
		"Exit Execs",           COMP_CONTENTS, prg_lptr [48],
		"position",             COMP_CONTENTS, obj [52],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [53]' */
	/* create and init prg list 'prg_lptr [49]' */
	prg_lptr [49] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [49], 
		"//Received DATA from upper layer",
		"if(FROM_UPPER)",
		"{",
		"	if(debug)",
		"		printf(\"Node:%d, In \\\"second\\\" state: received DATA which is from \\\"gsrc\\\".\\n\",node_address);",
		"	upper_data_pk_proc();",
		"}",
		"if(END)",
		"{",
		"	all_active_time = all_active_time + (op_sim_time()-record_time);",
		"	power_stat();",
		"	record_grade();",
		"	queue_stat();",
		"		",
		"	op_prg_list_free (data_id_list);",
		"	op_prg_mem_free (data_id_list);",
		"	op_prg_list_free (routing_table_list);",
		"	op_prg_mem_free (routing_table_list);",
		"	",
		"	//if(mac_flags->queue_inf==OPC_FALSE)",
		"	op_prg_list_free (queue_stat_list);",
		"	op_prg_mem_free (queue_stat_list);",
		"}",
		"if(DECREASE_CW){",
		"	if(mac_flags->busy_before_rts == OPC_TRUE){",
		"		//The channel is sensed busy, reset the flag and go to sleep immediately.",
		"		mac_flags->busy_before_rts = OPC_FALSE;",
		"		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);",
		"		if(debug)",
		"			printf(\"In \\\"second\\\" state: The channel is sensed busy, \\",
		"				reset the flag and go to sleep immediately.\\n\\n\");",
		"	}else if(CW_counter == 0){",
		"		if(op_subq_empty(data_queue) == OPC_TRUE){",
		"			op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);",
		"		}else{",
		"			if(op_sim_time()>=steady_time) {send_success++;}",
		"			op_intrpt_schedule_self(op_sim_time()+0.0,SEND_RTS_CODE);",
		"		}",
		"		if(debug)",
		"			printf(\"In \\\"second\\\" state: CW_counter = %f.\\n\",CW_counter);",
		"	}else{",
		"		decrease_CW_event = op_intrpt_schedule_self_mt(op_sim_time()+slot_time,DECREASE_CW_CODE);",
		"		CW_counter--;",
		"	}",
		"}",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [53], 
		"name",                 COMP_CONTENTS, "second",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [49],
		"Enter Execs",          COMP_USER_INTENDED, EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [54],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [55]' */
	/* create and init prg list 'prg_lptr [51]' */
	prg_lptr [51] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [51], 
		"if(pk_TV!=NULL)",
		"{",
		"	op_pk_destroy(pk_TV);",
		"}",
		"",
		"pk_TV = op_pk_get(RCV_STRM);",
		"",
		"pk_size=op_pk_total_size_get(pk_TV);",
		"time=(pk_size+10)/data_rate;",
		"//time statistic",
		"//all_rx_time = all_rx_time + time;",
		"if(debug)",
		"	printf(\"For sending data, Node:%d, Grade:%d, time:%f.\\nReceived a packet, size: %d.\\nReceive Duration is: %f.\\n\",	node_address,grade,op_sim_time(),pk_size,time);",
		"",
		"op_pk_nfd_get(pk_TV,\"Type\",&pk_type);",
		"",
		"",
		"if(pk_type == rts_pk)",
		"{",
		"	//time statistic",
		"	all_rx_time = all_rx_time + durRTS;",
		"	",
		"	//RTS listening during contending to send RTS(\"uniform(CW)+durDIFS\")",
		"	if(op_ev_valid(decrease_CW_event))",
		"	{",
		"		op_ev_cancel(decrease_CW_event);",
		"		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);",
		"		if(debug)",
		"			printf(\"Node:%d, Grade:%d, time:%f, in second period.\\n\\",
		"				Failure to send RTS, because received RTS from other nodes.\\n\\",
		"				Go to sleep immediately.\\n\",\\",
		"				node_address,grade,op_sim_time());",
		"	}",
		"}",
		"",
		"",
		"if(pk_type == cts_pk)",
		"{",
		"	//time statistic",
		"	all_rx_time = all_rx_time + durCTS;",
		"	",
		"	op_pk_nfd_get(pk_TV,\"Grade\",&grade_TV);",
		"	op_pk_nfd_get(pk_TV,\"Dest\",&dest_TV);",
		"	if(grade == grade_TV+1 && dest_TV == node_address)",
		"	{",
		"		if(op_ev_valid(wait_CTS_event))//the first time to receive CTS",
		"		{",
		"			op_ev_cancel(wait_CTS_event);",
		"			op_pk_nfd_get(pk_TV,\"Src\",&next_hop_2);",
		"			",
		"			//wait SIFS time to send DATA",
		"			time = SIFS;",
		"			op_intrpt_schedule_self(op_sim_time()+time,SEND_DATA_CODE);",
		"			if(debug)",
		"				printf(\"Node:%d, Grade:%d, time:%f, in second period.\\n\\",
		"					Successfully received CTS.\\n\\",
		"					Waiting to send DATA.\\n\",\\",
		"					node_address,grade,op_sim_time());",
		"		}",
		"	}",
		"}",
		"",
		"if(pk_type == ack_pk)",
		"{",
		"	//time statistic",
		"	all_rx_time = all_rx_time + durACK;",
		"	",
		"	op_pk_nfd_get(pk_TV,\"Dest\",&dest_TV);",
		"	if(node_address == dest_TV)",
		"	{",
		"		if(op_ev_valid(wait_ACK_event))",
		"		{",
		"			op_ev_cancel(wait_ACK_event);",
		"			",
		"			",
		"			/*Since we don't consider retransmission, the reception of ACK or not becomes meaningless*/",
		"			//Data has been sent correctly, remove it from temp_queue",
		"			//op_pk_destroy(op_subq_pk_remove(data_queue, OPC_QPOS_HEAD));",
		"			",
		"			retx--;",
		"			",
		"			mac_flags->received_ack = OPC_TRUE; //received the ACK",
		"			",
		"			//recieved ACK correctly, go to sleep immediately",
		"			op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);",
		"			if(debug)",
		"				printf(\"Node:%d, Grade:%d, time:%f, in second period.\\n\\",
		"					Successfully received ACK.\\n\\",
		"					Go to sleep immediately.\\n\",\\",
		"					node_address,grade,op_sim_time());",
		"		}",
		"	}",
		"}",
		"",
		"op_pk_destroy(pk_TV);",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [55], 
		"name",                 COMP_CONTENTS, "RCV(2)",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [51],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [56],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [57]' */
	/* create and init prg list 'prg_lptr [53]' */
	prg_lptr [53] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [53], 
		"//send DATA",
		"if(pk_TV!=NULL)",
		"{",
		"	op_pk_destroy(pk_TV);",
		"}",
		"",
		"//obtain DATA from data_queue",
		"//pk_TV = op_pk_copy(op_subq_pk_access(data_queue, OPC_QPOS_HEAD));",
		"",
		"//sprintf(message,\"creation time: %f.\\n\", op_pk_creation_time_get (op_subq_pk_access(data_queue, OPC_QPOS_HEAD)));",
		"//op_sim_message(message,\"1\");",
		"",
		"/* since we don't consider consider retransmission, once a node win the contention,*/",
		"/* and send the data out, this data is removed from the queue. */",
		"pk_TV = op_subq_pk_remove(data_queue, OPC_QPOS_HEAD);",
		"//sprintf(message,\"creation time: %f.\\n\", op_pk_creation_time_get (pk_TV));",
		"//op_sim_message(message,\"2\");",
		"",
		"//op_pk_creation_time_set (pk_TV,op_pk_creation_time_get (op_subq_pk_access(data_queue, OPC_QPOS_HEAD)));",
		"	",
		"op_pk_nfd_set(pk_TV,\"Previous Hop\",node_address);",
		"op_pk_nfd_set(pk_TV,\"Next Hop\",next_hop_2);",
		"",
		"op_pk_send(pk_TV,SEND_STRM);",
		"retx++;",
		"",
		"//time statistic",
		"all_tx_time = all_tx_time + durDATA;",
		"",
		"//set timer for waiting ACK from lower grade node",
		"time = durDATA + SIFS + durACK;",
		"wait_ACK_event = op_intrpt_schedule_self(op_sim_time() + time,SLEEP_FROM_SECOND_CODE);",
		"mac_flags->received_ack = OPC_FALSE;//waiting for ack",
		"",
		"if(debug)",
		"	printf(\"Node:%d, Grade:%d, time:%f, in second period.\\n\\",
		"		Have sent DATA, waiting ACK.\\n\\",
		"		If no ACK, after %f seconds, go to sleep.\\n\",\\",
		"		node_address,grade,op_sim_time(),time);",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [57], 
		"name",                 COMP_CONTENTS, "send data",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [53],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [58],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [59]' */
	/* create and init prg list 'prg_lptr [55]' */
	prg_lptr [55] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [55], 
		"if(pk_TV!=NULL)",
		"{",
		"	op_pk_destroy(pk_TV);",
		"}",
		"",
		"pk_TV = op_pk_get(RCV_STRM);",
		"",
		"pk_size=op_pk_total_size_get(pk_TV);",
		"time=(pk_size+10)/data_rate;",
		"//time statistic",
		"//all_rx_time = all_rx_time + time;",
		"if(debug)",
		"	printf(\"\\nFor receiving data, Node:%d, Grade:%d, time:%f.\\nReceived a packet, size: %d.\\nReceive Duration is: %f.\\n\\n\",	node_address,grade,op_sim_time(),pk_size,time);",
		"",
		"op_pk_nfd_get(pk_TV,\"Type\",&pk_type);",
		"",
		"//printf(\"out: please pay an attention here, 童飞!\\n\");",
		"//sprintf(message,\"pk_type=%d.\\n\",pk_type);",
		"//op_sim_message(message,\"\");",
		"",
		"if(pk_type == rts_pk)",
		"{",
		"	//time statistic",
		"	all_rx_time = all_rx_time + durRTS;",
		"",
		"	//wait for RTS",
		"	op_pk_nfd_get(pk_TV,\"Grade\",&grade_TV);",
		"	op_pk_nfd_get(pk_TV,\"Dest\",&dest_TV);",
		"	//printf(\"in: please pay an attention here, 童飞!\\n\");",
		"	",
		"	//debug=OPC_FALSE;",
		"	",
		"	if(grade_TV == grade+1)",
		"	{",
		"		if(op_ev_valid(wait_RTS_event))//the first time to receive RTS",
		"		{",
		"			op_ev_cancel(wait_RTS_event); ",
		"			",
		"			//debug=OPC_TRUE;",
		"			",
		"			",
		"			if(one_two_cw == 2){",
		"				op_pk_nfd_get(pk_TV,\"Src\",&next_hop_1);",
		"			",
		"				if(DDC_ON){",
		"					op_pk_nfd_get(pk_TV,\"Dynamic DC\",&pk_ddc);",
		"					if(pk_ddc==1){",
		"						mac_flags->ddc_relay=OPC_TRUE; // the flag set here is used in \"sleeping\"",
		"						if (debug) printf(\"receive RTS, the field: Dynamic DC is set as 1.\\n\\n\");",
		"					}else{",
		"						mac_flags->ddc_relay=OPC_FALSE;",
		"					}",
		"				}",
		"				",
		"				//prepare to send CTS",
		"				//time = op_dist_uniform(CW*1000.0)/1000.0 + SIFS;			",
		"				CW_counter = op_dist_outcome(op_dist_load(\"uniform_int\",0.0,CW*1000.0-1));",
		"				if(debug) printf(\"in wait rts. CW_counter=%f.\\n\",CW_counter);",
		"				if(CW_counter == 0.0){",
		"					op_intrpt_schedule_self(op_sim_time()+SIFS+0.0,SEND_CTS_CODE);",
		"				}else{",
		"					decrease_CW_event = op_intrpt_schedule_self(op_sim_time()+SIFS+slot_time,DECREASE_CW_CODE);",
		"					CW_counter--;",
		"				}",
		"				",
		"				//time = time/1000.0 + SIFS;",
		"				//send_CTS_event = op_intrpt_schedule_self(op_sim_time()+time,SEND_CTS_CODE);",
		"				if(debug)",
		"					printf(\"Node:%d, Grade:%d, time:%f, in first period.\\n\\",
		"						Successfully received RTS.\\n\\",
		"						Waiting to send CTS.\\n\",\\",
		"						node_address,grade,op_sim_time());",
		"				//sprintf(message,\"Contend to send CTS, op_dist_uniform(CW)=%f\\n\",time-DIFS);",
		"				//op_sim_message(\"\",message);",
		"			}",
		"			else if(one_two_cw == 1){",
		"				if(dest_TV==node_address)",
		"				{",
		"					op_pk_nfd_get(pk_TV,\"Src\",&next_hop_1);",
		"					",
		"					if(DDC_ON){",
		"						op_pk_nfd_get(pk_TV,\"Dynamic DC\",&pk_ddc);",
		"						if(pk_ddc==1){",
		"							mac_flags->ddc_relay=OPC_TRUE;",
		"							if (debug) printf(\"receive RTS, the field: Dynamic DC is set as 1.\\n\\n\");",
		"						}else{",
		"							mac_flags->ddc_relay=OPC_FALSE;",
		"						}",
		"					}",
		"					",
		"					//prepare to send CTS",
		"					time = SIFS;",
		"					op_intrpt_schedule_self(op_sim_time()+time,SEND_CTS_CODE);",
		"					if(debug)",
		"						printf(\"Node:%d, Grade:%d, time:%f, in first period.\\n\\",
		"								Successfully received RTS.\\n\\",
		"				    			Waiting to send CTS.\\n\",\\",
		"								node_address,grade,op_sim_time());",
		"					//sprintf(message,\"Contend to send CTS, op_dist_uniform(CW)=%f\\n\",time-DIFS);",
		"					//op_sim_message(\"\",message);",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [55], 
		"				}else",
		"				{",
		"					if(debug)",
		"						printf(\"Node:%d, Grade:%d, time:%f, in first period.\\n\\",
		"								The received RTS is not destined to itself. Continue to wait. NAV has been set.\\n\",\\",
		"								node_address,grade,op_sim_time());",
		"					op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);",
		"				}",
		"			}",
		"		}",
		"	}",
		"	op_pk_destroy(pk_TV);",
		"}",
		"else",
		"",
		"if(pk_type == cts_pk)",
		"{",
		"	//time statistic",
		"	all_rx_time = all_rx_time + durCTS;",
		"	",
		"	//CTS listening during contending to send CTS(\"uniform(CW)+DIFS\")",
		"	if(op_ev_valid(decrease_CW_event))",
		"	{",
		"		op_ev_cancel(decrease_CW_event);",
		"		op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);",
		"		if(debug)",
		"			printf(\"Node:%d, Grade:%d, time:%f, in first period.\\n\\",
		"				Failure to send CTS, because received CTS from other nodes.\\n\\",
		"				Go to sleep immediately.\\n\",\\",
		"				node_address,grade,op_sim_time());",
		"	}",
		"	//op_sim_message(\"the received packet is cts_pk. \",\"be deleted\");",
		"	op_pk_destroy(pk_TV);",
		"}",
		"else ",
		"",
		"if(pk_type == data_pk)",
		"{",
		"	//time statistic",
		"	all_rx_time = all_rx_time + durDATA;",
		"	",
		"	op_pk_nfd_get(pk_TV,\"Next Hop\",&dest_TV);",
		"	if(dest_TV == node_address)",
		"	{",
		"		if(op_ev_valid(wait_DATA_event))",
		"		{",
		"			//op_sim_message(\"data arrived at the sink!\",\"\");",
		"		",
		"			mac_flags->received_data = OPC_TRUE;//received the data",
		"		",
		"			op_ev_cancel(wait_DATA_event);",
		"			op_pk_nfd_get(pk_TV,\"Previous Hop\",&next_hop_1);",
		"			",
		"			op_pk_nfd_get(pk_TV,\"Hop Num\", &hop_num_TV);",
		"			hop_num_TV++;",
		"			op_pk_nfd_set(pk_TV,\"Hop Num\",hop_num_TV);",
		"			",
		"			//delay statistics",
		"			hops_pkt_num++;",
		"			hops_avg_delay=hops_avg_delay+op_sim_time()-op_pk_creation_time_get(pk_TV);",
		"			",
		"			/****************************************************************/",
		"			/*create ICI for statistic purpose; then set remote interruption*/",
		"			/*for average delay per packet vs. hops							*/",
		"			/****************************************************************/",
		"			if(op_sim_time()>=steady_time){",
		"				op_pk_nfd_get(pk_TV,\"Grade\",&src_grade);",
		"				iciptr_TV = op_ici_create(\"delay_ici\");",
		"				op_ici_attr_set_int32(iciptr_TV, \"src_grade\",src_grade);",
		"				op_ici_attr_set_int32(iciptr_TV, \"current_node_grade\",grade);",
		"				op_ici_attr_set_dbl(iciptr_TV, \"ete_delay\",op_sim_time()-op_pk_creation_time_get(pk_TV));",
		"				//if (node_type==sink){",
		"				//sprintf(message,\"1. the ete delay is %f.\",op_sim_time()-op_pk_creation_time_get(pk_TV));",
		"				//op_sim_message(message,\"\");}",
		"				op_ici_install (iciptr_TV);",
		"				op_intrpt_force_remote (REMOTE_STAT_CODE,op_id_from_name(node_id,OPC_OBJTYPE_PROC,\"statistics\"));",
		"				op_ici_install (OPC_NIL);",
		"			}",
		"			",
		"			if(node_type == sink)",
		"			{",
		"				op_pk_nfd_get(pk_TV,\"Data No\",&data_id);",
		"				//op_sim_message(\"received data!!!\",\"\");",
		"				if(!data_id_exist(data_id)){",
		"					id_TV=(DataID *)op_prg_mem_alloc(sizeof(DataID));",
		"					id_TV->st_data_id=data_id;",
		"					op_prg_list_insert(data_id_list,id_TV,OPC_LISTPOS_TAIL);",
		"					data_nums_1++;",
		"				}",
		"				",
		"				op_pk_send(pk_TV,DISCARD_STRM);",
		"				if(debug)",
		"					printf(\"Data has arrived at sink!!!\\n\");",
		"			}else",
		"			{",
		"				if(op_subq_stat(data_queue,OPC_QSTAT_PKSIZE)<queue_length_add_one){//data queue is not full",
		"					//insert the DATA packet into data_queue",
		"					op_subq_pk_insert (data_queue,pk_TV,OPC_QPOS_TAIL);",
		"				}else{//data queue is full",
		"					pkts_loss_overflow = pkts_loss_overflow + 1.0;",
		PRGC_NIL);

	prg_list_strings_append (prg_lptr [55], 
		"					if(debug)",
		"						printf(\"in state \\\"RCV(1)\\\", data queue is full, the received data pkt from the lower layer is dropped.\\n\");",
		"				}",
		"			}",
		"		",
		"			//wait SIFS time to send ACK",
		"			time = SIFS;",
		"			op_intrpt_schedule_self(op_sim_time()+time,SEND_ACK_CODE);",
		"			if(debug)",
		"				printf(\"Node:%d, Grade:%d, time:%f, in first period.\\n\\",
		"					Successfully received DATA.\\n\\",
		"					Waiting to reply ACK.\\n\",\\",
		"					node_address,grade,op_sim_time());",
		"		}else",
		"		{",
		"			op_pk_destroy(pk_TV);",
		"		}",
		"	}else",
		"	{",
		"		op_pk_destroy(pk_TV);",
		"	}",
		"}",
		"else",
		"//if(pk_type != data_pk)",
		"{	",
		"	if(debug)",
		"		printf(\"Node:%d, Grade:%d, time:%f, in first period.\\n\\",
		"			The received pk is not RTS, CTS, or DATA. The pk type is: %d.\\n\\",
		"			Destroy this pk.\\n\",\\",
		"			node_address,grade,op_sim_time(),pk_type);",
		"		",
		"	op_pk_destroy(pk_TV);",
		"}	",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [59], 
		"name",                 COMP_CONTENTS, "RCV(1)",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [55],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [60],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [61]' */
	/* create and init prg list 'prg_lptr [57]' */
	prg_lptr [57] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [57], 
		"//send CTS",
		"if(pk_TV!=NULL)",
		"{",
		"	op_pk_destroy(pk_TV);",
		"}",
		"",
		"pk_TV = op_pk_create_fmt(\"MAC_CTS_PK\");",
		"op_pk_nfd_set(pk_TV,\"Type\", cts_pk);",
		"op_pk_nfd_set(pk_TV,\"Src\",node_address);",
		"op_pk_nfd_set(pk_TV,\"Dest\",next_hop_1);",
		"op_pk_nfd_set(pk_TV,\"Grade\",grade);",
		"",
		"op_pk_send(pk_TV, SEND_STRM);",
		"",
		"mac_flags->received_data = OPC_FALSE;",
		"",
		"//time statistic",
		"all_tx_time = all_tx_time + durCTS;",
		"",
		"//set timer for waiting DATA from upper grade node",
		"time = durCTS + SIFS +durDATA;",
		"wait_DATA_event = op_intrpt_schedule_self(op_sim_time() + time,SLEEP_FROM_FIRST_CODE);",
		"if(debug)",
		"	printf(\"Node:%d, Grade:%d, time:%f, in first period.\\n\\",
		"		Have sent CTS.\\n\\",
		"		Wating to receive Data.\\n\\",
		"		If no data, after %f secondes, go to sleep.\\n\",\\",
		"		node_address,grade,op_sim_time(),time);",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [61], 
		"name",                 COMP_CONTENTS, "wait DATA",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [57],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [62],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [63]' */
	/* create and init prg list 'prg_lptr [59]' */
	prg_lptr [59] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [59], 
		"//send ACK",
		"if(pk_TV!=NULL)",
		"{",
		"	op_pk_destroy(pk_TV);",
		"}",
		"",
		"pk_TV = op_pk_create_fmt(\"MAC_ACK_PK\");",
		"op_pk_nfd_set(pk_TV,\"Type\",ack_pk);",
		"op_pk_nfd_set(pk_TV,\"Src\",node_address);",
		"op_pk_nfd_set(pk_TV,\"Dest\",next_hop_1);",
		"op_pk_nfd_set(pk_TV,\"Grade\",grade);",
		"",
		"op_pk_send(pk_TV,SEND_STRM);",
		"",
		"//time statistic",
		"all_tx_time = all_tx_time + durACK;",
		"",
		"op_intrpt_schedule_self(op_sim_time() + durACK,SLEEP_FROM_FIRST_CODE);",
		"if(debug)",
		"	printf(\"Node:%d, Grade:%d, time:%f, in first period.\\n\\",
		"		Have replied ACK.\\n\\",
		"		Go to sleep after finishing sending ACK.\\n\",\\",
		"		node_address,grade,op_sim_time());",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [63], 
		"name",                 COMP_CONTENTS, "send ACK",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [59],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [64],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [65]' */
	/* create and init prg list 'prg_lptr [61]' */
	prg_lptr [61] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [61], 
		"if(debug)",
		"{",
		"	printf(\"Node:%d, time:%f. In first period.\\n进入 statwire 中断\\n\",node_address,op_sim_time());",
		"	printf(\"up: the received snr=%E.intrpt_code=%d\\n\\n\",op_stat_local_read(0),op_intrpt_code());",
		"}",
		"if(op_ev_valid(decrease_CW_event) && (one_two_cw == 2))",
		"{",
		"	//the channel is sensed busy before replying CTS.",
		"	mac_flags->busy_before_cts=OPC_TRUE;",
		"	//op_ev_cancel(send_CTS_event);",
		"	//op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_FIRST_CODE);",
		"	if(debug)",
		"		printf(\"Channel is busy, go to sleep after the current slot.\\n\");",
		"	",
		"}		",
		"",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [65], 
		"name",                 COMP_CONTENTS, "carrier sense(1)",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [61],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [66],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [67]' */
	/* create and init prg list 'prg_lptr [63]' */
	prg_lptr [63] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [63], 
		"if(debug)",
		"	printf(\"Node:%d, time:%f. In second period.\\n\",node_address,op_sim_time());",
		"if(debug)",
		"{",
		"	printf(\"进入 statwire 中断\\n\");",
		"	printf(\"down: the received snr=%E.intrpt_code=%d\\n\\n\",op_stat_local_read(0),op_intrpt_code());",
		"}",
		"",
		"",
		"if(op_ev_valid(decrease_CW_event))",
		"{",
		"	//op_ev_cancel(decrease_CW_event);",
		"	mac_flags->busy_before_rts=OPC_TRUE;",
		"	//op_intrpt_schedule_self(op_sim_time(),SLEEP_FROM_SECOND_CODE);",
		"	if(debug)",
		"		printf(\"Channel is busy, go to sleep after the current slot.\\n\");",
		"}",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [67], 
		"name",                 COMP_CONTENTS, "carrier sense(2)",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [63],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [68],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [69]' */
	/* create and init prg list 'prg_lptr [65]' */
	prg_lptr [65] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [65], 
		"//Sink will execute the following code",
		"grade = 0;",
		"//op_ima_obj_attr_set(process_id,\"grade\",grade);",
		"op_ima_obj_attr_set(node_id,\"grade\",grade);",
		"//sink_id = node_address;",
		"",
		"pk_TV = op_pk_create_fmt(\"MAC_GRADE_PK\");",
		"op_pk_nfd_set(pk_TV, \"Type\", grade_pk);",
		"//op_pk_nfd_set(pk_TV, \"Sink ID\", sink_id);",
		"op_pk_nfd_set(pk_TV,\"Previous Hop\",node_address);",
		"op_pk_nfd_set(pk_TV, \"Grade\", grade+1);",
		"",
		"op_pk_send(pk_TV, SEND_STRM);",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [69], 
		"name",                 COMP_CONTENTS, "start grade",
		"Enter Execs",          COMP_CONTENTS, prg_lptr [65],
		"status",               COMP_TOGGLE,   EMAC_ENABLED,
		"position",             COMP_CONTENTS, obj [70],
		"initial",              COMP_TOGGLE,   EMAC_DISABLED,
		EMAC_EOL);


	/* assign attrs for object 'obj [71]' */
	Ema_Object_Attr_Set (model_id, obj [71], 
		"name",                 COMP_CONTENTS, "tr_1",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [37],
		"src state",            COMP_CONTENTS, obj [35],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [72],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [73],
		"label pos",            COMP_CONTENTS, obj [74],
		EMAC_EOL);


	/* assign attrs for object 'obj [75]' */
	Ema_Object_Attr_Set (model_id, obj [75], 
		"name",                 COMP_CONTENTS, "tr_28",
		"condition",            COMP_CONTENTS, "CONTEND_TO_SEND_RTS",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [47],
		"src state",            COMP_CONTENTS, obj [37],
		"drawing style",        COMP_TOGGLE,   EMAC_DISABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [76],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [77],
		"path",                 COMP_ARRAY_CONTENTS (2), obj [78],
		"label pos",            COMP_CONTENTS, obj [79],
		EMAC_EOL);


	/* assign attrs for object 'obj [80]' */
	Ema_Object_Attr_Set (model_id, obj [80], 
		"name",                 COMP_CONTENTS, "tr_32",
		"condition",            COMP_CONTENTS, "GO_TO_SLEEP",
		"executive",            COMP_CONTENTS, "",
		"dest state",           COMP_CONTENTS, obj [43],
		"src state",            COMP_CONTENTS, obj [37],
		"drawing style",        COMP_TOGGLE,   EMAC_ENABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [81],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [82],
		"label pos",            COMP_CONTENTS, obj [83],
		EMAC_EOL);


	/* assign attrs for object 'obj [84]' */
	Ema_Object_Attr_Set (model_id, obj [84], 
		"name",                 COMP_CONTENTS, "tr_34",
		"condition",            COMP_CONTENTS, "WAKING_TO_WAIT_RTS",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [45],
		"src state",            COMP_CONTENTS, obj [37],
		"drawing style",        COMP_TOGGLE,   EMAC_DISABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [85],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [86],
		"path",                 COMP_ARRAY_CONTENTS (2), obj [87],
		"label pos",            COMP_CONTENTS, obj [88],
		EMAC_EOL);


	/* assign attrs for object 'obj [89]' */
	Ema_Object_Attr_Set (model_id, obj [89], 
		"name",                 COMP_CONTENTS, "tr_37",
		"condition",            COMP_CONTENTS, "WAKING_UP",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [45],
		"src state",            COMP_CONTENTS, obj [43],
		"drawing style",        COMP_TOGGLE,   EMAC_DISABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [90],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [91],
		"path",                 COMP_ARRAY_CONTENTS (2), obj [92],
		"path",                 COMP_ARRAY_CONTENTS (3), obj [93],
		"label pos",            COMP_CONTENTS, obj [94],
		EMAC_EOL);


	/* assign attrs for object 'obj [95]' */
	Ema_Object_Attr_Set (model_id, obj [95], 
		"name",                 COMP_CONTENTS, "tr_40",
		"condition",            COMP_CONTENTS, "WAKING_TO_SEND_RTS",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [47],
		"src state",            COMP_CONTENTS, obj [43],
		"drawing style",        COMP_TOGGLE,   EMAC_DISABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [96],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [97],
		"path",                 COMP_ARRAY_CONTENTS (2), obj [98],
		"path",                 COMP_ARRAY_CONTENTS (3), obj [99],
		"label pos",            COMP_CONTENTS, obj [100],
		EMAC_EOL);


	/* assign attrs for object 'obj [101]' */
	Ema_Object_Attr_Set (model_id, obj [101], 
		"name",                 COMP_CONTENTS, "tr_56",
		"condition",            COMP_CONTENTS, "SLEEP_FROM_FIRST",
		"executive",            COMP_CONTENTS, "",
		"dest state",           COMP_CONTENTS, obj [43],
		"src state",            COMP_CONTENTS, obj [51],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [102],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [103],
		"label pos",            COMP_CONTENTS, obj [104],
		EMAC_EOL);


	/* assign attrs for object 'obj [105]' */
	Ema_Object_Attr_Set (model_id, obj [105], 
		"name",                 COMP_CONTENTS, "tr_57",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [51],
		"src state",            COMP_CONTENTS, obj [45],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [106],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [107],
		"label pos",            COMP_CONTENTS, obj [108],
		EMAC_EOL);


	/* assign attrs for object 'obj [109]' */
	Ema_Object_Attr_Set (model_id, obj [109], 
		"name",                 COMP_CONTENTS, "tr_59",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [53],
		"src state",            COMP_CONTENTS, obj [47],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [110],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [111],
		"label pos",            COMP_CONTENTS, obj [112],
		EMAC_EOL);


	/* assign attrs for object 'obj [113]' */
	Ema_Object_Attr_Set (model_id, obj [113], 
		"name",                 COMP_CONTENTS, "tr_60",
		"condition",            COMP_CONTENTS, "SEND_RTS",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [49],
		"src state",            COMP_CONTENTS, obj [53],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [114],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [115],
		"label pos",            COMP_CONTENTS, obj [116],
		EMAC_EOL);


	/* assign attrs for object 'obj [117]' */
	Ema_Object_Attr_Set (model_id, obj [117], 
		"name",                 COMP_CONTENTS, "tr_61",
		"condition",            COMP_CONTENTS, "SLEEP_FROM_SECOND",
		"executive",            COMP_CONTENTS, "",
		"dest state",           COMP_CONTENTS, obj [43],
		"src state",            COMP_CONTENTS, obj [53],
		"drawing style",        COMP_TOGGLE,   EMAC_ENABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [118],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [119],
		"label pos",            COMP_CONTENTS, obj [120],
		EMAC_EOL);


	/* assign attrs for object 'obj [121]' */
	Ema_Object_Attr_Set (model_id, obj [121], 
		"name",                 COMP_CONTENTS, "tr_66",
		"condition",            COMP_CONTENTS, "FROM_LOWER && transceiver_state",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [55],
		"src state",            COMP_CONTENTS, obj [53],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [122],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [123],
		"label pos",            COMP_CONTENTS, obj [124],
		EMAC_EOL);


	/* assign attrs for object 'obj [125]' */
	Ema_Object_Attr_Set (model_id, obj [125], 
		"name",                 COMP_CONTENTS, "tr_71",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [53],
		"src state",            COMP_CONTENTS, obj [55],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [126],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [127],
		"label pos",            COMP_CONTENTS, obj [128],
		EMAC_EOL);


	/* assign attrs for object 'obj [129]' */
	Ema_Object_Attr_Set (model_id, obj [129], 
		"name",                 COMP_CONTENTS, "tr_72",
		"condition",            COMP_CONTENTS, "SEND_DATA",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [57],
		"src state",            COMP_CONTENTS, obj [53],
		"drawing style",        COMP_TOGGLE,   EMAC_DISABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [130],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [131],
		"label pos",            COMP_CONTENTS, obj [132],
		EMAC_EOL);


	/* assign attrs for object 'obj [133]' */
	Ema_Object_Attr_Set (model_id, obj [133], 
		"name",                 COMP_CONTENTS, "tr_73",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [53],
		"src state",            COMP_CONTENTS, obj [57],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [134],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [135],
		"label pos",            COMP_CONTENTS, obj [136],
		EMAC_EOL);


	/* assign attrs for object 'obj [137]' */
	Ema_Object_Attr_Set (model_id, obj [137], 
		"name",                 COMP_CONTENTS, "tr_74",
		"condition",            COMP_CONTENTS, "FROM_LOWER && transceiver_state",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [59],
		"src state",            COMP_CONTENTS, obj [51],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [138],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [139],
		"label pos",            COMP_CONTENTS, obj [140],
		EMAC_EOL);


	/* assign attrs for object 'obj [141]' */
	Ema_Object_Attr_Set (model_id, obj [141], 
		"name",                 COMP_CONTENTS, "tr_75",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [51],
		"src state",            COMP_CONTENTS, obj [59],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [142],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [143],
		"label pos",            COMP_CONTENTS, obj [144],
		EMAC_EOL);


	/* assign attrs for object 'obj [145]' */
	Ema_Object_Attr_Set (model_id, obj [145], 
		"name",                 COMP_CONTENTS, "tr_76",
		"condition",            COMP_CONTENTS, "SEND_CTS",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [61],
		"src state",            COMP_CONTENTS, obj [51],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [146],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [147],
		"label pos",            COMP_CONTENTS, obj [148],
		EMAC_EOL);


	/* assign attrs for object 'obj [149]' */
	Ema_Object_Attr_Set (model_id, obj [149], 
		"name",                 COMP_CONTENTS, "tr_77",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [51],
		"src state",            COMP_CONTENTS, obj [61],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [150],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [151],
		"label pos",            COMP_CONTENTS, obj [152],
		EMAC_EOL);


	/* assign attrs for object 'obj [153]' */
	Ema_Object_Attr_Set (model_id, obj [153], 
		"name",                 COMP_CONTENTS, "tr_79",
		"condition",            COMP_CONTENTS, "SEND_ACK",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [63],
		"src state",            COMP_CONTENTS, obj [51],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [154],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [155],
		"label pos",            COMP_CONTENTS, obj [156],
		EMAC_EOL);


	/* assign attrs for object 'obj [157]' */
	Ema_Object_Attr_Set (model_id, obj [157], 
		"name",                 COMP_CONTENTS, "tr_80",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [51],
		"src state",            COMP_CONTENTS, obj [63],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [158],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [159],
		"label pos",            COMP_CONTENTS, obj [160],
		EMAC_EOL);


	/* assign attrs for object 'obj [161]' */
	Ema_Object_Attr_Set (model_id, obj [161], 
		"name",                 COMP_CONTENTS, "tr_89",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [53],
		"src state",            COMP_CONTENTS, obj [49],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [162],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [163],
		"label pos",            COMP_CONTENTS, obj [164],
		EMAC_EOL);


	/* assign attrs for object 'obj [165]' */
	Ema_Object_Attr_Set (model_id, obj [165], 
		"name",                 COMP_CONTENTS, "tr_90",
		"condition",            COMP_CONTENTS, "default",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [51],
		"src state",            COMP_CONTENTS, obj [51],
		"drawing style",        COMP_TOGGLE,   EMAC_DISABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [166],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [167],
		"path",                 COMP_ARRAY_CONTENTS (2), obj [168],
		"path",                 COMP_ARRAY_CONTENTS (3), obj [169],
		"label pos",            COMP_CONTENTS, obj [170],
		EMAC_EOL);


	/* assign attrs for object 'obj [171]' */
	Ema_Object_Attr_Set (model_id, obj [171], 
		"name",                 COMP_CONTENTS, "tr_91",
		"condition",            COMP_CONTENTS, "default",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [43],
		"src state",            COMP_CONTENTS, obj [43],
		"drawing style",        COMP_TOGGLE,   EMAC_DISABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [172],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [173],
		"path",                 COMP_ARRAY_CONTENTS (2), obj [174],
		"path",                 COMP_ARRAY_CONTENTS (3), obj [175],
		"label pos",            COMP_CONTENTS, obj [176],
		EMAC_EOL);


	/* assign attrs for object 'obj [177]' */
	Ema_Object_Attr_Set (model_id, obj [177], 
		"name",                 COMP_CONTENTS, "tr_92",
		"condition",            COMP_CONTENTS, "default",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [53],
		"src state",            COMP_CONTENTS, obj [53],
		"drawing style",        COMP_TOGGLE,   EMAC_DISABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [178],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [179],
		"path",                 COMP_ARRAY_CONTENTS (2), obj [180],
		"path",                 COMP_ARRAY_CONTENTS (3), obj [181],
		"label pos",            COMP_CONTENTS, obj [182],
		EMAC_EOL);


	/* assign attrs for object 'obj [183]' */
	Ema_Object_Attr_Set (model_id, obj [183], 
		"name",                 COMP_CONTENTS, "tr_93",
		"condition",            COMP_CONTENTS, "CHECK_CHANNEL",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [65],
		"src state",            COMP_CONTENTS, obj [51],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [184],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [185],
		"label pos",            COMP_CONTENTS, obj [186],
		EMAC_EOL);


	/* assign attrs for object 'obj [187]' */
	Ema_Object_Attr_Set (model_id, obj [187], 
		"name",                 COMP_CONTENTS, "tr_94",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [51],
		"src state",            COMP_CONTENTS, obj [65],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [188],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [189],
		"label pos",            COMP_CONTENTS, obj [190],
		EMAC_EOL);


	/* assign attrs for object 'obj [191]' */
	Ema_Object_Attr_Set (model_id, obj [191], 
		"name",                 COMP_CONTENTS, "tr_95",
		"condition",            COMP_CONTENTS, "CHECK_CHANNEL",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [67],
		"src state",            COMP_CONTENTS, obj [53],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [192],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [193],
		"label pos",            COMP_CONTENTS, obj [194],
		EMAC_EOL);


	/* assign attrs for object 'obj [195]' */
	Ema_Object_Attr_Set (model_id, obj [195], 
		"name",                 COMP_CONTENTS, "tr_96",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [53],
		"src state",            COMP_CONTENTS, obj [67],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [196],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [197],
		"label pos",            COMP_CONTENTS, obj [198],
		EMAC_EOL);


	/* assign attrs for object 'obj [199]' */
	Ema_Object_Attr_Set (model_id, obj [199], 
		"name",                 COMP_CONTENTS, "tr_97",
		"condition",            COMP_CONTENTS, "START_GRADE",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [69],
		"src state",            COMP_CONTENTS, obj [37],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [200],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [201],
		"label pos",            COMP_CONTENTS, obj [202],
		EMAC_EOL);


	/* assign attrs for object 'obj [203]' */
	Ema_Object_Attr_Set (model_id, obj [203], 
		"name",                 COMP_CONTENTS, "tr_98",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [37],
		"src state",            COMP_CONTENTS, obj [69],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [204],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [205],
		"label pos",            COMP_CONTENTS, obj [206],
		EMAC_EOL);


	/* assign attrs for object 'obj [207]' */
	Ema_Object_Attr_Set (model_id, obj [207], 
		"name",                 COMP_CONTENTS, "tr_100",
		"condition",            COMP_CONTENTS, "SEND_GM",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [41],
		"src state",            COMP_CONTENTS, obj [37],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [208],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [209],
		"label pos",            COMP_CONTENTS, obj [210],
		EMAC_EOL);


	/* assign attrs for object 'obj [211]' */
	Ema_Object_Attr_Set (model_id, obj [211], 
		"name",                 COMP_CONTENTS, "tr_101",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [37],
		"src state",            COMP_CONTENTS, obj [41],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [212],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [213],
		"label pos",            COMP_CONTENTS, obj [214],
		EMAC_EOL);


	/* assign attrs for object 'obj [215]' */
	Ema_Object_Attr_Set (model_id, obj [215], 
		"name",                 COMP_CONTENTS, "tr_102",
		"condition",            COMP_CONTENTS, "FROM_LOWER && transceiver_state",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [39],
		"src state",            COMP_CONTENTS, obj [37],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [216],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [217],
		"label pos",            COMP_CONTENTS, obj [218],
		EMAC_EOL);


	/* assign attrs for object 'obj [219]' */
	Ema_Object_Attr_Set (model_id, obj [219], 
		"name",                 COMP_CONTENTS, "tr_103",
		"condition",            COMP_CONTENTS, "",
		"condition",            COMP_INTENDED, EMAC_DISABLED,
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [37],
		"src state",            COMP_CONTENTS, obj [39],
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [220],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [221],
		"label pos",            COMP_CONTENTS, obj [222],
		EMAC_EOL);


	/* assign attrs for object 'obj [223]' */
	Ema_Object_Attr_Set (model_id, obj [223], 
		"name",                 COMP_CONTENTS, "tr_108",
		"condition",            COMP_CONTENTS, "default",
		"executive",            COMP_CONTENTS, "",
		"executive",            COMP_INTENDED, EMAC_DISABLED,
		"dest state",           COMP_CONTENTS, obj [37],
		"src state",            COMP_CONTENTS, obj [37],
		"drawing style",        COMP_TOGGLE,   EMAC_DISABLED,
		"color",                COMP_CONTENTS, 0,
		"path",                 COMP_ARRAY_CONTENTS (0), obj [224],
		"path",                 COMP_ARRAY_CONTENTS (1), obj [225],
		"path",                 COMP_ARRAY_CONTENTS (2), obj [226],
		"path",                 COMP_ARRAY_CONTENTS (3), obj [227],
		"label pos",            COMP_CONTENTS, obj [228],
		EMAC_EOL);


	/* assign attrs for object 'obj [36]' */
	Ema_Object_Attr_Set (model_id, obj [36], 
		"x",                    COMP_CONTENTS, (double) 90,
		"y",                    COMP_CONTENTS, (double) 570,
		EMAC_EOL);


	/* assign attrs for object 'obj [38]' */
	Ema_Object_Attr_Set (model_id, obj [38], 
		"x",                    COMP_CONTENTS, (double) 270,
		"y",                    COMP_CONTENTS, (double) 390,
		EMAC_EOL);


	/* assign attrs for object 'obj [40]' */
	Ema_Object_Attr_Set (model_id, obj [40], 
		"x",                    COMP_CONTENTS, (double) 270,
		"y",                    COMP_CONTENTS, (double) 630,
		EMAC_EOL);


	/* assign attrs for object 'obj [42]' */
	Ema_Object_Attr_Set (model_id, obj [42], 
		"x",                    COMP_CONTENTS, (double) 270,
		"y",                    COMP_CONTENTS, (double) 150,
		EMAC_EOL);


	/* assign attrs for object 'obj [44]' */
	Ema_Object_Attr_Set (model_id, obj [44], 
		"x",                    COMP_CONTENTS, (double) 510,
		"y",                    COMP_CONTENTS, (double) 390,
		EMAC_EOL);


	/* assign attrs for object 'obj [46]' */
	Ema_Object_Attr_Set (model_id, obj [46], 
		"x",                    COMP_CONTENTS, (double) 510,
		"y",                    COMP_CONTENTS, (double) 210,
		EMAC_EOL);


	/* assign attrs for object 'obj [48]' */
	Ema_Object_Attr_Set (model_id, obj [48], 
		"x",                    COMP_CONTENTS, (double) 510,
		"y",                    COMP_CONTENTS, (double) 570,
		EMAC_EOL);


	/* assign attrs for object 'obj [50]' */
	Ema_Object_Attr_Set (model_id, obj [50], 
		"x",                    COMP_CONTENTS, (double) 630,
		"y",                    COMP_CONTENTS, (double) 690,
		EMAC_EOL);


	/* assign attrs for object 'obj [52]' */
	Ema_Object_Attr_Set (model_id, obj [52], 
		"x",                    COMP_CONTENTS, (double) 690,
		"y",                    COMP_CONTENTS, (double) 270,
		EMAC_EOL);


	/* assign attrs for object 'obj [54]' */
	Ema_Object_Attr_Set (model_id, obj [54], 
		"x",                    COMP_CONTENTS, (double) 690,
		"y",                    COMP_CONTENTS, (double) 510,
		EMAC_EOL);


	/* assign attrs for object 'obj [56]' */
	Ema_Object_Attr_Set (model_id, obj [56], 
		"x",                    COMP_CONTENTS, (double) 750,
		"y",                    COMP_CONTENTS, (double) 690,
		EMAC_EOL);


	/* assign attrs for object 'obj [58]' */
	Ema_Object_Attr_Set (model_id, obj [58], 
		"x",                    COMP_CONTENTS, (double) 870,
		"y",                    COMP_CONTENTS, (double) 630,
		EMAC_EOL);


	/* assign attrs for object 'obj [60]' */
	Ema_Object_Attr_Set (model_id, obj [60], 
		"x",                    COMP_CONTENTS, (double) 630,
		"y",                    COMP_CONTENTS, (double) 90,
		EMAC_EOL);


	/* assign attrs for object 'obj [62]' */
	Ema_Object_Attr_Set (model_id, obj [62], 
		"x",                    COMP_CONTENTS, (double) 750,
		"y",                    COMP_CONTENTS, (double) 90,
		EMAC_EOL);


	/* assign attrs for object 'obj [64]' */
	Ema_Object_Attr_Set (model_id, obj [64], 
		"x",                    COMP_CONTENTS, (double) 870,
		"y",                    COMP_CONTENTS, (double) 150,
		EMAC_EOL);


	/* assign attrs for object 'obj [66]' */
	Ema_Object_Attr_Set (model_id, obj [66], 
		"x",                    COMP_CONTENTS, (double) 870,
		"y",                    COMP_CONTENTS, (double) 270,
		EMAC_EOL);


	/* assign attrs for object 'obj [68]' */
	Ema_Object_Attr_Set (model_id, obj [68], 
		"x",                    COMP_CONTENTS, (double) 870,
		"y",                    COMP_CONTENTS, (double) 510,
		EMAC_EOL);


	/* assign attrs for object 'obj [70]' */
	Ema_Object_Attr_Set (model_id, obj [70], 
		"x",                    COMP_CONTENTS, (double) 90,
		"y",                    COMP_CONTENTS, (double) 210,
		EMAC_EOL);


	/* assign attrs for object 'obj [72]' */
	Ema_Object_Attr_Set (model_id, obj [72], 
		"x",                    COMP_CONTENTS, (double) 113,
		"y",                    COMP_CONTENTS, (double) 572,
		EMAC_EOL);


	/* assign attrs for object 'obj [73]' */
	Ema_Object_Attr_Set (model_id, obj [73], 
		"x",                    COMP_CONTENTS, (double) 258,
		"y",                    COMP_CONTENTS, (double) 390,
		EMAC_EOL);


	/* assign attrs for object 'obj [74]' */
	Ema_Object_Attr_Set (model_id, obj [74], 
		"x",                    COMP_CONTENTS, (double) 192,
		"y",                    COMP_CONTENTS, (double) 481,
		EMAC_EOL);


	/* assign attrs for object 'obj [76]' */
	Ema_Object_Attr_Set (model_id, obj [76], 
		"x",                    COMP_CONTENTS, (double) 296,
		"y",                    COMP_CONTENTS, (double) 398,
		EMAC_EOL);


	/* assign attrs for object 'obj [77]' */
	Ema_Object_Attr_Set (model_id, obj [77], 
		"x",                    COMP_CONTENTS, (double) 344,
		"y",                    COMP_CONTENTS, (double) 570,
		EMAC_EOL);


	/* assign attrs for object 'obj [78]' */
	Ema_Object_Attr_Set (model_id, obj [78], 
		"x",                    COMP_CONTENTS, (double) 493,
		"y",                    COMP_CONTENTS, (double) 571,
		EMAC_EOL);


	/* assign attrs for object 'obj [79]' */
	Ema_Object_Attr_Set (model_id, obj [79], 
		"x",                    COMP_CONTENTS, (double) 411,
		"y",                    COMP_CONTENTS, (double) 580,
		EMAC_EOL);


	/* assign attrs for object 'obj [81]' */
	Ema_Object_Attr_Set (model_id, obj [81], 
		"x",                    COMP_CONTENTS, (double) 296,
		"y",                    COMP_CONTENTS, (double) 388,
		EMAC_EOL);


	/* assign attrs for object 'obj [82]' */
	Ema_Object_Attr_Set (model_id, obj [82], 
		"x",                    COMP_CONTENTS, (double) 488,
		"y",                    COMP_CONTENTS, (double) 390,
		EMAC_EOL);


	/* assign attrs for object 'obj [83]' */
	Ema_Object_Attr_Set (model_id, obj [83], 
		"x",                    COMP_CONTENTS, (double) 394,
		"y",                    COMP_CONTENTS, (double) 380,
		EMAC_EOL);


	/* assign attrs for object 'obj [85]' */
	Ema_Object_Attr_Set (model_id, obj [85], 
		"x",                    COMP_CONTENTS, (double) 295,
		"y",                    COMP_CONTENTS, (double) 379,
		EMAC_EOL);


	/* assign attrs for object 'obj [86]' */
	Ema_Object_Attr_Set (model_id, obj [86], 
		"x",                    COMP_CONTENTS, (double) 382,
		"y",                    COMP_CONTENTS, (double) 209,
		EMAC_EOL);


	/* assign attrs for object 'obj [87]' */
	Ema_Object_Attr_Set (model_id, obj [87], 
		"x",                    COMP_CONTENTS, (double) 495,
		"y",                    COMP_CONTENTS, (double) 209,
		EMAC_EOL);


	/* assign attrs for object 'obj [88]' */
	Ema_Object_Attr_Set (model_id, obj [88], 
		"x",                    COMP_CONTENTS, (double) 419,
		"y",                    COMP_CONTENTS, (double) 195,
		EMAC_EOL);


	/* assign attrs for object 'obj [90]' */
	Ema_Object_Attr_Set (model_id, obj [90], 
		"x",                    COMP_CONTENTS, (double) 513,
		"y",                    COMP_CONTENTS, (double) 369,
		EMAC_EOL);


	/* assign attrs for object 'obj [91]' */
	Ema_Object_Attr_Set (model_id, obj [91], 
		"x",                    COMP_CONTENTS, (double) 458,
		"y",                    COMP_CONTENTS, (double) 330,
		EMAC_EOL);


	/* assign attrs for object 'obj [92]' */
	Ema_Object_Attr_Set (model_id, obj [92], 
		"x",                    COMP_CONTENTS, (double) 458,
		"y",                    COMP_CONTENTS, (double) 261,
		EMAC_EOL);


	/* assign attrs for object 'obj [93]' */
	Ema_Object_Attr_Set (model_id, obj [93], 
		"x",                    COMP_CONTENTS, (double) 496,
		"y",                    COMP_CONTENTS, (double) 214,
		EMAC_EOL);


	/* assign attrs for object 'obj [94]' */
	Ema_Object_Attr_Set (model_id, obj [94], 
		"x",                    COMP_CONTENTS, (double) 427,
		"y",                    COMP_CONTENTS, (double) 286,
		EMAC_EOL);


	/* assign attrs for object 'obj [96]' */
	Ema_Object_Attr_Set (model_id, obj [96], 
		"x",                    COMP_CONTENTS, (double) 497,
		"y",                    COMP_CONTENTS, (double) 388,
		EMAC_EOL);


	/* assign attrs for object 'obj [97]' */
	Ema_Object_Attr_Set (model_id, obj [97], 
		"x",                    COMP_CONTENTS, (double) 457,
		"y",                    COMP_CONTENTS, (double) 443,
		EMAC_EOL);


	/* assign attrs for object 'obj [98]' */
	Ema_Object_Attr_Set (model_id, obj [98], 
		"x",                    COMP_CONTENTS, (double) 457,
		"y",                    COMP_CONTENTS, (double) 519,
		EMAC_EOL);


	/* assign attrs for object 'obj [99]' */
	Ema_Object_Attr_Set (model_id, obj [99], 
		"x",                    COMP_CONTENTS, (double) 492,
		"y",                    COMP_CONTENTS, (double) 551,
		EMAC_EOL);


	/* assign attrs for object 'obj [100]' */
	Ema_Object_Attr_Set (model_id, obj [100], 
		"x",                    COMP_CONTENTS, (double) 442,
		"y",                    COMP_CONTENTS, (double) 484,
		EMAC_EOL);


	/* assign attrs for object 'obj [102]' */
	Ema_Object_Attr_Set (model_id, obj [102], 
		"x",                    COMP_CONTENTS, (double) 672,
		"y",                    COMP_CONTENTS, (double) 272,
		EMAC_EOL);


	/* assign attrs for object 'obj [103]' */
	Ema_Object_Attr_Set (model_id, obj [103], 
		"x",                    COMP_CONTENTS, (double) 520,
		"y",                    COMP_CONTENTS, (double) 387,
		EMAC_EOL);


	/* assign attrs for object 'obj [104]' */
	Ema_Object_Attr_Set (model_id, obj [104], 
		"x",                    COMP_CONTENTS, (double) 601,
		"y",                    COMP_CONTENTS, (double) 342,
		EMAC_EOL);


	/* assign attrs for object 'obj [106]' */
	Ema_Object_Attr_Set (model_id, obj [106], 
		"x",                    COMP_CONTENTS, (double) 523,
		"y",                    COMP_CONTENTS, (double) 210,
		EMAC_EOL);


	/* assign attrs for object 'obj [107]' */
	Ema_Object_Attr_Set (model_id, obj [107], 
		"x",                    COMP_CONTENTS, (double) 679,
		"y",                    COMP_CONTENTS, (double) 270,
		EMAC_EOL);


	/* assign attrs for object 'obj [108]' */
	Ema_Object_Attr_Set (model_id, obj [108], 
		"x",                    COMP_CONTENTS, (double) 603,
		"y",                    COMP_CONTENTS, (double) 240,
		EMAC_EOL);


	/* assign attrs for object 'obj [110]' */
	Ema_Object_Attr_Set (model_id, obj [110], 
		"x",                    COMP_CONTENTS, (double) 522,
		"y",                    COMP_CONTENTS, (double) 572,
		EMAC_EOL);


	/* assign attrs for object 'obj [111]' */
	Ema_Object_Attr_Set (model_id, obj [111], 
		"x",                    COMP_CONTENTS, (double) 688,
		"y",                    COMP_CONTENTS, (double) 513,
		EMAC_EOL);


	/* assign attrs for object 'obj [112]' */
	Ema_Object_Attr_Set (model_id, obj [112], 
		"x",                    COMP_CONTENTS, (double) 607,
		"y",                    COMP_CONTENTS, (double) 543,
		EMAC_EOL);


	/* assign attrs for object 'obj [114]' */
	Ema_Object_Attr_Set (model_id, obj [114], 
		"x",                    COMP_CONTENTS, (double) 693,
		"y",                    COMP_CONTENTS, (double) 508,
		EMAC_EOL);


	/* assign attrs for object 'obj [115]' */
	Ema_Object_Attr_Set (model_id, obj [115], 
		"x",                    COMP_CONTENTS, (double) 626,
		"y",                    COMP_CONTENTS, (double) 692,
		EMAC_EOL);


	/* assign attrs for object 'obj [116]' */
	Ema_Object_Attr_Set (model_id, obj [116], 
		"x",                    COMP_CONTENTS, (double) 646,
		"y",                    COMP_CONTENTS, (double) 603,
		EMAC_EOL);


	/* assign attrs for object 'obj [118]' */
	Ema_Object_Attr_Set (model_id, obj [118], 
		"x",                    COMP_CONTENTS, (double) 690,
		"y",                    COMP_CONTENTS, (double) 505,
		EMAC_EOL);


	/* assign attrs for object 'obj [119]' */
	Ema_Object_Attr_Set (model_id, obj [119], 
		"x",                    COMP_CONTENTS, (double) 517,
		"y",                    COMP_CONTENTS, (double) 403,
		EMAC_EOL);


	/* assign attrs for object 'obj [120]' */
	Ema_Object_Attr_Set (model_id, obj [120], 
		"x",                    COMP_CONTENTS, (double) 614,
		"y",                    COMP_CONTENTS, (double) 446,
		EMAC_EOL);


	/* assign attrs for object 'obj [122]' */
	Ema_Object_Attr_Set (model_id, obj [122], 
		"x",                    COMP_CONTENTS, (double) 710,
		"y",                    COMP_CONTENTS, (double) 504,
		EMAC_EOL);


	/* assign attrs for object 'obj [123]' */
	Ema_Object_Attr_Set (model_id, obj [123], 
		"x",                    COMP_CONTENTS, (double) 747,
		"y",                    COMP_CONTENTS, (double) 665,
		EMAC_EOL);


	/* assign attrs for object 'obj [124]' */
	Ema_Object_Attr_Set (model_id, obj [124], 
		"x",                    COMP_CONTENTS, (double) 743,
		"y",                    COMP_CONTENTS, (double) 632,
		EMAC_EOL);


	/* assign attrs for object 'obj [126]' */
	Ema_Object_Attr_Set (model_id, obj [126], 
		"x",                    COMP_CONTENTS, (double) 738,
		"y",                    COMP_CONTENTS, (double) 670,
		EMAC_EOL);


	/* assign attrs for object 'obj [127]' */
	Ema_Object_Attr_Set (model_id, obj [127], 
		"x",                    COMP_CONTENTS, (double) 707,
		"y",                    COMP_CONTENTS, (double) 530,
		EMAC_EOL);


	/* assign attrs for object 'obj [128]' */
	Ema_Object_Attr_Set (model_id, obj [128], 
		"x",                    COMP_CONTENTS, (double) 723,
		"y",                    COMP_CONTENTS, (double) 600,
		EMAC_EOL);


	/* assign attrs for object 'obj [130]' */
	Ema_Object_Attr_Set (model_id, obj [130], 
		"x",                    COMP_CONTENTS, (double) 712,
		"y",                    COMP_CONTENTS, (double) 516,
		EMAC_EOL);


	/* assign attrs for object 'obj [131]' */
	Ema_Object_Attr_Set (model_id, obj [131], 
		"x",                    COMP_CONTENTS, (double) 850,
		"y",                    COMP_CONTENTS, (double) 635,
		EMAC_EOL);


	/* assign attrs for object 'obj [132]' */
	Ema_Object_Attr_Set (model_id, obj [132], 
		"x",                    COMP_CONTENTS, (double) 783,
		"y",                    COMP_CONTENTS, (double) 576,
		EMAC_EOL);


	/* assign attrs for object 'obj [134]' */
	Ema_Object_Attr_Set (model_id, obj [134], 
		"x",                    COMP_CONTENTS, (double) 846,
		"y",                    COMP_CONTENTS, (double) 623,
		EMAC_EOL);


	/* assign attrs for object 'obj [135]' */
	Ema_Object_Attr_Set (model_id, obj [135], 
		"x",                    COMP_CONTENTS, (double) 716,
		"y",                    COMP_CONTENTS, (double) 510,
		EMAC_EOL);


	/* assign attrs for object 'obj [136]' */
	Ema_Object_Attr_Set (model_id, obj [136], 
		"x",                    COMP_CONTENTS, (double) 784,
		"y",                    COMP_CONTENTS, (double) 566,
		EMAC_EOL);


	/* assign attrs for object 'obj [138]' */
	Ema_Object_Attr_Set (model_id, obj [138], 
		"x",                    COMP_CONTENTS, (double) 688,
		"y",                    COMP_CONTENTS, (double) 247,
		EMAC_EOL);


	/* assign attrs for object 'obj [139]' */
	Ema_Object_Attr_Set (model_id, obj [139], 
		"x",                    COMP_CONTENTS, (double) 637,
		"y",                    COMP_CONTENTS, (double) 96,
		EMAC_EOL);


	/* assign attrs for object 'obj [140]' */
	Ema_Object_Attr_Set (model_id, obj [140], 
		"x",                    COMP_CONTENTS, (double) 642,
		"y",                    COMP_CONTENTS, (double) 153,
		EMAC_EOL);


	/* assign attrs for object 'obj [142]' */
	Ema_Object_Attr_Set (model_id, obj [142], 
		"x",                    COMP_CONTENTS, (double) 628,
		"y",                    COMP_CONTENTS, (double) 103,
		EMAC_EOL);


	/* assign attrs for object 'obj [143]' */
	Ema_Object_Attr_Set (model_id, obj [143], 
		"x",                    COMP_CONTENTS, (double) 674,
		"y",                    COMP_CONTENTS, (double) 248,
		EMAC_EOL);


	/* assign attrs for object 'obj [144]' */
	Ema_Object_Attr_Set (model_id, obj [144], 
		"x",                    COMP_CONTENTS, (double) 653,
		"y",                    COMP_CONTENTS, (double) 176,
		EMAC_EOL);


	/* assign attrs for object 'obj [146]' */
	Ema_Object_Attr_Set (model_id, obj [146], 
		"x",                    COMP_CONTENTS, (double) 709,
		"y",                    COMP_CONTENTS, (double) 253,
		EMAC_EOL);


	/* assign attrs for object 'obj [147]' */
	Ema_Object_Attr_Set (model_id, obj [147], 
		"x",                    COMP_CONTENTS, (double) 753,
		"y",                    COMP_CONTENTS, (double) 117,
		EMAC_EOL);


	/* assign attrs for object 'obj [148]' */
	Ema_Object_Attr_Set (model_id, obj [148], 
		"x",                    COMP_CONTENTS, (double) 736,
		"y",                    COMP_CONTENTS, (double) 181,
		EMAC_EOL);


	/* assign attrs for object 'obj [150]' */
	Ema_Object_Attr_Set (model_id, obj [150], 
		"x",                    COMP_CONTENTS, (double) 742,
		"y",                    COMP_CONTENTS, (double) 108,
		EMAC_EOL);


	/* assign attrs for object 'obj [151]' */
	Ema_Object_Attr_Set (model_id, obj [151], 
		"x",                    COMP_CONTENTS, (double) 695,
		"y",                    COMP_CONTENTS, (double) 248,
		EMAC_EOL);


	/* assign attrs for object 'obj [152]' */
	Ema_Object_Attr_Set (model_id, obj [152], 
		"x",                    COMP_CONTENTS, (double) 721,
		"y",                    COMP_CONTENTS, (double) 178,
		EMAC_EOL);


	/* assign attrs for object 'obj [154]' */
	Ema_Object_Attr_Set (model_id, obj [154], 
		"x",                    COMP_CONTENTS, (double) 708,
		"y",                    COMP_CONTENTS, (double) 270,
		EMAC_EOL);


	/* assign attrs for object 'obj [155]' */
	Ema_Object_Attr_Set (model_id, obj [155], 
		"x",                    COMP_CONTENTS, (double) 863,
		"y",                    COMP_CONTENTS, (double) 155,
		EMAC_EOL);


	/* assign attrs for object 'obj [156]' */
	Ema_Object_Attr_Set (model_id, obj [156], 
		"x",                    COMP_CONTENTS, (double) 788,
		"y",                    COMP_CONTENTS, (double) 213,
		EMAC_EOL);


	/* assign attrs for object 'obj [158]' */
	Ema_Object_Attr_Set (model_id, obj [158], 
		"x",                    COMP_CONTENTS, (double) 852,
		"y",                    COMP_CONTENTS, (double) 150,
		EMAC_EOL);


	/* assign attrs for object 'obj [159]' */
	Ema_Object_Attr_Set (model_id, obj [159], 
		"x",                    COMP_CONTENTS, (double) 708,
		"y",                    COMP_CONTENTS, (double) 259,
		EMAC_EOL);


	/* assign attrs for object 'obj [160]' */
	Ema_Object_Attr_Set (model_id, obj [160], 
		"x",                    COMP_CONTENTS, (double) 779,
		"y",                    COMP_CONTENTS, (double) 210,
		EMAC_EOL);


	/* assign attrs for object 'obj [162]' */
	Ema_Object_Attr_Set (model_id, obj [162], 
		"x",                    COMP_CONTENTS, (double) 646,
		"y",                    COMP_CONTENTS, (double) 668,
		EMAC_EOL);


	/* assign attrs for object 'obj [163]' */
	Ema_Object_Attr_Set (model_id, obj [163], 
		"x",                    COMP_CONTENTS, (double) 692,
		"y",                    COMP_CONTENTS, (double) 538,
		EMAC_EOL);


	/* assign attrs for object 'obj [164]' */
	Ema_Object_Attr_Set (model_id, obj [164], 
		"x",                    COMP_CONTENTS, (double) 672,
		"y",                    COMP_CONTENTS, (double) 603,
		EMAC_EOL);


	/* assign attrs for object 'obj [166]' */
	Ema_Object_Attr_Set (model_id, obj [166], 
		"x",                    COMP_CONTENTS, (double) 684,
		"y",                    COMP_CONTENTS, (double) 287,
		EMAC_EOL);


	/* assign attrs for object 'obj [167]' */
	Ema_Object_Attr_Set (model_id, obj [167], 
		"x",                    COMP_CONTENTS, (double) 654,
		"y",                    COMP_CONTENTS, (double) 317,
		EMAC_EOL);


	/* assign attrs for object 'obj [168]' */
	Ema_Object_Attr_Set (model_id, obj [168], 
		"x",                    COMP_CONTENTS, (double) 724,
		"y",                    COMP_CONTENTS, (double) 317,
		EMAC_EOL);


	/* assign attrs for object 'obj [169]' */
	Ema_Object_Attr_Set (model_id, obj [169], 
		"x",                    COMP_CONTENTS, (double) 694,
		"y",                    COMP_CONTENTS, (double) 290,
		EMAC_EOL);


	/* assign attrs for object 'obj [170]' */
	Ema_Object_Attr_Set (model_id, obj [170], 
		"x",                    COMP_CONTENTS, (double) 692,
		"y",                    COMP_CONTENTS, (double) 327,
		EMAC_EOL);


	/* assign attrs for object 'obj [172]' */
	Ema_Object_Attr_Set (model_id, obj [172], 
		"x",                    COMP_CONTENTS, (double) 504,
		"y",                    COMP_CONTENTS, (double) 405,
		EMAC_EOL);


	/* assign attrs for object 'obj [173]' */
	Ema_Object_Attr_Set (model_id, obj [173], 
		"x",                    COMP_CONTENTS, (double) 477,
		"y",                    COMP_CONTENTS, (double) 439,
		EMAC_EOL);


	/* assign attrs for object 'obj [174]' */
	Ema_Object_Attr_Set (model_id, obj [174], 
		"x",                    COMP_CONTENTS, (double) 542,
		"y",                    COMP_CONTENTS, (double) 439,
		EMAC_EOL);


	/* assign attrs for object 'obj [175]' */
	Ema_Object_Attr_Set (model_id, obj [175], 
		"x",                    COMP_CONTENTS, (double) 524,
		"y",                    COMP_CONTENTS, (double) 414,
		EMAC_EOL);


	/* assign attrs for object 'obj [176]' */
	Ema_Object_Attr_Set (model_id, obj [176], 
		"x",                    COMP_CONTENTS, (double) 511,
		"y",                    COMP_CONTENTS, (double) 448,
		EMAC_EOL);


	/* assign attrs for object 'obj [178]' */
	Ema_Object_Attr_Set (model_id, obj [178], 
		"x",                    COMP_CONTENTS, (double) 690,
		"y",                    COMP_CONTENTS, (double) 492,
		EMAC_EOL);


	/* assign attrs for object 'obj [179]' */
	Ema_Object_Attr_Set (model_id, obj [179], 
		"x",                    COMP_CONTENTS, (double) 652,
		"y",                    COMP_CONTENTS, (double) 467,
		EMAC_EOL);


	/* assign attrs for object 'obj [180]' */
	Ema_Object_Attr_Set (model_id, obj [180], 
		"x",                    COMP_CONTENTS, (double) 731,
		"y",                    COMP_CONTENTS, (double) 467,
		EMAC_EOL);


	/* assign attrs for object 'obj [181]' */
	Ema_Object_Attr_Set (model_id, obj [181], 
		"x",                    COMP_CONTENTS, (double) 695,
		"y",                    COMP_CONTENTS, (double) 482,
		EMAC_EOL);


	/* assign attrs for object 'obj [182]' */
	Ema_Object_Attr_Set (model_id, obj [182], 
		"x",                    COMP_CONTENTS, (double) 696,
		"y",                    COMP_CONTENTS, (double) 458,
		EMAC_EOL);


	/* assign attrs for object 'obj [184]' */
	Ema_Object_Attr_Set (model_id, obj [184], 
		"x",                    COMP_CONTENTS, (double) 716,
		"y",                    COMP_CONTENTS, (double) 266,
		EMAC_EOL);


	/* assign attrs for object 'obj [185]' */
	Ema_Object_Attr_Set (model_id, obj [185], 
		"x",                    COMP_CONTENTS, (double) 854,
		"y",                    COMP_CONTENTS, (double) 265,
		EMAC_EOL);


	/* assign attrs for object 'obj [186]' */
	Ema_Object_Attr_Set (model_id, obj [186], 
		"x",                    COMP_CONTENTS, (double) 788,
		"y",                    COMP_CONTENTS, (double) 258,
		EMAC_EOL);


	/* assign attrs for object 'obj [188]' */
	Ema_Object_Attr_Set (model_id, obj [188], 
		"x",                    COMP_CONTENTS, (double) 843,
		"y",                    COMP_CONTENTS, (double) 275,
		EMAC_EOL);


	/* assign attrs for object 'obj [189]' */
	Ema_Object_Attr_Set (model_id, obj [189], 
		"x",                    COMP_CONTENTS, (double) 713,
		"y",                    COMP_CONTENTS, (double) 275,
		EMAC_EOL);


	/* assign attrs for object 'obj [190]' */
	Ema_Object_Attr_Set (model_id, obj [190], 
		"x",                    COMP_CONTENTS, (double) 778,
		"y",                    COMP_CONTENTS, (double) 274,
		EMAC_EOL);


	/* assign attrs for object 'obj [192]' */
	Ema_Object_Attr_Set (model_id, obj [192], 
		"x",                    COMP_CONTENTS, (double) 713,
		"y",                    COMP_CONTENTS, (double) 497,
		EMAC_EOL);


	/* assign attrs for object 'obj [193]' */
	Ema_Object_Attr_Set (model_id, obj [193], 
		"x",                    COMP_CONTENTS, (double) 851,
		"y",                    COMP_CONTENTS, (double) 499,
		EMAC_EOL);


	/* assign attrs for object 'obj [194]' */
	Ema_Object_Attr_Set (model_id, obj [194], 
		"x",                    COMP_CONTENTS, (double) 784,
		"y",                    COMP_CONTENTS, (double) 492,
		EMAC_EOL);


	/* assign attrs for object 'obj [196]' */
	Ema_Object_Attr_Set (model_id, obj [196], 
		"x",                    COMP_CONTENTS, (double) 840,
		"y",                    COMP_CONTENTS, (double) 511,
		EMAC_EOL);


	/* assign attrs for object 'obj [197]' */
	Ema_Object_Attr_Set (model_id, obj [197], 
		"x",                    COMP_CONTENTS, (double) 715,
		"y",                    COMP_CONTENTS, (double) 506,
		EMAC_EOL);


	/* assign attrs for object 'obj [198]' */
	Ema_Object_Attr_Set (model_id, obj [198], 
		"x",                    COMP_CONTENTS, (double) 779,
		"y",                    COMP_CONTENTS, (double) 508,
		EMAC_EOL);


	/* assign attrs for object 'obj [200]' */
	Ema_Object_Attr_Set (model_id, obj [200], 
		"x",                    COMP_CONTENTS, (double) 248,
		"y",                    COMP_CONTENTS, (double) 381,
		EMAC_EOL);


	/* assign attrs for object 'obj [201]' */
	Ema_Object_Attr_Set (model_id, obj [201], 
		"x",                    COMP_CONTENTS, (double) 93,
		"y",                    COMP_CONTENTS, (double) 230,
		EMAC_EOL);


	/* assign attrs for object 'obj [202]' */
	Ema_Object_Attr_Set (model_id, obj [202], 
		"x",                    COMP_CONTENTS, (double) 173,
		"y",                    COMP_CONTENTS, (double) 306,
		EMAC_EOL);


	/* assign attrs for object 'obj [204]' */
	Ema_Object_Attr_Set (model_id, obj [204], 
		"x",                    COMP_CONTENTS, (double) 111,
		"y",                    COMP_CONTENTS, (double) 225,
		EMAC_EOL);


	/* assign attrs for object 'obj [205]' */
	Ema_Object_Attr_Set (model_id, obj [205], 
		"x",                    COMP_CONTENTS, (double) 258,
		"y",                    COMP_CONTENTS, (double) 371,
		EMAC_EOL);


	/* assign attrs for object 'obj [206]' */
	Ema_Object_Attr_Set (model_id, obj [206], 
		"x",                    COMP_CONTENTS, (double) 187,
		"y",                    COMP_CONTENTS, (double) 298,
		EMAC_EOL);


	/* assign attrs for object 'obj [208]' */
	Ema_Object_Attr_Set (model_id, obj [208], 
		"x",                    COMP_CONTENTS, (double) 267,
		"y",                    COMP_CONTENTS, (double) 366,
		EMAC_EOL);


	/* assign attrs for object 'obj [209]' */
	Ema_Object_Attr_Set (model_id, obj [209], 
		"x",                    COMP_CONTENTS, (double) 266,
		"y",                    COMP_CONTENTS, (double) 174,
		EMAC_EOL);


	/* assign attrs for object 'obj [210]' */
	Ema_Object_Attr_Set (model_id, obj [210], 
		"x",                    COMP_CONTENTS, (double) 269,
		"y",                    COMP_CONTENTS, (double) 270,
		EMAC_EOL);


	/* assign attrs for object 'obj [212]' */
	Ema_Object_Attr_Set (model_id, obj [212], 
		"x",                    COMP_CONTENTS, (double) 279,
		"y",                    COMP_CONTENTS, (double) 174,
		EMAC_EOL);


	/* assign attrs for object 'obj [213]' */
	Ema_Object_Attr_Set (model_id, obj [213], 
		"x",                    COMP_CONTENTS, (double) 278,
		"y",                    COMP_CONTENTS, (double) 363,
		EMAC_EOL);


	/* assign attrs for object 'obj [214]' */
	Ema_Object_Attr_Set (model_id, obj [214], 
		"x",                    COMP_CONTENTS, (double) 282,
		"y",                    COMP_CONTENTS, (double) 271,
		EMAC_EOL);


	/* assign attrs for object 'obj [216]' */
	Ema_Object_Attr_Set (model_id, obj [216], 
		"x",                    COMP_CONTENTS, (double) 262,
		"y",                    COMP_CONTENTS, (double) 414,
		EMAC_EOL);


	/* assign attrs for object 'obj [217]' */
	Ema_Object_Attr_Set (model_id, obj [217], 
		"x",                    COMP_CONTENTS, (double) 262,
		"y",                    COMP_CONTENTS, (double) 602,
		EMAC_EOL);


	/* assign attrs for object 'obj [218]' */
	Ema_Object_Attr_Set (model_id, obj [218], 
		"x",                    COMP_CONTENTS, (double) 264,
		"y",                    COMP_CONTENTS, (double) 511,
		EMAC_EOL);


	/* assign attrs for object 'obj [220]' */
	Ema_Object_Attr_Set (model_id, obj [220], 
		"x",                    COMP_CONTENTS, (double) 279,
		"y",                    COMP_CONTENTS, (double) 603,
		EMAC_EOL);


	/* assign attrs for object 'obj [221]' */
	Ema_Object_Attr_Set (model_id, obj [221], 
		"x",                    COMP_CONTENTS, (double) 277,
		"y",                    COMP_CONTENTS, (double) 415,
		EMAC_EOL);


	/* assign attrs for object 'obj [222]' */
	Ema_Object_Attr_Set (model_id, obj [222], 
		"x",                    COMP_CONTENTS, (double) 280,
		"y",                    COMP_CONTENTS, (double) 509,
		EMAC_EOL);


	/* assign attrs for object 'obj [224]' */
	Ema_Object_Attr_Set (model_id, obj [224], 
		"x",                    COMP_CONTENTS, (double) 246,
		"y",                    COMP_CONTENTS, (double) 385,
		EMAC_EOL);


	/* assign attrs for object 'obj [225]' */
	Ema_Object_Attr_Set (model_id, obj [225], 
		"x",                    COMP_CONTENTS, (double) 221,
		"y",                    COMP_CONTENTS, (double) 372,
		EMAC_EOL);


	/* assign attrs for object 'obj [226]' */
	Ema_Object_Attr_Set (model_id, obj [226], 
		"x",                    COMP_CONTENTS, (double) 221,
		"y",                    COMP_CONTENTS, (double) 399,
		EMAC_EOL);


	/* assign attrs for object 'obj [227]' */
	Ema_Object_Attr_Set (model_id, obj [227], 
		"x",                    COMP_CONTENTS, (double) 246,
		"y",                    COMP_CONTENTS, (double) 392,
		EMAC_EOL);


	/* assign attrs for object 'obj [228]' */
	Ema_Object_Attr_Set (model_id, obj [228], 
		"x",                    COMP_CONTENTS, (double) 211,
		"y",                    COMP_CONTENTS, (double) 387,
		EMAC_EOL);


	/* assign attrs for object 'obj [27]' */
	Ema_Object_Attr_Set (model_id, obj [27], 
		"name",                 COMP_CONTENTS, "begsim intrpt",
		"operation",            COMP_CONTENTS, 3,
		"value",                COMP_CONTENTS_TYPE, EMAC_TOGGLE,
		"value",                COMP_TOGGLE,   EMAC_ENABLED,
		"type",                 COMP_CONTENTS, 2,
		EMAC_EOL);


	/* assign attrs for object 'obj [28]' */
	Ema_Object_Attr_Set (model_id, obj [28], 
		"name",                 COMP_CONTENTS, "doc file",
		"operation",            COMP_CONTENTS, 3,
		"value",                COMP_CONTENTS_TYPE, EMAC_STRING,
		"value",                COMP_CONTENTS, "nd_module",
		"value",                COMP_INTENDED, EMAC_DISABLED,
		"type",                 COMP_CONTENTS, 4,
		EMAC_EOL);


	/* assign attrs for object 'obj [29]' */
	Ema_Object_Attr_Set (model_id, obj [29], 
		"name",                 COMP_CONTENTS, "endsim intrpt",
		"operation",            COMP_CONTENTS, 3,
		"value",                COMP_CONTENTS_TYPE, EMAC_TOGGLE,
		"value",                COMP_TOGGLE,   EMAC_ENABLED,
		"type",                 COMP_CONTENTS, 2,
		EMAC_EOL);


	/* assign attrs for object 'obj [30]' */
	Ema_Object_Attr_Set (model_id, obj [30], 
		"name",                 COMP_CONTENTS, "failure intrpts",
		"operation",            COMP_CONTENTS, 3,
		"value",                COMP_CONTENTS_TYPE, EMAC_STRING,
		"value",                COMP_CONTENTS, "disabled",
		"value",                COMP_INTENDED, EMAC_DISABLED,
		"type",                 COMP_CONTENTS, 8,
		EMAC_EOL);


	/* assign attrs for object 'obj [31]' */
	Ema_Object_Attr_Set (model_id, obj [31], 
		"name",                 COMP_CONTENTS, "intrpt interval",
		"operation",            COMP_CONTENTS, 3,
		"value",                COMP_CONTENTS_TYPE, EMAC_TOGGLE_DOUBLE,
		"value",                COMP_TOGGLE,   EMAC_DISABLED,
		"value",                COMP_CONTENTS, (double) -1e+100,
		"value",                COMP_INTENDED, EMAC_DISABLED,
		"type",                 COMP_CONTENTS, 3,
		EMAC_EOL);


	/* assign attrs for object 'obj [32]' */
	Ema_Object_Attr_Set (model_id, obj [32], 
		"name",                 COMP_CONTENTS, "priority",
		"operation",            COMP_CONTENTS, 3,
		"value",                COMP_CONTENTS_TYPE, EMAC_INTEGER,
		"value",                COMP_CONTENTS, 5,
		"type",                 COMP_CONTENTS, 0,
		EMAC_EOL);


	/* assign attrs for object 'obj [33]' */
	Ema_Object_Attr_Set (model_id, obj [33], 
		"name",                 COMP_CONTENTS, "recovery intrpts",
		"operation",            COMP_CONTENTS, 3,
		"value",                COMP_CONTENTS_TYPE, EMAC_STRING,
		"value",                COMP_CONTENTS, "disabled",
		"value",                COMP_INTENDED, EMAC_DISABLED,
		"type",                 COMP_CONTENTS, 8,
		EMAC_EOL);


	/* assign attrs for object 'obj [34]' */
	Ema_Object_Attr_Set (model_id, obj [34], 
		"name",                 COMP_CONTENTS, "super priority",
		"operation",            COMP_CONTENTS, 3,
		"value",                COMP_CONTENTS_TYPE, EMAC_TOGGLE,
		"value",                COMP_TOGGLE,   EMAC_DISABLED,
		"type",                 COMP_CONTENTS, 2,
		EMAC_EOL);


	/* assign attrs for object 'obj [229]' */
	/* create and init prg list 'prg_lptr [67]' */
	prg_lptr [67] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [67], 
		"Average duty cycle per sensor node.",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [229], 
		"name",                 COMP_CONTENTS, "Average Duty Cycle",
		"description",          COMP_CONTENTS, prg_lptr [67],
		"group name",           COMP_CONTENTS, "General",
		"capture mode",         COMP_CONTENTS, "normal",
		"display mode",         COMP_CONTENTS, "discrete",
		"low bound",            COMP_TOGGLE,   EMAC_ENABLED,
		"low bound",            COMP_CONTENTS, (double) 0,
		EMAC_EOL);


	/* assign attrs for object 'obj [230]' */
	/* create and init prg list 'prg_lptr [68]' */
	prg_lptr [68] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [68], 
		"Average energy consumption per sensor node per second",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [230], 
		"name",                 COMP_CONTENTS, "Average Energy Consumption",
		"description",          COMP_CONTENTS, prg_lptr [68],
		"group name",           COMP_CONTENTS, "General",
		"capture mode",         COMP_CONTENTS, "normal",
		"display mode",         COMP_CONTENTS, "discrete",
		"low bound",            COMP_TOGGLE,   EMAC_ENABLED,
		"low bound",            COMP_CONTENTS, (double) 0,
		EMAC_EOL);


	/* assign attrs for object 'obj [231]' */
	/* create and init prg list 'prg_lptr [69]' */
	prg_lptr [69] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [231], 
		"name",                 COMP_CONTENTS, "Lost Pkt Due Collision",
		"description",          COMP_CONTENTS, prg_lptr [69],
		"group name",           COMP_CONTENTS, "General",
		"capture mode",         COMP_CONTENTS, "normal",
		"display mode",         COMP_CONTENTS, "discrete",
		"low bound",            COMP_TOGGLE,   EMAC_ENABLED,
		"low bound",            COMP_CONTENTS, (double) 0,
		EMAC_EOL);


	/* assign attrs for object 'obj [232]' */
	/* create and init prg list 'prg_lptr [70]' */
	prg_lptr [70] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [232], 
		"name",                 COMP_CONTENTS, "Lost Pkt Due Overflow",
		"description",          COMP_CONTENTS, prg_lptr [70],
		"group name",           COMP_CONTENTS, "General",
		"capture mode",         COMP_CONTENTS, "normal",
		"display mode",         COMP_CONTENTS, "discrete",
		"low bound",            COMP_TOGGLE,   EMAC_ENABLED,
		"low bound",            COMP_CONTENTS, (double) 0,
		EMAC_EOL);


	/* assign attrs for object 'obj [233]' */
	/* create and init prg list 'prg_lptr [71]' */
	prg_lptr [71] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [233], 
		"name",                 COMP_CONTENTS, "Queue Length",
		"description",          COMP_CONTENTS, prg_lptr [71],
		"group name",           COMP_CONTENTS, "",
		"capture mode",         COMP_CONTENTS, "normal",
		"display mode",         COMP_CONTENTS, "discrete",
		"low bound",            COMP_TOGGLE,   EMAC_ENABLED,
		"low bound",            COMP_CONTENTS, (double) 0,
		EMAC_EOL);


	/* assign attrs for object 'obj [234]' */
	/* create and init prg list 'prg_lptr [72]' */
	prg_lptr [72] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [72], 
		"the number of times a specific number of packets appearing in the queue.",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [234], 
		"name",                 COMP_CONTENTS, "Queue Status",
		"description",          COMP_CONTENTS, prg_lptr [72],
		"group name",           COMP_CONTENTS, "",
		"capture mode",         COMP_CONTENTS, "normal",
		"display mode",         COMP_CONTENTS, "discrete",
		"low bound",            COMP_TOGGLE,   EMAC_ENABLED,
		"low bound",            COMP_CONTENTS, (double) 0,
		EMAC_EOL);


	/* assign attrs for object 'obj [235]' */
	/* create and init prg list 'prg_lptr [73]' */
	prg_lptr [73] = (Prg_List *)prg_list_create ();
	prg_list_strings_append (prg_lptr [73], 
		"average packet delay at each hop",
		PRGC_NIL);

	Ema_Object_Attr_Set (model_id, obj [235], 
		"name",                 COMP_CONTENTS, "Average Packet Delay",
		"description",          COMP_CONTENTS, prg_lptr [73],
		"group name",           COMP_CONTENTS, "",
		"capture mode",         COMP_CONTENTS, "normal",
		"display mode",         COMP_CONTENTS, "discrete",
		"low bound",            COMP_TOGGLE,   EMAC_ENABLED,
		"low bound",            COMP_CONTENTS, (double) 0,
		EMAC_EOL);


	/* assign attrs for object 'obj [236]' */
	/* create and init prg list 'prg_lptr [74]' */
	prg_lptr [74] = (Prg_List *)prg_list_create ();
	Ema_Object_Attr_Set (model_id, obj [236], 
		"name",                 COMP_CONTENTS, "Send Probability",
		"description",          COMP_CONTENTS, prg_lptr [74],
		"group name",           COMP_CONTENTS, "",
		"capture mode",         COMP_CONTENTS, "normal",
		"display mode",         COMP_CONTENTS, "discrete",
		"low bound",            COMP_TOGGLE,   EMAC_ENABLED,
		"low bound",            COMP_CONTENTS, (double) 0,
		EMAC_EOL);








	/* write the model to application-readable form */
	Ema_Model_Write (model_id, "pri_proc_enhanced");

	return 0;
	}


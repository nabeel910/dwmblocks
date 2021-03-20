//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"",	"music-indicator",	2,	18},
	{"",	"packagecount",	600,	16},
//	{"",	"weather",	60,	16},
	{"🌡 ",	"cputemp",	10,	12},
	{"⬇ ",	"dwmdown",	1,	26},
	{"",	"battery",	5,	3},
	{"🔆 ",	"dwmbrightness",	0,	10},
	{"",	"sound",	0,	5},
	{"📡 ",	"wifi",	5,	17},
	{"📅 ",	"date +%a,%d-%m",	5,	20},
	{"🕒 ",	"date +%I:%M ",	5,	20},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
// Sets delimiters around the full statusbar. NULL character ('\0') means no delimeter.
static char leftpad[]  = " ";
static char rightpad[] = " ";

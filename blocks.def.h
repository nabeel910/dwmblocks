//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"",	"sb-media",	2,	18},
	{"",	"sb-packagecount",	600,	16},
//	{"",	"weather",	60,	16},
	{"🌡 ", "sb-cputemp",	10,	12},
	{"⬇ ",	"sb-down",	1,	26},
	{"",	"sb-battery",	5,	3},
	{"🔆 ",	"sb-brightness",	0,	10},
	{"",	"sb-sound",	0,	5},
	{"📡 ",	"sb-wifi",	5,	17},
	{"📅 ",	"date +%a,%d-%m",	5,	20},
	{"🕒 ",	"date +%I:%M ",	5,	20},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
// Sets delimiters around the full statusbar. NULL character ('\0') means no delimeter.
static char leftpad[]  = " ";
static char rightpad[] = " ";

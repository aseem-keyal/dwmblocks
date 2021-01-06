//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-spotify",	0,	12},
	{"",	"sb-music",	0,	11},
	{"",	"sb-disk /",	1800,	16},
	{"",	"sb-disk",	1800,	16},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-battery",	30,	3},
	{"",	"sb-clock",	60,	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

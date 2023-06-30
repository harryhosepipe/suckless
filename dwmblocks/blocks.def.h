//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "battery-status",                                          	5,		3},

	{"", "internet-status",                                          	10,		4},

	{"Mem:", "memory-status",                                      	    30,		0},

	{"", "date '+%b %d (%a) %I:%M%p'",				                	5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

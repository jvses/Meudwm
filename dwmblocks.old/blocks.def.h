//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{""		,"mram"			,1			,0},
	{""		,"bateria"		,10			,0},
	{" "		,"hora"			,1			,0},
	{""		,"volume"		,0			,10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 4;

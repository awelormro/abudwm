//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"|   ", "bash ~/dwmblocks/cpusage.sh", 3, 0},
	{"|   ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	3,   0},
  {"|  ", "echo $(pamixer --get-volume) %",                            1,   0},
  {"", "bash ~/dwmblocks/bright.sh",                                    1,   0},
  {"| 󰁹 ", "acpi -b | grep -o '[0-9]\\+%'",                             2,   0},
	{"|  ", "date '+%b %d (%a) %I:%M%p'",					                          5,   0},
  {"|  ", "iwgetid -r", 30, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 4;

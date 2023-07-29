//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"| ^c#0F5FFF^   ^c#FFFFFF^", "bash ~/dwmblocks/cpusage.sh", 3, 0},
  {"| ^c#FF0F5F^  ^c#FFFFFF^", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	3,   0},
  {"|^c#00FF5F^  ^c#FFFFFF^", "echo $(pamixer --get-volume) %",                            1,   0},
  {"|^c#F5F505^ 󰃠 ^c#FFFFFF^", "bash ~/dwmblocks/bright.sh",                                    1,   0},
  {"|^c#F5F505^ 󰁹 ^c#FFFFFF^", "acpi -b | grep -o '[0-9]\\+%'",                             2,   0},
	{"|^c#00FF5F^  ^c#FFFFFF^^c#FFFFFF^", "date '+%b %d (%a) %I:%M%p'",					                          5,   0},
  {"|^c#F5F505^  ^c#FFFFFF^", "iwgetid -r", 30, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 4;

//#F5F505

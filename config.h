//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	                                          	/*Update Interval*/	/*Update Signal*/
	{"",        "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	1,	                16},
        {"V:",      "/home/dave/volume.sh",                                         1,                      10},
	{"B:",    "acpi -b | awk -F'[,%]' '{print $2}' | xargs printf '%02d%%'",	5,	                3},
	{"",        "date '+%I:%M:%S %p'",	                                        2,              	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";
static unsigned int delimLen = 5;

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

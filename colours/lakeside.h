/* Red colourscheme */

static const char normbordercolor[] = "#222222";
static const char normbgcolor[]     = "#ebf8ff";
static const char normfgcolor[]     = "#474747";
static const char selbordercolor[]  = "#0099ff";
static const char selbgcolor[]      = "#0099ff";
static const char selfgcolor[]      = "#000000";

/* coloured statusbar */
#define NUMCOLORS         13			// Change number when adding more colours
static const char colors[NUMCOLORS][ColLast][8] = {
	// border   foreground background
	{ "#ebf8ff", "#474747", "#ebf8ff" },  // default selection, black font on white
	{ "#0099ff", "#ffffff", "#0099ff" },  // selected, white text red borders
	{ "#ebf8ff", "#eee8d5", "#ebf8ff" },  // white font on red for inactive tags
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // yellow font on red
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // red font on red
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // green font on red
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // blue font on red
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // orange font on red
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // purple font on red
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // pink font on red
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // brown font on red
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // peach font on red
	{ "#ebf8ff", "#0099ff", "#ebf8ff" },  // maroon font on red
    // add more here
};

/* Light colourscheme */

static const char normbordercolor[] = "#222222";
static const char normbgcolor[]     = "#ffffff";
static const char normfgcolor[]     = "#000000";
static const char selbordercolor[]  = "#005577";
static const char selbgcolor[]      = "#005577";
static const char selfgcolor[]      = "#eeeeee";

/* coloured statusbar */
#define NUMCOLORS         13			// Change number when adding more colours
static const char colors[NUMCOLORS][ColLast][8] = {
	// border   foreground background
	{ "#eee8d5", "#3a3935", "#eee8d5" },  // default selection, black font on white
	{ "#66ccff", "#000000", "#66ccff" },  // selected, blue borders
	{ "#eee8d5", "#dddddd", "#eee8d5" },  // grey font on white for inactive tags
	{ "#eee8d5", "#e6e600", "#eee8d5" },  // yellow font on white
	{ "#eee8d5", "#ff1919", "#eee8d5" },  // red font on white
	{ "#eee8d5", "#009900", "#eee8d5" },  // green font on white
	{ "#eee8d5", "#0099ff", "#eee8d5" },  // blue font on white
	{ "#eee8d5", "#ff9900", "#eee8d5" },  // orange font on white
	{ "#eee8d5", "#990099", "#eee8d5" },  // purple font on white
	{ "#eee8d5", "#ff3399", "#eee8d5" },  // pink font on white
	{ "#eee8d5", "#990000", "#eee8d5" },  // brown font on white
	{ "#eee8d5", "#ff9966", "#eee8d5" },  // peach font on white
	{ "#eee8d5", "#990033", "#eee8d5" },  // maroon font on white
    // add more here
};

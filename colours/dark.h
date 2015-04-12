/* Dark colourscheme */

static const char normbordercolor[] = "#222222";
static const char normbgcolor[]     = "#eee8d5";
static const char normfgcolor[]     = "#4E4E4C";
static const char selbordercolor[]  = "#005577";
static const char selbgcolor[]      = "#990000";
static const char selfgcolor[]      = "#000000";

/* coloured statusbar */
#define NUMCOLORS         13			// Change number when adding more colours
static const char colors[NUMCOLORS][ColLast][8] = {
	// border   foreground background
	{ "#4E4E4C", "#eee8d5", "#4E4E4C" },  // default selection, black font on white
	{ "#990000", "#ffffff", "#990000" },  // selected, white text red borders
	{ "#4E4E4C", "#1F1F2E", "#4E4E4C" },  // grey font on black for inactive tags
	{ "#4E4E4C", "#e6e600", "#4E4E4C" },  // yellow font on black
	{ "#4E4E4C", "#ff1919", "#4E4E4C" },  // red font on black
	{ "#4E4E4C", "#009900", "#4E4E4C" },  // green font on black
	{ "#4E4E4C", "#0099ff", "#4E4E4C" },  // blue font on black
	{ "#4E4E4C", "#ff9900", "#4E4E4C" },  // orange font on black
	{ "#4E4E4C", "#990099", "#4E4E4C" },  // purple font on black
	{ "#4E4E4C", "#ff3399", "#4E4E4C" },  // pink font on black
	{ "#4E4E4C", "#990000", "#4E4E4C" },  // brown font on black
	{ "#4E4E4C", "#ff9966", "#4E4E4C" },  // peach font on black
	{ "#4E4E4C", "#990033", "#4E4E4C" },  // maroon font on black
    // add more here
};

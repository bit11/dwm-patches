/* Red colourscheme */

static const char normbordercolor[] = "#222222";
static const char normbgcolor[]     = "#ffecec";
static const char normfgcolor[]     = "#474747";
static const char selbordercolor[]  = "#990000";
static const char selbgcolor[]      = "#990000";
static const char selfgcolor[]      = "#000000";

/* coloured statusbar */
#define NUMCOLORS         13			// Change number when adding more colours
static const char colors[NUMCOLORS][ColLast][8] = {
	// border   foreground background
	{ "#ffecec", "#474747", "#ffecec" },  // default selection, black font on white
	{ "#990000", "#ffffff", "#990000" },  // selected, white text red borders
	{ "#ffecec", "#eee8d5", "#ffecec" },  // white font on red for inactive tags
	{ "#ffecec", "#990000", "#ffecec" },  // yellow font on red
	{ "#ffecec", "#990000", "#ffecec" },  // red font on red
	{ "#ffecec", "#990000", "#ffecec" },  // green font on red
	{ "#ffecec", "#990000", "#ffecec" },  // blue font on red
	{ "#ffecec", "#990000", "#ffecec" },  // orange font on red
	{ "#ffecec", "#990000", "#ffecec" },  // purple font on red
	{ "#ffecec", "#990000", "#ffecec" },  // pink font on red
	{ "#ffecec", "#990000", "#ffecec" },  // brown font on red
	{ "#ffecec", "#990000", "#ffecec" },  // peach font on red
	{ "#ffecec", "#990000", "#ffecec" },  // maroon font on red
    // add more here
};

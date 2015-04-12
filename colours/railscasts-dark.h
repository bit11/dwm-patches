/* base16-marrakesh inspired colourscheme, light*/

/* window colours */
static const char normbordercolor[] = "#1d1f21"; // black
static const char normbgcolor[]     = "#1d1f21"; // black
static const char normfgcolor[]     = "#e6e1dc"; // white
static const char selbordercolor[]  = "#6d9cbe"; // blue
static const char selbgcolor[]      = "#6d9cbe"; // blue
static const char selfgcolor[]      = "#000000"; // black

/* coloured statusbar */
#define NUMCOLORS         13			// Change number when adding more colours
static const char colors[NUMCOLORS][ColLast][8] = {
	// border   foreground background
	{ "#1d1f21", "#e6e1dc", "#1d1f21" },  // default selection, black font on black
	{ "#6d9cbe", "#ffffff", "#6d9cbe" },  // selected, white text blue borders
	{ "#1d1f21", "#54585a", "#1d1f21" },  // dark grey font on black for inactive tags
	{ "#1d1f21", "#e6e600", "#1d1f21" },  // yellow font on black
	{ "#1d1f21", "#ff1919", "#1d1f21" },  // red font on black
	{ "#1d1f21", "#009900", "#1d1f21" },  // green font on black
	{ "#1d1f21", "#0099ff", "#1d1f21" },  // blue font on black
	{ "#1d1f21", "#ff9900", "#1d1f21" },  // orange font on black
	{ "#1d1f21", "#990099", "#1d1f21" },  // purple font on black
	{ "#1d1f21", "#ff3399", "#1d1f21" },  // pink font on black
	{ "#1d1f21", "#6d9cbe", "#1d1f21" },  // brown font on black
	{ "#1d1f21", "#ff9966", "#1d1f21" },  // peach font on black
	{ "#1d1f21", "#990033", "#1d1f21" },  // maroon font on black
    // add more here
};


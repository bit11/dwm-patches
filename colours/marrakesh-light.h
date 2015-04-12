/* base16-marrakesh inspired colourscheme, light*/

/* window colours */
static const char normbordercolor[] = "#222222"; // white
static const char normbgcolor[]     = "#faf0a5"; // cream-grey
static const char normfgcolor[]     = "#302e2b"; // black
static const char selbordercolor[]  = "#6c6823"; // khaki
static const char selbgcolor[]      = "#6c6823"; // khaki
static const char selfgcolor[]      = "#000000"; // black

/* coloured statusbar */
#define NUMCOLORS         13			// Change number when adding more colours
static const char colors[NUMCOLORS][ColLast][8] = {
	// border   foreground background
	{ "#faf0a5", "#302e2b", "#faf0a5" },  // default selection, black font on cream-green
	{ "#6c6823", "#ffffff", "#6c6823" },  // selected, white text khaki borders
	{ "#faf0a5", "#e4debe", "#faf0a5" },  // white font on cream-green for inactive tags
	{ "#faf0a5", "#e6e600", "#faf0a5" },  // yellow font on cream-green
	{ "#faf0a5", "#ff1919", "#faf0a5" },  // red font on cream-green
	{ "#faf0a5", "#009900", "#faf0a5" },  // green font on cream-green
	{ "#faf0a5", "#0099ff", "#faf0a5" },  // blue font on cream-green
	{ "#faf0a5", "#ff9900", "#faf0a5" },  // orange font on cream-green
	{ "#faf0a5", "#990099", "#faf0a5" },  // purple font on cream-green
	{ "#faf0a5", "#ff3399", "#faf0a5" },  // pink font on cream-green
	{ "#faf0a5", "#6c6823", "#faf0a5" },  // brown font on cream-green
	{ "#faf0a5", "#ff9966", "#faf0a5" },  // peach font on cream-green
	{ "#faf0a5", "#990033", "#faf0a5" },  // maroon font on cream-green
    // add more here
};


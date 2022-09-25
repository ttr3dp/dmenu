/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar    = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy     = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered  = 0;                      /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int border_width = 1;
/* -fn option overrides fonts[0]; default X11 font or font set */


static char font[] = "monospace:pixelsize=14";
static const char *fonts[] = {
	font,
	"Noto Color Emoji:pixelsize=11:antialias=true:autohint=true",
	"JoyPixels:pixelsize=11:antialias=true:autohint=true"
};
static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines          = 0;
static unsigned int lineheight     = 0; /* -h option; minimum height of a menu line */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
+ * Xresources preferences to load at startup
+ */
ResourcePref resources[] = {
	{ "font",         STRING, &font },
	{ "normfgcolor",  STRING, &normfgcolor },
	{ "normbgcolor",  STRING, &normbgcolor },
	{ "selfgcolor",   STRING, &selfgcolor },
	{ "selbgcolor",   STRING, &selbgcolor },
	{ "prompt",       STRING, &prompt },
	{ "topbar",       STRING, &topbar },
	{ "fuzzy",        INTEGER, &fuzzy },
	{ "centered",     INTEGER, &centered },
	{ "min_width",    INTEGER, &min_width },
	{ "border_width", INTEGER, &border_width },
	{ "lineheight", INTEGER, &lineheight },
	{ "min_lineheight", INTEGER, &min_lineheight },
};

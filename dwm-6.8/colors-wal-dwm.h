static const char norm_fg[] = "#85e1d0";
static const char norm_bg[] = "#0b0114";
static const char norm_border[] = "#5d9d91";

static const char sel_fg[] = "#85e1d0";
static const char sel_bg[] = "#AF345F";
static const char sel_border[] = "#85e1d0";

static const char urg_fg[] = "#85e1d0";
static const char urg_bg[] = "#0D576A";
static const char urg_border[] = "#0D576A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    //[SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};

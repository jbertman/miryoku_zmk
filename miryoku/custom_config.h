#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_LT(U_SYM, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_LT(U_SYM, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP


#define XXX &none
#define KP_ESC &kp ESC
#define KP_TAB &kp ESC
#define KP_LCTRL &kp ESC
#define KP_BSPC &kp ESC
#define KP_RET &kp ESC
#define KP_RSHFT &kp ESC

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
KP_ESC   K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  KP_BSPC \
KP_TAB   K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  KP_RET \
KP_LCTRL K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  KP_RSHFT \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

#define MIRYOKU_LAYER_SYM \
&kp GRAVE,         &kp TILDE,         &kp HASH,          &kp AMPS,          &kp PIPE,          &kp CARET,         &kp LBRC,          &kp RBRC,          &kp LBRACKET,      &kp RBRACKET, \
&kp EXCL,          &kp UNDERSCORE,    &kp COLON,         &kp EQUAL,         &kp DLLR,          &kp AT,            &kp LPAR,          &kp RPAR,          &kp UNDERSCORE,    &kp SEMI, \
&kp PRCNT,         &kp QMARK,         &kp ASTRK,         &kp PLUS,          &kp BSLH,          &kp FSLH,          &kp MINUS,         &kp LT,            &kp GT,            &kp DQT, \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDERSCORE,    U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9

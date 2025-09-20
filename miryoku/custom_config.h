


#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_FLIP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_LT(U_SYM, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_LT(U_SYM, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_NUM, BSPC), U_LT(U_SYM, RET),  U_LT(U_MOUSE, TAB),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP


#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC   K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp BSPC \
&kp TAB   K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp RET \
&kp LCTRL K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RSHFT \
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

// #define MACRO_QUOTE(s) #s
// #define COLOR(NAME, CODE) const char NAME[] = MACRO_QUOTE(\e[CODEm);

// COLOR(tRED, 1;31)

// t = text
const char tBLACK[] = "\033[1;30m";
const char tRED[] = "\033[1;31m";
const char tGREEN[] = "\033[1;32m";
const char tYELLOW[] = "\033[1;33m";
const char tBLUE[] = "\033[1;34m";

// b = background
const char bBLACK[] = "\033[1;40m";
const char bRED[] = "\033[1;41m";
const char bGREEN[] = "\033[1;42m";
const char bYELLOW[] = "\033[1;43m";
const char bBLUE[] = "\033[1;44m";
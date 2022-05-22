#include <hl.h>

#ifdef HL_WIN
typedef uchar pchar;
#else
typedef char pchar;
#endif

__declspec(dllexport) int hle_push_text_method(void (*method)(char* text), char* hl_vclosure);
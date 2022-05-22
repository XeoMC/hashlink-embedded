#include <hle.h>

__declspec(dllexport) int hle_push_string_method(void (*method)(char*), char* hl_vclosure) {
	method("Sample text");
}
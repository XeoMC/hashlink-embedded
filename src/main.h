#ifdef HL_WIN
#	include <locale.h>
typedef uchar pchar;
#define pprintf(str,file)	uprintf(USTR(str),file)
#define pfopen(file,ext) _wfopen(file,USTR(ext))
#define pcompare wcscmp
#define ptoi(s)	wcstol(s,NULL,10)
#define PSTR(x) USTR(x)
#else
#	include <sys/stat.h>
typedef char pchar;
#define pprintf printf
#define pfopen fopen
#define pcompare strcmp
#define ptoi atoi
#define PSTR(x) x
#endif

typedef struct {
	pchar* file;
	hl_code* code;
	hl_module* m;
	vdynamic* ret;
	int file_time;
} main_context;

__declspec(dllexport) int hle_start(int argc, char** argv, unsigned char* HL, int size);
#ifndef TEST_DLL_H
#define TEST_DLL_H
#endif
#ifdef _DLLAPI
#define DLLAPI _declspec(dllexport)
#else
#define DLLAPI _declspec(dllimport)
#endif

/*
Add
*/
extern "C" DLLAPI int  add(int a, int b);
/*
Sub
*/
extern "C" DLLAPI int  sub(int a, int b);


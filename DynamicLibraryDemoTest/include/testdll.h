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
int DLLAPI add(int a, int b);
/*
Sub
*/
int DLLAPI sub(int a, int b);


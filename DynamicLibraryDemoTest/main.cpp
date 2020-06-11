#include <stdio.h>
#include "include/testdll.h"
#include <Windows.h>

typedef int (*PADD)(int a, int b);
int main() {
	int a, b;
	printf("请输入两个整数a,b:\n");
	scanf_s("%d%d", &a, &b);
	HMODULE hDLL = LoadLibrary(L"./DynamicLibraryTest.dll");
	if (hDLL == NULL) {
		printf("Load dll failed");
		return 0;
	}
	PADD pAdd = (PADD)GetProcAddress(hDLL, "add");
	printf("%d+%d=%d\n", a, b, pAdd(a, b));
	FreeLibrary(hDLL);
	return 0;
}
#include <stdio.h>
#include "include/testlib.h"
//#pragma comment(lib,"StaticLibDemo.lib")
int main() {
	int a, b;
	printf("��������������a,b:\n");
	scanf_s("%d%d", &a, &b);
	printf("%d+%d=%d\n",a,b, add(a, b));
	return 0;
}
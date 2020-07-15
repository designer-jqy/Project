#include<stdio.h>
#include<stdlib.h>

int k1 = 1;
int k2;
static int k3 = 2;
static int k4;

int main()
{
	static int m1 = 2, m2;
	int i = 1;
	char *p;
	char str[10] = "hello";
	char *q = "hello";
	p = (char *)malloc(100);
	free(p);
	printf("  栈区-变量地址 i：%p\n",&i);
	printf("                p：%p\n",&p);
	printf("              str：%p\n",str);
	printf("                q：%p\n",&q);
	printf("堆区地址-动态申请：%p\n",p);
	printf("   全局外部有初值：%p\n",&k1);
	printf("   全局外部无初值：%p\n",&k2);
	printf(" 静态外部有初值k3：%p\n",&k3);
	printf(" 静态外部无初值k4：%p\n",&k4);
	printf(" 静态内部有初值m1：%p\n",&m1);
	printf(" 静态内部无初值m2：%p\n",&m2);
	printf("     文字常量地址：%p,%s\n",q,q);
	printf("       程序区地址：%p\n",&main);
	return 0;
}

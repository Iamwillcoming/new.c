#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a=10;
	int *p= &a;
	printf("%p \n",&a);
	printf("%p\n",p);
	printf("%d\n",sizeof(*p));
	return 0;
}
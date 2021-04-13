#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int Max( int a,int b)
{
	int x;
	int y;
	if(x>y)
	return x;
	else
		return y;
}

int main()
{
	int a=10;
	int b=20;
	 int max=Max(a,b);
	 printf("max= %d\n",max);
	 return 0;
}

//int  main(void)
//{
//	double r,C;
//	scanf("%lf",&r);
//	C=2*PI*r;
//	printf("输出周长值：%f\n",C);
//	return 0;
//
//
//}

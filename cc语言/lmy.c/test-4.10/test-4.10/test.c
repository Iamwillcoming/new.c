#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int count(int n)
{
	int cot=0;
	while(n)
	{
			cot+=n&1;
			n>>=1;
	}
	return cot;
	/**int cot=0;
	while(n)
	{
		cot++;
		n&=(n-1);
	}
	return cot;*/
}
int main()
{
	int i=0;
	scanf("%d",&i);
	count(i);
	printf("%d\n",count(i));
	return 0;
}
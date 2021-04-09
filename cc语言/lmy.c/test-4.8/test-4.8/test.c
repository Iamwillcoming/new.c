#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
 unsigned int sum(int n)
{
	/*int i=0;
	if(n>=1)
	{
		i= n+sum(n-1);
		n=n-1;
	}
	return i;*/
	int i=0;

}
int main()
{
	int i=0;
	int num=0;
	scanf("%d",&i);
	num=sum(i);
	printf("%d\n",num);
	return 0;
}
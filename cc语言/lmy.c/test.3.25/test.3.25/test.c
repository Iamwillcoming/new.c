#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i=0;
//	scanf("%d",&i);
//	while(i>=1)
//	{
//		int j=0;
//		j=i%10;
//		i=i/10;
//		if(j==0)
//			continue;
//		printf("%d ",j);
//
//	}
//	return 0;
//}
//
//	
//int main()
//{
//	int i=0;
//	int j=0;
//	for(i=100;i<=200;i++)
//	{
//		j=1;
//		j++;
//		if(i%j==1&&j<i)
//			printf("%d ",i);
//		}
//	return 0;
//}




int main()
{
	int i=0;
	for(i=1000;i<=2000;i++)
	{
		if(is_leap_year(i)==1);
		printf("%d ",i);
	}
	return 0;
}
int is_leap_year(int n)
{
	if(n%100==0&&n%4==0)
		return 1;
	else 
		return 0;
}
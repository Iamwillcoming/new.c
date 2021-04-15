#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void sort(int a3[])
{
	int left=0;
	int i=0;
	int tmp=0;
	for(i=0;i<5;i++)//5是数组a3的数组元素个数；这里说明数组排序需要五次的全比较
	{
		for(left=0;left<5;left++)//数组中数值的大小比较
		{
			if(a3[left]>a3[left+1])
			{
			  tmp=a3[left];
			   a3[left]=a3[left+1];
			    a3[left+1]=tmp;
			}
		}
	}
}
int main()
{
	int i=0;
	int n=0;
	int j=0;
	int a1[]={1,3,5};
	int a2[]={2,4,6};
	int a3[6]={0};
	//sort(a1,a2);
		while(i<=2)//合并数组a1
		{
			a3[i]=a1[i];
			i++;
		}
		while(2<i&&i<=5)//合并数组a2
		{
			a3[i]=a2[n];
			n++;
			i++;
		}
		sort(a3);//合并数组a1,a2后进行数组排序函数
		for(j=0;j<=5;j++)
		{
			printf("%d\n",a3[j]);//打印数组
		}
	return 0;
}
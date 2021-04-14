#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int i,j;
//	int tmp=0;
//	scanf("%d%d",&i,&j);//如果i=1;j=2 
//	while(j != 0)
//	{
//		tmp=i^j;//相加各个位的值 异操作
//		j=(i&j)<<1;//相加进位的值 与操作
//		i=tmp;
//	}
//	printf("%d\n",i);
//	return 0;
//}
void find(int arr1[],int sz)
{
	int i=0;
	printf("第一个数组\n");
	for(i=0;i<sz;i++)
	{
		if(arr1[i]==7)
		{
			printf("ture\n");
		}
		else if(arr1[i==3])
		{
			printf("false\n");
		}
	}
}
void find1(int arr2[],int sz)
{
	int i=0;
	printf("第二个数组\n");
	for(i=0;i<sz;i++)
	{
		if(arr2[i]==7)
		{
			printf("ture\n");
		}
		else if(arr2[i==3])
		{
			printf("false\n");
		}
	}
}
void find2(int arr3[],int sz)
{
	int i=0;
	printf("第三个数组\n");
	for(i=0;i<sz;i++)
	{
		if(arr3[i]==7)
		{
			printf("ture\n");
		}
		else if(arr3[i==3])
		{
			printf("false\n");
		}
	}
}
void find3(int arr4[],int sz)
{
	int i=0;
	printf("第四个数组\n");
	for(i=0;i<sz;i++)
	{
		if(arr4[i]==7)
		{
			printf("ture\n");
		}
		else if(arr4[i==3])
		{
			printf("\nfalse");
		}
	}
}
int main()
{
	int arr1[]={1,2,8,9};
	int arr2[]={2,4,9,12};
	int arr3[]={4,7,10,13};
	int arr4[]={6,8,11,15};
	int sz=4;
	find(arr1,sz);
	find1(arr2,sz);
	find2(arr3,sz);
	find3(arr4,sz);
	return 0;
		
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//找出现次数最多数字
void juge(int arr[],int sz)
{
	int i=0;
	int count=0;
	int j=0;
	int maxcount=0;
	int max=0;
	for(i=0;i<sz-1;i++)
	{
		for(j=0;j<sz-1;j++)
		{
			if(arr[j]==arr[j+1])
			{
				count++;
			}
		}
		if(count>maxcount)
			{
				maxcount=count;
				max=arr[j];
			}
			count=0;
			}
	printf("%d\n",max);
}
int main()
{
	int i=0;
	int j=0;
	int count=0;
	int max=0;
	int maxcount=0;
	int arr[]={1,1,3,4,5,3,3};
	int sz=sizeof(arr)/sizeof(arr[0]);
	juge(arr,sz);
	//for(i=0;i<sz-1;i++)
	//{
	//	for(j=0;j<sz-1;j++)
	//	{
	//		if(arr[j]==arr[j+1])
	//		{
	//			count++;//计算数字出现次数
	//		}
	//		}
	//	if(count>maxcount)//比较不同数字出现次数
	//		{
	//			maxcount=count;
	//			max=arr[j];
	//		}
	//	count=0;//清零，以免累计不同数字出现的次数
	//	}
	//printf("%d\n",max);
	return 0;
	}

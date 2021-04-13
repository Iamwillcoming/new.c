#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i=0;
	int j=0;
	int t=0;
	for(i=0;i<sz-1;i++)
	{
		
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}
int main()
{
	int i=0;
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}

//void sort(int arr[],int len)
//{
//	int i,j,t;
//	for(i=0;i<len;i++)
//	{
//		for(j=0;j<len-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				t=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=t;
//			}
//		}
//	}
//}
//void main()
//{
//	int arr[10]={-999,2,3,77,12,88,0,-8,99,100};
//	int i=0;
//	sort(arr,10);
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

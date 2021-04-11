#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//void bubble_sort(int arr[],int sz)//冒泡排序函数
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<sz;i++)//比较循环次数
//	{
//		for(j=0;j<sz-1;j++)//各元素对比
//		{
//			if(arr[j]<arr[j+1])//判断数值大小
//			{
//				int tmp=arr[j];//数值交换
//			arr[j]=arr[j+1];
//			arr[j+1]=tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i=0;
//	int arr[]={88,87,75,76,90};//乱序数组
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算数组元素
//	bubble_sort(arr,sz);//定义冒泡函数
//	for(i=0;i<sz;i++)//打印数组
//	{
//		printf("%d ",arr[i]);
//	}
//
//}

//判断不超过30名同学的成绩排序
#define N 30 //定义全局变量，不超过30名
void disp(int a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void sort(int a[],int n)
{
	int i=0;
	int j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j] >a[j+1])
			{
				int tmp=a[j];
				a[j] = a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
int main()
{
	int i=0;
	int n=0;//学生人数
	int a[N];
	do
	{
		printf("请输入实际学生人数>: ");
		scanf("%d",&n);
		if(n <=0 || n >= 30)
		{
			printf("输入错误！\n");
		}
		else
			break;
	}while(1);//循环
	printf("请输入%d名学生的成绩： \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n 排序前的成绩如下>:");
	disp(a,n);//输出数组a中前n个元素的值
	printf("\n 排序后成绩如下>:");
	sort(a,n);//对数组a中前n个元素的值进行从小到大的排序
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}



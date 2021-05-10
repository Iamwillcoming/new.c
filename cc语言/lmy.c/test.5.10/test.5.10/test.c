#define _CRT_SECURE_NO_WARNINGS 1

//把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
//输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
//NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。

#include <stdio.h>

int min(int a[], int ret)
{
	int i=0;
	int tmp;//tmp作为中间媒介
	int j=0;
	int min=0;
	if(a[ret]==(int)NULL)
		return 0;
	for(i=0;i<ret;i++)//数组需要比的次数
	{
		for(j=0;j<ret-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}

		}
		min=a[j+ret-1];
	}
	for(i=0;i<ret;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return min;
}
int main()
{
	int a[]={0};
	int n=0;
	int i=0;
	int ret=0;
	int c=0;
	printf("想要输入几个值：\n");
	scanf("%d",&n);
	printf("请输入%d个值：",n);
	for(i=0;i<n;i++)
	{
		printf("继续输入>: ");
		scanf("%d",&a[i]);
	}
	ret=n;
	/*printf("%d\n",ret);*/
	 c=min(a,ret);//自定义一个函数查找旋转数组中最小的那个数
	printf("%d\n",c);
	return 0;

}
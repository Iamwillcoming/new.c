#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int add(int n)//��1+2+3+������+n���溯������
//{
//	int a=0;
//	while(n>=1)
//	{
//		 a = a+n;
//		 n--;
//	}
//	return a;
//}
//int main()
//{
//	int i=0;
//	int b=0;
//	scanf("%d",&i);
//	 b=add(i);
//	printf("%d\n",b);
//	return 0;
//}
//int mult(int n)
//{
//	if(n<=1)
//	{
//		return 1;
//	} 
//	return n+mult(n-1);
//}
//int main()//��1+2+3+������+n �ݹ鷽��
//{
//	int i=0;
//	int b=0;
//	scanf("%d",&i);
//	b= mult(i);
//	printf("%d\n",b);
//	return 0;
//}
//#include <stdlib.h>
//int mult(int num,int sum)//��1+2+3+������+n �ݹ鷽�������ùؼ��֣�
//{
//	num&&(num-1,sum);//&&�Ķ�·ԭ���������жϵĹ��ܣ�
//	return sum+=num+(num-1);//�ݹ�
//}
//int main()
//{
//	int i=0;
//	int b=0;
//	//int sum=1;
//	int sum=0;
//	scanf("%d",&i);
//	b= mult(i,sum);
//	printf("%d\n",b);
//	system("pause");
//	return 0;
//}

void sort(int arr[],int n)
{
	int left=0;
	int right=n-1;
	while(right>left)
	{
		int tmp=0;
		tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		right--;
		left++;
		
	}
}
int main()//��ת�����е���
{
	int i=0;
	int arr[]={3,4,5,1,2,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	sort(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
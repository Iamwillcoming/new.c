#define _CRT_SECURE_NO_WARNINGS 1

//��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
//����һ���ǵݼ�����������һ����ת�������ת�������СԪ�ء�
//NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��

#include <stdio.h>

int min(int a[], int ret)
{
	int i=0;
	int tmp;//tmp��Ϊ�м�ý��
	int j=0;
	int min=0;
	if(a[ret]==(int)NULL)
		return 0;
	for(i=0;i<ret;i++)//������Ҫ�ȵĴ���
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
	printf("��Ҫ���뼸��ֵ��\n");
	scanf("%d",&n);
	printf("������%d��ֵ��",n);
	for(i=0;i<n;i++)
	{
		printf("��������>: ");
		scanf("%d",&a[i]);
	}
	ret=n;
	/*printf("%d\n",ret);*/
	 c=min(a,ret);//�Զ���һ������������ת��������С���Ǹ���
	printf("%d\n",c);
	return 0;

}
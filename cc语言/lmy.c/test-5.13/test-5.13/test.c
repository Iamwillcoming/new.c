#define _CRT_SECURE_NO_WARNINGS 1


//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж������������Ⱥ����ͬ�㲻ͬ�Ľ������
//  ̨��     ����
//   1		1
//   2		2
//   3       3
//   4       5
//   ��      ��
//	��
//	��
#include <stdio.h>
int jump(int number)
{
    int num = 0;
	int i=3;
    int a[100];
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    for(i = 3; i <= number; i++)
    {
        a[i]  = a[i - 1] + a[i - 2];
    }
    return a[number];
}
int main()
{
	int ret=0;
	int n;
	printf("��������Ҫ������̨��>:");
	scanf("%d",&n);
	ret=jump(n);
	printf("%d\n",ret);
	return 0;
}



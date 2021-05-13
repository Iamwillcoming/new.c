#define _CRT_SECURE_NO_WARNINGS 1


//一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
//  台阶     跳法
//   1		1
//   2		2
//   3       3
//   4       5
//   ·      ·
//	·
//	·
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
	printf("请输入需要跳几个台阶>:");
	scanf("%d",&n);
	ret=jump(n);
	printf("%d\n",ret);
	return 0;
}



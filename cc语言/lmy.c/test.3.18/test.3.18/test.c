#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	double fa_height,ma_height,boy_height,gril_height;
	printf("请输入父亲的身高：");
	scanf("%lf",&fa_height);
	printf("请输入母亲的身高：");
		scanf("%lf",&ma_height);
		boy_height=(fa_height+ma_height)*0.54;
		gril_height=(fa_height*0.923+ma_height)/2;
		printf("男孩的身高=   %lf\n",boy_height);
		printf("女孩的身高= %lf",gril_height);
		return 0;


}
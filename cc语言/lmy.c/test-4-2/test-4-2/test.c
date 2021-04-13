#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <stdio.h>
#include <stdlib.h>
void game()
{
	int ret=0;
	char board[ROW][COL] = {0};
	InitBoard(board,ROW ,COL);
	DisplayBorad(board,ROW,COL);
	while(1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBorad(board,ROW,COL);
		ret = Iswin(board,ROW,COL);
		if(ret !='C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);
		DisplayBorad(board,ROW,COL);
		ret = Iswin(board,ROW,COL);
		if(ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("玩家赢\n");
	}
	else if( ret=='#')
	{
		printf("电脑赢\n");
	}
	else if(ret='Q')
	{
		printf("平局\n");
	}
	/*else if()*/
}

//测试三子棋游戏
void menu()
{
	printf("***********************\n");
	printf("*****1.play 0.exit****\n");
	printf("*************************\n");

}
void test()
{
	int input=0;
	 srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择:\n");
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}




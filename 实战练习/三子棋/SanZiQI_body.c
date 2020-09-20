#define _CRT_SECURE_NO_WARNINGS 1
#include "SanZiQi_head.h"
#include <stdio.h>


/*
//本游戏用到game.c,game.h

void menu()//菜单
{
	printf("************三子棋对战游戏**************\n");
	printf("***********1.play   0.exit***************\n");
	printf("*****************************************\n");

}
void game()
{
	char ret = 0;//接受字符，用于判断输赢情况
	char board[COW][COL] = { 0 };//建立一个二维数组，形式上看起来就像一个棋盘
	Initboard(board, COW, COL);//初始化棋盘，所有元素空格，看起来就像没有元素一样
	Displayboard(board, COW, COL);//打印棋盘骨架
	while (1)//电脑和玩家循环下棋
	{
		Playerboard(board, COW, COL);//玩家先走
		Displayboard(board, COW, COL);
		//玩家走完立马判断情况
		ret = Iswin(board, COW, COL);//ret用于接受Iswin函数返回输赢的特征字符情况
		if (ret != 'C')//如果ret不是C，说明已经判断出输赢情况了，及立马跳出while，去判断情况
		{
			break;
		}
		Computerboard(board, COW, COL);//电脑再走
		Displayboard(board, COW, COL);
		ret = Iswin(board, COW, COL);
		if (ret != 'C')//如果ret不是C，说明已经判断出输赢情况了，及立马跳出while，去判断情况
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你赢了\n");
	}
	else if (ret =='#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}

}

void test()//开始游戏
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);

}

int main(void)
{
	test();
	return 0;
}
*/

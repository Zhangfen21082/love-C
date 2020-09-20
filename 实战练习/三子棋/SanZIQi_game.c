#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SanZiQi_head.h"
void Initboard(char  board[COW][COL], int cow, int col)//初始化棋盘
{
	for (int i = 0;i < cow;i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[COW][COL], int cow, int col)//打印棋盘骨架（这里涉及到一些概念见笔记）
{
	int i = 0;
	for (i = 0; i < cow; i++)//先打印数据行和行分界线
	{
		int j = 0;
		for (j = 0; j < col; j++)//打印数据行
		{
			printf(" %c ", board[i][j]);//一个数据占三行，“ %c ”
			if (j < col - 1)//每打印一个数据，画一条数据分界线，其中为了美观最后一列的数据的分界线不用打印
				printf("|");
		}
		printf("\n");//打印完一行数据换一行
		if (i < cow - 1)//打印下一行之前，打印一条行分界线，为了美观最后一行的行分界线不用打印
		{
			for (j = 0; j < col; j++)//打印行分界线
			{
				printf("---");
				if (j < col - 1)
					printf("|");//打印行分界线的竖分界线，还是一样最后一列的数据分界线不用打印
			}
			printf("\n");//打印完一行行数据分界线
		}

	}
}
void Playerboard(char board[COW][COL], int cow, int col)//用户输入
{
	int x = 0;
	int y = 0;
	printf("你走:\n");
	while (1)//用户输入的坐标可能会出现非法情况，所以要用循环，一旦出现非法，就再接受
	{
		printf("请输入坐标\n");
		scanf("%d%d", &x, &y);//接受用户坐标
		if (x >= 1 && x <= cow && y >= 1 && y <= col)//这里注意用户是不知道数组下标是从0开始的，所以我们判断的时候要考虑用户认为第一个坐标是1,1
		{
			if (board[x - 1][y - 1] == ' ')//输入合法并且要输入的位置没有东西
			{
				board[x - 1][y - 1] = '*';//那么就用一个“*”表示用户输入
				break;//一旦输入成功跳出循环，就该电脑输入了
			}
			else
			{
				printf("该位置已经被占用了\n");
			}

		}
		else
		{
			printf("输入越界，请重新输入\n");//非法情况
		}
	}

}
void Computerboard(char board[COW][COL], int cow, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)//电脑也可能输入错误，所以也要循环
	{
		x = rand() % cow;//这种方式能保证x取值为0,1,2，
		y = rand() % col;//这种方式能保证y取值为0,1,2，
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//如果正确输入电脑的符号
			break;//输入完成跳出循环
		}

	}
}
int Isfull(char board[COW][COL], int cow, int col)//注意这个函数不用在头文件里声明，因为Iswin被声明了，Isfull在Iswin的本文件前面调用了
{
	int i = 0;
	int j = 0;
	for (i = 0; i < cow; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//一旦找到空，表明棋盘没有满
			}
		}
	}
	return 1;//执行到这说明满了

}
char Iswin(char board[COW][COL], int cow, int col)
{
		//判断输赢时，横三行，竖三列，和主副对角只要元素相同就代表某方赢，返回对应字符即可
	int i = 0;
	int j = 0;
	//判断横三行
	for (i = 0; i < cow; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//需要注意必须加上后面的这个，因为全部为空也是一种相等的情况
		{
			return board[i][1];//这里注意，不管那一行到底是什么字符，只要给我返回就好
		}
	}
	//判断竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	   //以上用于判断电脑还是玩家赢
	   //接下来判断是否平局和继续
	if (1 == Isfull(board, COW, COL))//如果棋盘满了就表示平局
	{
		return 'Q';
	}
	return 'C';//没有赢，也没有平局那就继续


}

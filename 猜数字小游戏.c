#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
/*


//猜数字游戏：
	//1:电脑会产生一个随机数
	//2:用户去猜，电脑会反馈一定情况

void menu()//该函数用于打印菜单
{
	char arr1[] = { "//////1：开始游戏 0：结束游戏/////" };
	char arr2[] = { "################################" };
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right)
	{
		printf("%s", arr2);

		Sleep(100);
		system("cls");
		printf("\n");
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
	}
	printf("%s\n", arr2);

}

void game()//游戏主体
{
	   // 1:产生随机数。使用随机数函数rand（需要stdlib头文件），rand将会产生一个0-RAND_MAX(32767)范围内的数
	   //如果直接使用rand函数，将导致每次生成的随机数一致，所以为了产生真正的随机数，在调用rand函数前需要
	   //调用srand函数，并传入随机起点值，但是这个随机起点值，也必须是随机数，所以我们只需传入时间戳就可以了
	   // 因为时间在不断变化
	int ret = 0;//随机数
	int gest = 0;//接受用户猜的数据
	//srand((unsigned int)time(NULL));//使用time函数获取时间戳，并强制转换为无符号整形，随机起点只需设置一次不要反复调用
	ret = rand()%100+1;//生成随机数，rand产生0-32767的数，过大，所以给他取余+1，就是0-100
	 
		//  2：猜数字。猜数字是一种循环的方式
	  
	
	while (1)
	{
		printf("请说出你的数字\n");
		scanf("%d", &gest);//判定
		if (gest > ret)
		{
			printf("有点大了\n");
		}
		else if (gest < ret)
		{
			printf("有点小了\n");
		}
		else
		{
			printf("恭喜，猜对了\n");
			break;
		}
	}
}
int main(void)
{
	//首先打印菜单，接着若进行游戏，直接调用game函数开始游戏
	srand((unsigned int)time(NULL));//随机起点只需设置一次不要反复调用，放在主函数即可
	int input = 0;//接受用户选项
	printf("猜数字游戏，欢迎参与，选择下方数字开始游戏\n");
	Sleep(1000);
	do//使用do循环，至少显示一次
	{
		menu();//显示菜单
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//如果选择了1则开始游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，将重载\n");
		}
	} while (input);//只要用户输入的是非0的数字，就代表不退出游戏，输入1游戏结束后将会重新开始，输入其他数据，游戏也会重新开始
	return 0;
}

*/
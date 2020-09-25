//#include <stdio.h>
//
//
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("*******************************\n");
//	printf("    1:add        2:sub         \n ");
//	printf("    3:mul        4:div         \n ");
//	printf("            0:exit              \n");
//	printf("*******************************\n");
//
//}
//
//int main()
//{
//	menu();
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*parr[])(int, int) = { 0,&add,&sub,&mul,&div };
//	do
//	{
//		printf("请输入>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf_s("%d%d", &x,&y);
//			int ret = (*parr[input])(x, y);
//			printf("%d\n", ret);
//		}
//		else if (input== 0)
//		{
//			printf("exit");
//		}
//		else
//		{
//			printf("输入错误");
//		}
//	} while (input);
//
//
//}
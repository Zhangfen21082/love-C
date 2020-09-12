//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//do while循环基本结构
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//
//
//}




//一道经典的笔试题
//int main(void)
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("1");
//	}
//	return 0;
//
//}








//for循环变种
//int main(void)
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
//	{
//		printf("hhe\n");
//	}
//	return 0;
//
//}




//for循环变种
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//j值永远为10，只会打印10次
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}



//for循环基本结构
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//
//}





//第二：只接受数字打印，非数字不打印
//int main(void)
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		if ((ch))
//		{
//			if (ch<'0' || ch>'9')
//				continue;
//			putchar(ch);
//		}
//
//	}
//	return 0;
//}



//输入密码确认密码，利用while读走缓冲区字符，使getcha接收到键盘上所输入的字符

/*
int main(void)
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码\n");
	scanf("%s", password);
	while ((ch = getchar())!='\n')//持续清空输入缓冲区的换行符
	{
		;
	}
	printf("请输入(Y/N)\n");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}

}
*/




//循环接受键盘字符
//int main(void)
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);	
//	}
//	return 0;
//}


//while基本结构
//int main(void)
//{
//	int n = 0;
//	while (n <= 10)
//	{
//		++n;
//		if (n == 5)
//			continue;
//		printf("%d\n",n);
//	}
//
//	return 0;
//
//}
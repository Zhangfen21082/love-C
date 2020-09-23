#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//6:使用非递归的方式求第n个斐波那契数
/*
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)//类似于一种指针，算完一次，就让移动下一个位置
	{
		c = a + b;
		a = b;
		b = c;
		n--;//其实就是为了控制要算n-2次
	}
	return c;
}
int main(void)
{
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = fib(n);
	printf("%d", ret);
	return 0;

}
*/




















//*:完成1,2,3，4,5....的输入，第一行只输入1，第二行输入2,3 第三输入4,5,6
/*
int main(void)
{
	int n = 0;
	int i = 1;
	int j = 2;
	scanf("%d", &n);
	printf("=========\n");
	while (i <= (n*n + n) / 2)
	{
		printf("%d ", i);
		++i;
		if (i == (j*j - j + 2) / 2)
		{
			printf("\n");
			++j;
		}
	}
}
*/

















//4:使用递归，求第n个斐波那契数

/*
int count = 0;//测试
int fib(int n)
{
	if (n == 3)
		count++;//测试
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int get = fib(n);
	printf("%d\n", get);
	printf("%d", count);
	return 0;
}
*/


//3:使用递归的方式求n的阶乘

/*
int test(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * test(n-1);
}

int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int get = test(n);
	printf("%d", get);
	return 0;

}
*/
















//2:不允许使用库函数，使用递归求字符串长度
/*
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main(void)
{
	char arr[] = { "China" };
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}
*/


//1:接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4
/*
void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);



}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
}
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//6:ʹ�÷ǵݹ�ķ�ʽ���n��쳲�������
/*
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)//������һ��ָ�룬����һ�Σ������ƶ���һ��λ��
	{
		c = a + b;
		a = b;
		b = c;
		n--;//��ʵ����Ϊ�˿���Ҫ��n-2��
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




















//*:���1,2,3��4,5....�����룬��һ��ֻ����1���ڶ�������2,3 ��������4,5,6
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

















//4:ʹ�õݹ飬���n��쳲�������

/*
int count = 0;//����
int fib(int n)
{
	if (n == 3)
		count++;//����
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


//3:ʹ�õݹ�ķ�ʽ��n�Ľ׳�

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
















//2:������ʹ�ÿ⺯����ʹ�õݹ����ַ�������
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


//1:����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4
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
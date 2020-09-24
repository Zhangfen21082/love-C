#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>


//****************************************************************
//1:写一个函数判断一个是是不是素数
/*
int judge(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
		{
			return 0;//retur的强度要大于break，break只会跳出循环，而return直接结束函数
			//break;
		}
	}
	//if (i >sqrt(x))//这里也不必要这样的判断了，因为到这里只有一种情况，那就是他是素数
	//{
	//	return 1;
	//}
	return 1;
}
int main(void)
{
	int a = 0;
	printf("请输入一个数\n");
	scanf("%d", &a);
	if (judge(a) == 1)
	{
		printf("%d是素数", a);
	}
	else
	{
		printf("%d不是素数", a);
	}
	return 0;

}

*/

//*****************************************************************
//2:写一个函数判断一个年份是否是闰年
/*
int judge(int x)
{
	if (x % 4 == 0 && x % 100 != 0)
	{
		return 1;
	}
	else if (x % 400 == 0)
	{
		return 1;
	}
	return 0;
}
int main(void)
{
	do
	{
		int year = 0;
		printf("请输入一个年份\n");
		scanf("%d", &year);
		if (judge(year) == 1)
		{
			printf("%d是闰年\n", year);
		}
		else
			printf("%d不是闰年\n", year);
	} while (1);
	return 0;
}

*/

//********************************************************************
//3:写一个函数，实现整形数组的二分查找
/*
int find(int arr1[],int k,int size)
{
	int left = 0;
	int right = size-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k > arr1[mid])
		{
			left = left + 1;
		}
		else if(k < arr1[mid])
			right = right - 1;
		else
		{
			return mid;
			break;
		}
	}
	if (left > right)
		return -1;
}
int main(void)
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	int size = sizeof(arr1) / sizeof(arr1[1]);//所以如果在函数里面计算长度，那么计算的是一个指针，永远为1，我们在外部计算好，传进去
	printf("请输入你要查找的数\n");
	scanf("%d", &k);
	int get = find(arr1,k,size);//需要注意arr1这里传进去的地址，是arr1首元素的地址
	if (get >= 0)
	{
		printf("查找到了下标为%d", get);
	}
	else
		printf("没有找到该元素\n");
}

*/

//*********************************************************************
//4:写一个函数，每调用这个函数一次，num+1
/*
void add(int* x)
{
	*x = *x + 1;
}
int main(void)
{
	int num = 0;
	do
	{
		add(&num);
		printf("%d\n", num);
	} while (1);
	return 0;
}

*/
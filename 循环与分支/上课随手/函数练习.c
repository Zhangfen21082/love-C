#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>


//****************************************************************
//1:дһ�������ж�һ�����ǲ�������
/*
int judge(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0)
		{
			return 0;//retur��ǿ��Ҫ����break��breakֻ������ѭ������returnֱ�ӽ�������
			//break;
		}
	}
	//if (i >sqrt(x))//����Ҳ����Ҫ�������ж��ˣ���Ϊ������ֻ��һ��������Ǿ�����������
	//{
	//	return 1;
	//}
	return 1;
}
int main(void)
{
	int a = 0;
	printf("������һ����\n");
	scanf("%d", &a);
	if (judge(a) == 1)
	{
		printf("%d������", a);
	}
	else
	{
		printf("%d��������", a);
	}
	return 0;

}

*/

//*****************************************************************
//2:дһ�������ж�һ������Ƿ�������
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
		printf("������һ�����\n");
		scanf("%d", &year);
		if (judge(year) == 1)
		{
			printf("%d������\n", year);
		}
		else
			printf("%d��������\n", year);
	} while (1);
	return 0;
}

*/

//********************************************************************
//3:дһ��������ʵ����������Ķ��ֲ���
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
	int size = sizeof(arr1) / sizeof(arr1[1]);//��������ں���������㳤�ȣ���ô�������һ��ָ�룬��ԶΪ1���������ⲿ����ã�����ȥ
	printf("��������Ҫ���ҵ���\n");
	scanf("%d", &k);
	int get = find(arr1,k,size);//��Ҫע��arr1���ﴫ��ȥ�ĵ�ַ����arr1��Ԫ�صĵ�ַ
	if (get >= 0)
	{
		printf("���ҵ����±�Ϊ%d", get);
	}
	else
		printf("û���ҵ���Ԫ��\n");
}

*/

//*********************************************************************
//4:дһ��������ÿ�����������һ�Σ�num+1
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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//数组名究竟是什么
/*
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("分界线\n");
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("分界线\n");
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

	
	return 0;
}
*/

//数组作为函数参数--冒泡排序
/*
void bubble(int arr[], int size)//注意数组传过来是首元素的地址
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size - 1; i++)//此循环，表示每一趟
	{
		int flag = 1;//上一趟排序后，就假设它已经有序了，为防止重复判断，在进行这一次排序前，设flag=1表示已经有序
		for (j = 0; j < size - 1 - i; j++)//此循环，表示这一趟内的元素排序
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//如果能执行到这，就说明这一趟起码不是有序的，那么就把flag设为0
			}
		}
		if (flag == 1)//如果这一趟下来，flag还是1就表示已经是有序了，不用进行以后的排序了，直接跳出即可
		{
			break;
		}
	}
}
int main(void)
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1};
	int size = sizeof(arr) / sizeof(arr[0]);
	bubble(arr,size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/


//二维数组的使用
/*
int main(void)
{
	int arr[3][4] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][j] = i * 4 + j;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
}
*/








//二维数组初始化
/*
int main(void)
{	
	int arr[3][4] = { {1,2},{3,4,5,6},{7,8} };
	return 0;


}

*/













//一维数组的存储方式
/*
int main(void)
{
	int arr[10] = { 0 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("&arr[%d]=%p\n",i, &arr[i]);
	}
	return 0;

}
*/


//字符串的初始化的十分注意
/*
int main(void)
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//������������ʲô
/*
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("�ֽ���\n");
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("�ֽ���\n");
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

	
	return 0;
}
*/

//������Ϊ��������--ð������
/*
void bubble(int arr[], int size)//ע�����鴫��������Ԫ�صĵ�ַ
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size - 1; i++)//��ѭ������ʾÿһ��
	{
		int flag = 1;//��һ������󣬾ͼ������Ѿ������ˣ�Ϊ��ֹ�ظ��жϣ��ڽ�����һ������ǰ����flag=1��ʾ�Ѿ�����
		for (j = 0; j < size - 1 - i; j++)//��ѭ������ʾ��һ���ڵ�Ԫ������
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//�����ִ�е��⣬��˵����һ�����벻������ģ���ô�Ͱ�flag��Ϊ0
			}
		}
		if (flag == 1)//�����һ��������flag����1�ͱ�ʾ�Ѿ��������ˣ����ý����Ժ�������ˣ�ֱ����������
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


//��ά�����ʹ��
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








//��ά�����ʼ��
/*
int main(void)
{	
	int arr[3][4] = { {1,2},{3,4,5,6},{7,8} };
	return 0;


}

*/













//һά����Ĵ洢��ʽ
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


//�ַ����ĳ�ʼ����ʮ��ע��
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
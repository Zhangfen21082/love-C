#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
/*


//��������Ϸ��
	//1:���Ի����һ�������
	//2:�û�ȥ�£����Իᷴ��һ�����

void menu()//�ú������ڴ�ӡ�˵�
{
	char arr1[] = { "//////1����ʼ��Ϸ 0��������Ϸ/////" };
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

void game()//��Ϸ����
{
	   // 1:�����������ʹ�����������rand����Ҫstdlibͷ�ļ�����rand�������һ��0-RAND_MAX(32767)��Χ�ڵ���
	   //���ֱ��ʹ��rand������������ÿ�����ɵ������һ�£�����Ϊ�˲�����������������ڵ���rand����ǰ��Ҫ
	   //����srand������������������ֵ���������������ֵ��Ҳ���������������������ֻ�贫��ʱ����Ϳ�����
	   // ��Ϊʱ���ڲ��ϱ仯
	int ret = 0;//�����
	int gest = 0;//�����û��µ�����
	//srand((unsigned int)time(NULL));//ʹ��time������ȡʱ�������ǿ��ת��Ϊ�޷������Σ�������ֻ������һ�β�Ҫ��������
	ret = rand()%100+1;//�����������rand����0-32767�������������Ը���ȡ��+1������0-100
	 
		//  2�������֡���������һ��ѭ���ķ�ʽ
	  
	
	while (1)
	{
		printf("��˵���������\n");
		scanf("%d", &gest);//�ж�
		if (gest > ret)
		{
			printf("�е����\n");
		}
		else if (gest < ret)
		{
			printf("�е�С��\n");
		}
		else
		{
			printf("��ϲ���¶���\n");
			break;
		}
	}
}
int main(void)
{
	//���ȴ�ӡ�˵���������������Ϸ��ֱ�ӵ���game������ʼ��Ϸ
	srand((unsigned int)time(NULL));//������ֻ������һ�β�Ҫ�������ã���������������
	int input = 0;//�����û�ѡ��
	printf("��������Ϸ����ӭ���룬ѡ���·����ֿ�ʼ��Ϸ\n");
	Sleep(1000);
	do//ʹ��doѭ����������ʾһ��
	{
		menu();//��ʾ�˵�
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//���ѡ����1��ʼ��Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������󣬽�����\n");
		}
	} while (input);//ֻҪ�û�������Ƿ�0�����֣��ʹ����˳���Ϸ������1��Ϸ�����󽫻����¿�ʼ�������������ݣ���ϷҲ�����¿�ʼ
	return 0;
}

*/
#define _CRT_SECURE_NO_WARNINGS 1
#include "SanZiQi_head.h"
#include <stdio.h>


/*
//����Ϸ�õ�game.c,game.h

void menu()//�˵�
{
	printf("************�������ս��Ϸ**************\n");
	printf("***********1.play   0.exit***************\n");
	printf("*****************************************\n");

}
void game()
{
	char ret = 0;//�����ַ��������ж���Ӯ���
	char board[COW][COL] = { 0 };//����һ����ά���飬��ʽ�Ͽ���������һ������
	Initboard(board, COW, COL);//��ʼ�����̣�����Ԫ�ؿո񣬿���������û��Ԫ��һ��
	Displayboard(board, COW, COL);//��ӡ���̹Ǽ�
	while (1)//���Ժ����ѭ������
	{
		Playerboard(board, COW, COL);//�������
		Displayboard(board, COW, COL);
		//������������ж����
		ret = Iswin(board, COW, COL);//ret���ڽ���Iswin����������Ӯ�������ַ����
		if (ret != 'C')//���ret����C��˵���Ѿ��жϳ���Ӯ����ˣ�����������while��ȥ�ж����
		{
			break;
		}
		Computerboard(board, COW, COL);//��������
		Displayboard(board, COW, COL);
		ret = Iswin(board, COW, COL);
		if (ret != 'C')//���ret����C��˵���Ѿ��жϳ���Ӯ����ˣ�����������while��ȥ�ж����
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��Ӯ��\n");
	}
	else if (ret =='#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}

void test()//��ʼ��Ϸ
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);

}

int main(void)
{
	test();
	return 0;
}
*/

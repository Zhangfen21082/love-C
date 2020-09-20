#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SanZiQi_head.h"
void Initboard(char  board[COW][COL], int cow, int col)//��ʼ������
{
	for (int i = 0;i < cow;i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[COW][COL], int cow, int col)//��ӡ���̹Ǽܣ������漰��һЩ������ʼǣ�
{
	int i = 0;
	for (i = 0; i < cow; i++)//�ȴ�ӡ�����к��зֽ���
	{
		int j = 0;
		for (j = 0; j < col; j++)//��ӡ������
		{
			printf(" %c ", board[i][j]);//һ������ռ���У��� %c ��
			if (j < col - 1)//ÿ��ӡһ�����ݣ���һ�����ݷֽ��ߣ�����Ϊ���������һ�е����ݵķֽ��߲��ô�ӡ
				printf("|");
		}
		printf("\n");//��ӡ��һ�����ݻ�һ��
		if (i < cow - 1)//��ӡ��һ��֮ǰ����ӡһ���зֽ��ߣ�Ϊ���������һ�е��зֽ��߲��ô�ӡ
		{
			for (j = 0; j < col; j++)//��ӡ�зֽ���
			{
				printf("---");
				if (j < col - 1)
					printf("|");//��ӡ�зֽ��ߵ����ֽ��ߣ�����һ�����һ�е����ݷֽ��߲��ô�ӡ
			}
			printf("\n");//��ӡ��һ�������ݷֽ���
		}

	}
}
void Playerboard(char board[COW][COL], int cow, int col)//�û�����
{
	int x = 0;
	int y = 0;
	printf("����:\n");
	while (1)//�û������������ܻ���ַǷ����������Ҫ��ѭ����һ�����ַǷ������ٽ���
	{
		printf("����������\n");
		scanf("%d%d", &x, &y);//�����û�����
		if (x >= 1 && x <= cow && y >= 1 && y <= col)//����ע���û��ǲ�֪�������±��Ǵ�0��ʼ�ģ����������жϵ�ʱ��Ҫ�����û���Ϊ��һ��������1,1
		{
			if (board[x - 1][y - 1] == ' ')//����Ϸ�����Ҫ�����λ��û�ж���
			{
				board[x - 1][y - 1] = '*';//��ô����һ����*����ʾ�û�����
				break;//һ������ɹ�����ѭ�����͸õ���������
			}
			else
			{
				printf("��λ���Ѿ���ռ����\n");
			}

		}
		else
		{
			printf("����Խ�磬����������\n");//�Ƿ����
		}
	}

}
void Computerboard(char board[COW][COL], int cow, int col)
{
	int x = 0;
	int y = 0;
	printf("������\n");
	while (1)//����Ҳ���������������ҲҪѭ��
	{
		x = rand() % cow;//���ַ�ʽ�ܱ�֤xȡֵΪ0,1,2��
		y = rand() % col;//���ַ�ʽ�ܱ�֤yȡֵΪ0,1,2��
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//�����ȷ������Եķ���
			break;//�����������ѭ��
		}

	}
}
int Isfull(char board[COW][COL], int cow, int col)//ע���������������ͷ�ļ�����������ΪIswin�������ˣ�Isfull��Iswin�ı��ļ�ǰ�������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < cow; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//һ���ҵ��գ���������û����
			}
		}
	}
	return 1;//ִ�е���˵������

}
char Iswin(char board[COW][COL], int cow, int col)
{
		//�ж���Ӯʱ�������У������У��������Խ�ֻҪԪ����ͬ�ʹ���ĳ��Ӯ�����ض�Ӧ�ַ�����
	int i = 0;
	int j = 0;
	//�жϺ�����
	for (i = 0; i < cow; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//��Ҫע�������Ϻ�����������Ϊȫ��Ϊ��Ҳ��һ����ȵ����
		{
			return board[i][1];//����ע�⣬������һ�е�����ʲô�ַ���ֻҪ���ҷ��ؾͺ�
		}
	}
	//�ж�������
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	   //���������жϵ��Ի������Ӯ
	   //�������ж��Ƿ�ƽ�ֺͼ���
	if (1 == Isfull(board, COW, COL))//����������˾ͱ�ʾƽ��
	{
		return 'Q';
	}
	return 'C';//û��Ӯ��Ҳû��ƽ���Ǿͼ���


}

#define COW 3
#define COL 3//����������̵��к���
void Initboard(char board[COW][COL], int cow, int col);//��ʼ�����̺�������
void Displayboard(char board[COW][COL], int cow, int col);//��ӡ�Ǽܺ�������
void Playerboard(char board[COW][COL], int cow, int col);//�����
void Computerboard(char board[COW][COL], int cow, int col);//������
//Iswin����ֵΪ�ַ��ͣ�ͨ�������ض��ַ����ж���Ӯ���
/*
    1�����ء�*����ʾ���Ӯ
	2�����ء�#����ʾ����Ӯ
	3�����ء�C����ʾ����
	4�����ء�Q����ʾƽ��
*/
char Iswin(char board[COW][COL], int cow, int col);

#define COW 3
#define COL 3//定义这个棋盘的行和列
void Initboard(char board[COW][COL], int cow, int col);//初始化棋盘函数声明
void Displayboard(char board[COW][COL], int cow, int col);//打印骨架函数声明
void Playerboard(char board[COW][COL], int cow, int col);//玩家走
void Computerboard(char board[COW][COL], int cow, int col);//电脑走
//Iswin返回值为字符型，通过返回特定字符来判断输赢情况
/*
    1：返回“*”表示玩家赢
	2：返回“#”表示电脑赢
	3：返回“C”表示继续
	4：返回“Q”表示平局
*/
char Iswin(char board[COW][COL], int cow, int col);

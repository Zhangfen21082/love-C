#include <stdio.h>
//结构体
/*
struct Student
{
	char name[20];
	int age;
	char id[20];
};

int main(void)
{
	struct Student student = { "张星",18,"2017151025" };//类似于int a;
	struct Student* s = &student;//类似于int* p=&a;

	printf("%s\n", s->name);//类似于*p;
	printf("%d\n", s->age);
	printf("%s\n", s->id);
}
*/





/*
//逻辑操作符
int main(void)
{
	int i = 0;
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	i = a++ || ++b ||d++;
	printf("%d%d%d%d", a, b, c, d);


}
*/



/*
//单目操作符
int main(void)
{
	
	int a = 0;
	//按位取反
	//000000000000000000000000000000000
	//上述按位取反得到下面：
	//111111111111111111111111111111111-补码（补码=反码+1）
	//111111111111111111111111111111110-反码（反码等于原码符号位不变，剩余位取反）
	//100000000000000000000000000000001-原码
	//~a=-1
	printf("%d", ~a);
	//////////////////////////////////////////////////////////////////////////////////////


	int a = 11;//要把a变成15
	//a=11的二进制形式：00000000000000000000000000001011
	//要把上式变成15，相当于倒数第二位变成1，那么就可以将按位或上
	//00000000000000000000000000000100，而它又可以看作1左移两位而来
	a = a | (1 << 2);
	printf("%d\n", a);

	//再把15变回11
	//首先a是：						00000000000000000000000000001111
	//目的是：						00000000000000000000000000001011

//a和①与就可以了						11111111111111111111111111111011 ①
//要得到①，就得由②取反而来			00000000000000000000000000000100 ②	
//而②则由1左移两位而来				00000000000000000000000000000001
	a = a & (~(1 << 2));
	printf("%d\n", a);
}
*/




//单目操作符--sizeof
/*
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));

}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}
int main(void)
{
	int arr[10] = {0};
	char ch[10] = { 0 };

	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(ch));//10

	test1(arr);//4
	test2(ch);//4
}
*/




//位操作符
/*
int main(void)
{
	int a = 3;
	int b = 5;
//1:按二进制位“与”：遇0则0,全1则1
//  a=00000000000000000000000000000011
//  b=00000000000000000000000000000101
//	c=00000000000000000000000000000001
	int c1 = a & b;
	printf("%d\n", c1);
//2:按二进制位“或”：遇1则1，全0则0，
//	a=00000000000000000000000000000011
//	b=00000000000000000000000000000101
//	c=00000000000000000000000000000111
	int c2 = a | b;
	printf("%d\n", c2);
//3:按二进制位“异或”：遇1则1，全0则0，全1则0
//	a=00000000000000000000000000000011
//	b=00000000000000000000000000000101
//	c=00000000000000000000000000000110
	int c3 = a ^ b;
	printf("%d\n", c3);
	return 0;
}
*/



//移位操作符
/*
int main(void)
{
	int a = 10;
	int b = a >> 1;
	printf("%d", b);
}
*/


//算数操作符
/*
int main(void)
{
	int a = 5 / 2;
	double b = 5 / 2;
	double c = 5 / 2.0;
	printf("%d\n", a);
	printf("%lf\n", b);
	printf("%lf\n", c);

}
*/

//整形提升

//int main(void)
//{
	//char a = 3;
	//00000000000000000000000000000011
	//00000011（定义的char类型，所以进行截断）
	//char b = 127;
	//00000000000000000000000001111111
	//01111111（定义的char类型，所以进行截断）

	//a和b相加
	//00000000000000000000000000000011
	//00000000000000000000000001111111
	//00000000000000000000000010000010

	//char c = a + b;
	//由于c也定义的是char类型再次截断
	//10000010(整形提升，符号位是负数，所以填充1)
	//11111111111111111111111110000010--补码
	//11111111111111111111111110000001--反码
	//10000000000000000000000001111110--原码
	//printf("%d\n", c);//输出-126

	/*char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c==0xb6000000)
	{
		printf("c");
	}*/

	//char c = 1;
	//printf("%u\n", sizeof(c));
	//printf("%u\n", sizeof(c++));
	//printf("%u\n", sizeof(!c));


//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//do whileѭ�������ṹ
//int main(void)
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
//
//
//}




//һ������ı�����
//int main(void)
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("1");
//	}
//	return 0;
//
//}








//forѭ������
//int main(void)
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
//	{
//		printf("hhe\n");
//	}
//	return 0;
//
//}




//forѭ������
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//jֵ��ԶΪ10��ֻ���ӡ10��
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}



//forѭ�������ṹ
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//
//}





//�ڶ���ֻ�������ִ�ӡ�������ֲ���ӡ
//int main(void)
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		if ((ch))
//		{
//			if (ch<'0' || ch>'9')
//				continue;
//			putchar(ch);
//		}
//
//	}
//	return 0;
//}



//��������ȷ�����룬����while���߻������ַ���ʹgetcha���յ���������������ַ�

/*
int main(void)
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("����������\n");
	scanf("%s", password);
	while ((ch = getchar())!='\n')//����������뻺�����Ļ��з�
	{
		;
	}
	printf("������(Y/N)\n");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}

}
*/




//ѭ�����ܼ����ַ�
//int main(void)
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);	
//	}
//	return 0;
//}


//while�����ṹ
//int main(void)
//{
//	int n = 0;
//	while (n <= 10)
//	{
//		++n;
//		if (n == 5)
//			continue;
//		printf("%d\n",n);
//	}
//
//	return 0;
//
//}
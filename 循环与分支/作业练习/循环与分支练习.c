//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <math.h>

//1:计算n的阶乘。
//
//使用while循环实现
/*
int main(void)
{
	int n = 5;
	int sum=1;
	while (n > 0)
	{
		sum=sum*n;
		n--;
	}
	printf("%d\n",sum);
	return 0;
}
*/
//使用for循环实现
/*
int main()
{
	int i;
	int n = 0;
	int sum=1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	printf("n的阶乘是%d\n", sum);
}
*/
//**************************************************************************

//2:计算 1!+2!+3!+……+10!
//低效率算法
/*
int main()
{
	int i = 0;
	int j = 0;
	int ret = 1;//用于计算每个阶乘
	int sum = 0;//用于将所有的阶乘加起来
	for (i = 1; i <4; i++)
	{
		ret = 1;//这里ret必须在每次计算下一个阶乘前赋值为1，不然ret，存储下来，会累积到下一次阶乘上
		for (j = 1; j < i + 1; j++)
		{
			
			ret = ret * j;
		}
		//这个for循环结束后，ret返回的就是一个阶乘
		sum=sum+ret;
	}
	printf("%d\n", sum);
}
*/
//高效率算法
/*
int main()
{
	int ret = 1;
	int sum = 0;
	int i = 0;
	for (i = 1; i <11; i++)
	{
		ret = ret * i;
		sum = sum + ret;//只需累加即可
	}
	printf("%d", sum);
}
*/


//**********************************************************************************


//3:在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v[], int n); 功能：在v[0]
//<= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x
//遍历查找法(效率低下)
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int k = 0;
	printf("请输入你要在数组查找元素\n");
	scanf("%d", &k);
	int size = sizeof(arr) / sizeof(arr[1]);
	for (i = 0; i < size + 1; i++)
	{
		if (k == arr[i])
		{
			printf("已经找到，数组下表是%d\n", i);
			break;
		}
	}
	if (i-1== size)
		printf("没有这样的元素");
	return	0;
}
*/
//折半查找法/二分查找法
/*
int main()
{	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;//循环变量
	int k = 0;//用于接收用户输入索要查找的元素
	int left = 0;//数组的左端下标
	int right = sizeof(arr) / sizeof(arr[0]);//数组的右端下标
	
	printf("请输入你要查找的元素\n");
	scanf("%d", &k);
	while (left<=right)//对于折半查找，一旦left大于right就说明，他们交叉了，交叉就说明没有相等的可能了
	{
		int mid = (left + right) / 2;//每进入一次循环，要以新的left和right计算新的mid下标
		if (k > arr[mid])//如果要查找的元素在中间元素的右面，那么就把left向右面拨一点，right不动
		{
			left = left + 1;
		}
		else if (k < arr[mid])//如果查找的元素在中间元素的左面，那么就把right向左拨一点，left不动
		{
			right = right - 1;
		}
		else//如果查找的元素和中间元素相等，那么就表示查找到了
		{
			printf("已经找到，对应数组下标是%d\n", mid);
			break;//查找到就跳出循环
		}
	}
	if (left>right)//这里必须判断，一方面while循环结束要么是因为left>right，还有可能是因为找到元素循环退出
	{
		printf("没有找到");
	}
	return 0;

}
*/


//*****************************************************************
//4:编写代码，演示多个字符从两端移动，向中间汇聚
//类似效果：  //welcome
			 //w#####e
			 //we###me
		     //wel#cme
			 //welcome
/*
int main()
{
	char arr1[] = { "Welcome come to China!!!" };
	char arr2[] = { "####### #### ## ########" };
	int left = 0;//用于指示数组左端下标
	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//这里要特别注意，数组最后存储字符串最后有一个'\0'
												 //sizeof(arr1)计算出的是数组元素个数，比实际看到多1个，
												 //如果只减1，此时的right表示的是那个'\0'，所以要减2,才能
												 //才能表示，那个感叹号的下标（建议不采用这种方式）
	int right = strlen(arr1) - 1;//这种方式理解起来比较好

	while (left<=right)//当left>right时，交错，循环结束(left=rigt同时指向一个元素，需要把它拿下来)
	{
		printf(arr2);

		Sleep(1000);//为了使得效果明显，每次打印停留1s
		system("cls");//为了使效果好看，打印完清空，再打印下一次

		printf("\n");
		arr2[left] = arr1[left];//拿下arr1的左端元素给arr2
		arr2[right] = arr1[right];//拿下arr1的右端元素给arr2
		left++;//左端下标朝右走
		right--;//右端下标朝左走
	}
	printf(arr2);//由于“cls”清空完了，所以最后再输入一次，让最后一次输入保留在屏幕上
	return 0;
}
*/



//*******************************************************************************************
//5:编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成功，如果三次均输入错误，则退出程序。
/*
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("【请输入密码】\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//字符串比较不能直接用“==”，需要用strcmp，相等则返回0
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("错误，请重新输入\n");
		}
	}
	if (i == 3)
		printf("登录失败\n");
	return 0;
}
*/
//*****************************************************************************
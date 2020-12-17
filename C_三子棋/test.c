#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char get = '0';

	char  arr[ROW][COL] = { 0 };
	//初始化棋盘
	Initarr(arr, ROW, COL);
	//打印棋盘
	printarr(arr, ROW, COL);
	//玩游戏
	//playgameman(arr, ROW, COL);//玩家
	//playcomputer(arr, ROW, COL);//电脑走
	while (1)
	{

		playgameman(arr, ROW, COL);
		printarr(arr, ROW, COL);
		//判断输赢
		get = chekwin(arr, ROW, COL);
		if (get != 'C')
			break;


		playcomputer(arr, ROW, COL);
		printarr(arr, ROW, COL);
		get = chekwin(arr, ROW, COL);
		if (get != 'C')
			break;
	}

	if (get == '*')
	{
		printf("玩家赢\n");
	}
	if (get == '#')
	{
		printf("电脑赢\n");
	}
	else if (get == 'Q')

	{

		printf("平局\n");

	}

}
void menu()
{
	printf("******************************\n");
	printf("*******    1.玩游戏    *******\n");
	printf("*******    0. 退出     *******\n");
	printf("******************************\n");

}
void test()
{
	int input = 0;

	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{

	test();
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("*******************************\n");
	printf("************1.play*************\n");
	printf("************0.exit*************\n");
	printf("*******************************\n");

}
void game()
{
	char mine[ROWS][COLS];//存放雷的位置
	char show[ROWS][COLS];//排查雷的信息
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//printf("扫雷\n");*/
	//1.布置雷
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//2.排查雷
	FindMine(mine, show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n"); 
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}//...
	} while (input);
}
int main()
{
	test();
	return 0;
}
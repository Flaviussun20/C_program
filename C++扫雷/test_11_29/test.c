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
	char mine[ROWS][COLS];//����׵�λ��
	char show[ROWS][COLS];//�Ų��׵���Ϣ
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//printf("ɨ��\n");*/
	//1.������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//2.�Ų���
	FindMine(mine, show, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("ѡ�����������ѡ��!\n");
			break;
		}//...
	} while (input);
}
int main()
{
	test();
	return 0;
}
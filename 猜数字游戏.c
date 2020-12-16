#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("******* 1.Play ********\n");
	printf("******* 2.Exit ********\n");
	printf("***********************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int num = 0;
	//猜数字
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("恭喜你猜对了\n");
			break;
		}
		else if (num > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜小了\n");
		}
	}
}
int main()
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
			printf("退出游戏");
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
#endif
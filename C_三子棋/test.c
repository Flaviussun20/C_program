#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	char get = '0';

	char  arr[ROW][COL] = { 0 };
	//��ʼ������
	Initarr(arr, ROW, COL);
	//��ӡ����
	printarr(arr, ROW, COL);
	//����Ϸ
	//playgameman(arr, ROW, COL);//���
	//playcomputer(arr, ROW, COL);//������
	while (1)
	{

		playgameman(arr, ROW, COL);
		printarr(arr, ROW, COL);
		//�ж���Ӯ
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
		printf("���Ӯ\n");
	}
	if (get == '#')
	{
		printf("����Ӯ\n");
	}
	else if (get == 'Q')

	{

		printf("ƽ��\n");

	}

}
void menu()
{
	printf("******************************\n");
	printf("*******    1.����Ϸ    *******\n");
	printf("*******    0. �˳�     *******\n");
	printf("******************************\n");

}
void test()
{
	int input = 0;

	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
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
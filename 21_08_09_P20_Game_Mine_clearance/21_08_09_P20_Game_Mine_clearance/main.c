#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("********************************\n");
	printf("**********   1.Play   **********\n");
	printf("**********   0.Exit   **********\n");
	printf("********************************\n");
}
void game()
{
	printf("ɨ�׿�ʼ��\n");
	//�׵���Ϣ�洢��
	//1.���úò��õ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };//11*11
	//��ʶ��������Ϣ
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ������Ϣ
	//DisplayBoard(mine, ROW, COL);//������Ϣ�ǿ������ġ�
	DisplayBoard(show, ROW, COL);
	//�����������ף�
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);//�����׵����
	//����
	FindMine(mine,show,ROW,COL); 
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
			printf("��ʼ��Ϸ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}
	while (input);
}

int main()
{
	test();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ��Ҳ������������ڡ�


#include "game.h"
//��Ϸ��ѡ��˵���ʾ
void menu()
{
	printf("*********************************\n");
	printf("***   1.Play         0.Exit   ***\n");
	printf("*********************************\n");
}
//������Ϸ��ʵ��
void game()
{
	//����-����߳��ĵ�������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//��������
		ComputerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
	}

}
//��Ϸ��ʼ�ķ���
void gamecover()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ��ʼ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}

	} while(input);//input ��Ϊ������棬�ֽ���do��ע��defaultһ�����棡
}
int main()
{
	gamecover();
	return 0;
}
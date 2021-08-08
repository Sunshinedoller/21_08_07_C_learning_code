#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <stdio.h>

void InitBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}

//�ҵ�д��
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (j < col - 1)
//			{
//				printf(" %c |", board[i][j]);
//			}
//			else 
//			{
//				printf(" %c ", board[i][j]);
//			}
//		}
//		printf("\n");
//		if (i < row - 1) 
//		{
//			for (j = 0; j < col; j++)
//			{
//				if (j < col - 1)
//				{
//					printf("---|");
//				}
//				else
//				{
//					printf("---");
//				}
//			}
//		}
//		
//		printf("\n");
//		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//printf("---|---|---\n");
//	}
//��ѧ��д��
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
			printf("|");
		}
		printf("\n");
		if (i < row - 1) 
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������壡\n");
	printf("��������������������壺\n");
	//�ж� x y����ĺϷ���
	while(1)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ((board[x - 1][y - 1]) != ' ')
			{
				printf("���������¹����������������꣡\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("����Ƿ����������������꣡\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������壡\n");
	while (1)
	{

		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}


}
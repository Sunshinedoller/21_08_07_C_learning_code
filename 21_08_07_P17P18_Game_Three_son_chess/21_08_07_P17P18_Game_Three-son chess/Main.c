#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏，也是主函数的入口。


#include "game.h"
//游戏的选择菜单显示
void menu()
{
	printf("*********************************\n");
	printf("***   1.Play         0.Exit   ***\n");
	printf("*********************************\n");
}
//整个游戏的实现
void game()
{
	//数组-存放走出的的棋盘信息
	char board[ROW][COL] = {0};//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board, ROW, COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);
	}

}
//游戏开始的封面
void gamecover()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏开始！\n");
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误！请重新输入！\n");
			break;
		}

	} while(input);//input 不为零就是真，又进入do！注意default一样是真！
}
int main()
{
	gamecover();
	return 0;
}
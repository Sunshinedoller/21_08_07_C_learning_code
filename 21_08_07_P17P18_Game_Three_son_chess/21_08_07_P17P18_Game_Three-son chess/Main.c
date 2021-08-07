#define _CRT_SECURE_NO_WARNINGS 1
//测试三子棋游戏，也是主函数的入口。

#include <stdio.h>

//游戏的选择菜单显示
void menu()
{
	printf("*********************************\n");
	printf("***   1.Play         0.Exit   ***\n");
	printf("*********************************\n");
}

//游戏开始的封面
void GameCover()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏开始！\n");
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
	GameCover();
	return 0;
}
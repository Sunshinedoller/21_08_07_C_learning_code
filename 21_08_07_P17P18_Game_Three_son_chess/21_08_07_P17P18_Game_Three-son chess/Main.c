#define _CRT_SECURE_NO_WARNINGS 1
//������������Ϸ��Ҳ������������ڡ�

#include <stdio.h>

//��Ϸ��ѡ��˵���ʾ
void menu()
{
	printf("*********************************\n");
	printf("***   1.Play         0.Exit   ***\n");
	printf("*********************************\n");
}

//��Ϸ��ʼ�ķ���
void GameCover()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ��ʼ��\n");
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
	GameCover();
	return 0;
}
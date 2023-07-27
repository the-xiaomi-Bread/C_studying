#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

game()
{
	char Hide[ACRS][COLS] = {'0'};
	char Show[ACRS][COLS] = {'0'};
	//数组初识化
	Initialize(Hide, ACRS, COLS, '0');
	Initialize(Show, ACRS, COLS, '*');
	//棋盘打印
	/*Print(Hide, ACR, COL);*/
	Print(Show, ACR, COL);
	//布置雷
	Layout(Hide, ACR, COL);
	/*Print(Hide, ACR, COL);*/
	//扫雷
	Sweep(Hide, Show, ACR, COL);
	
}

menu()
{
	printf("##########################\n");
	printf("###### 1.play 0.exit######\n");
	printf("##########################\n");
}

text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择模式:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: //游戏入口
			game();
			break;
		case 0: printf("退出游戏\n");
			break;
		default:printf("输入异常，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	//程序开始
	text();
	return 0;
}
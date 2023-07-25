#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//三子棋游戏



void game()
{
	int ret = 0;

	char arr[ACR][COL] = { 0 };
	Initialize(arr, ACR, COL);//数组初始化
	board(arr, ACR, COL);//棋盘打印
	while (1)
	{
		Player_action(arr, ACR, COL);//玩家下棋
		board(arr, ACR, COL);//打印棋盘
	    ret = Victory(arr, ACR, COL);//判断胜利
		if (ret != 4)
		{
			break;
	    }
		Computer_action(arr, ACR, COL);//电脑下棋
		board(arr, ACR, COL);//打印棋盘
	    ret = Victory(arr, ACR, COL);//判断胜利
		if (ret != 4)
		{
			break;
		}

	}
	if (ret == 1)
	{
		printf("玩家获胜\n");
	}
	else if (ret == 2)
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}
}

 void meun()
{
	printf("###################\n");
	printf("## 1.play 0. exit##\n");
	printf("###################\n");
}

 void text()
{
	int num = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请选择\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("请重新输入\n");
			break;;
		}
	}
	while (num);
}

int main()
{
	text();//游戏入口
	return 0;
}

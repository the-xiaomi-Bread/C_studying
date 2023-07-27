#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void Initialize(char board[ACRS][COLS], int acrs, int cols, char s)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < acrs; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = s;
		}
	}
}

void Print(char board[ACRS][COLS], int acr, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= acr; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			if (0 == i)
			{
				printf("%d ", j);
			}
			else
			{
				printf("%c ", board[i][j]);
			}
		}
		printf("\n");
	}
}

void Layout(char board[ACRS][ACRS], int acr, int col)
{
	int x = 0;
	int y = 0;
	int count = 10;
	while (count)
	{
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int Judgment( char Hide[ACRS][COLS], int i, int j)
{
	return Hide[i - 1][j] - '0'
		+ Hide[i - 1][j - 1] - '0'
		+ Hide[i][j - 1] - '0'
		+ Hide[i + 1][j - 1] - '0'
		+ Hide[i + 1][j] - '0'
		+ Hide[i + 1][j + 1] - '0'
		+ Hide[i][j + 1] - '0'
		+ Hide[i - 1][j + 1] - '0';
}

int Sweep(char Hide[ACRS][COLS], char Show[ACRS][COLS], int acr, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	int uncover = 0;
	while (1)
	{
		scanf("%d%d", &i, &j);
		//判断雷的个数
		if (i >= 1 && i <= 9 && j >= 1 && j <= 9)
		{
			if (Hide[i][j] == '1')
			{
				//踩雷
				printf("很遗憾，您踩到雷了\n");
				break;
			}
			else
			{
				int count = Judgment(Hide, i, j);
				Show[i][j] = count + '0';
				uncover++;
				Print(Show, ACR, COL);
				if (uncover == 71)
				{
					printf("恭喜您，扫雷成功\n");
					break;
				}
			}
		}
		else
		{
			printf("非法输入，请重新输入");
		}

	}
}

#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void Initialize(char arr[ACR][COL], int acr, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < acr; i++)
	{
		for(j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

//���̴�ӡ
void board(char arr[ACR][COL], int acr, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < acr; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < acr - 1)
		{
			int n = 0;
			for (n = 0; n < col; n++)
			{
				printf("---");
				if (n < col - 1)
				{
					printf("|");
				}
			}
		printf("\n");
		}
	}
}

//�������
void Player_action(char arr[ACR][COL], int acr, int col)
{
	printf("������ж�:>");
	int i = 0;
	int j = 0;
	/*int k = 0;*/
	while (1)
	{
		/*k = 0;*/
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= acr && j >= 1 && j <= col)
		{
			if (arr[i - 1][j - 1] == ' ')
			{
				arr[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("�Ƿ�����\n");
		/*	k = 1;*/
		}
	}
	
}

//��������
void Computer_action(char arr[ACR][COL], int acr, int col)
{
	int ret1 = 0;
	int ret2 = 0;
	printf("���Իغ�\n");
	while (1)
	{
		ret1 = rand() % 3;
		ret2 = rand() % 3;
		if (arr[ret1][ret2] == ' ')
		{
			arr[ret1][ret2] = '#';
			break;
		}
	}
}

//ʤ���ж�
int Victory( char arr[ACR][COL], int acr, int col)
{
	int i = 0;
	int j = 0;
	//���ж�
	for (i = 0; i < acr; i++)
	{
		int a = 1;
		for (j = 0; j < col - 1; j++)
		{
			if (arr[i][j] == arr[i][j + 1] && arr[i][j] != ' ')
			{
				
			}
			else
			{
				a = 0;
			}
		}
		if (a == 1 && arr[i][0] == '*')
		{
			return 1;//��һ�ʤ
		}
		else if (a == 1 && arr[i][0] == '#')
		{
			return 2;//���Ի�ʤ
		}
	}
	//���ж�
	for (i = 0; i < col; i++)
	{
		int p = 1;
		for (j = 0; j < acr - 1; j++)
		{
			if (arr[j][i] == arr[j + 1][i] && arr[j][i] != ' ')
			{
				
			}
			else
			{
				p = 0;
			}
		}
		if (p == 1 && arr[0][i] == '*')
		{
			return 1;//��һ�ʤ
		}
		else if (p == 1 && arr[i][0] == '#')
		{
			return 2;//���Ի�ʤ
		}
	}
	//��б�ж�
	int c = 1;
	for (i = 0; i < acr - 1; i++)
	{
		if (arr[i][i] == arr[i + 1][i + 1] && arr[i][i] != ' ')
		{
			
		}
		else
		{
			c = 0;
		}
	}
	if (c == 1 && arr[0][0] == '*')
	{
		return 1;
	}
	else if (c == 1 && arr[0][0] == '#')
	{
		return 2;
	}
	//��б�ж�
	int b = 1;
	int h = acr - 1;
	for (i = 0; i < acr - 1; i++)
	{
		if (arr[h][i] == arr[h - 1][i + 1] && arr[h][i] != ' ')
		{
			
		}
		else
		{
			b = 0;
		}
		h--;
	}
	if (b == 1 && arr[acr - 1][0] == '*')
	{
		return 1;
	}
	else if (b == 1 && arr[acr - 1][0] == '#')
	{
		return 2;
	}
	//ƽ�ֺͼ����ж�
	int q = 1;
	for (i = 0; i < acr; i++)
	{
		/*int j = 0;*/
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				q = 0;
			}
		}
	}
	if (q == 1)
	{
		return 3;//ƽ��
	}
	else
	{
		return 4;//���������ж�
	}
}
#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

game()
{
	char Hide[ACRS][COLS] = {'0'};
	char Show[ACRS][COLS] = {'0'};
	//�����ʶ��
	Initialize(Hide, ACRS, COLS, '0');
	Initialize(Show, ACRS, COLS, '*');
	//���̴�ӡ
	/*Print(Hide, ACR, COL);*/
	Print(Show, ACR, COL);
	//������
	Layout(Hide, ACR, COL);
	/*Print(Hide, ACR, COL);*/
	//ɨ��
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
		printf("��ѡ��ģʽ:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: //��Ϸ���
			game();
			break;
		case 0: printf("�˳���Ϸ\n");
			break;
		default:printf("�����쳣������������\n");
			break;
		}
	} while (input);
}
int main()
{
	//����ʼ
	text();
	return 0;
}
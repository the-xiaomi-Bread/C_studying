#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//��������Ϸ



void game()
{
	int ret = 0;

	char arr[ACR][COL] = { 0 };
	Initialize(arr, ACR, COL);//�����ʼ��
	board(arr, ACR, COL);//���̴�ӡ
	while (1)
	{
		Player_action(arr, ACR, COL);//�������
		board(arr, ACR, COL);//��ӡ����
	    ret = Victory(arr, ACR, COL);//�ж�ʤ��
		if (ret != 4)
		{
			break;
	    }
		Computer_action(arr, ACR, COL);//��������
		board(arr, ACR, COL);//��ӡ����
	    ret = Victory(arr, ACR, COL);//�ж�ʤ��
		if (ret != 4)
		{
			break;
		}

	}
	if (ret == 1)
	{
		printf("��һ�ʤ\n");
	}
	else if (ret == 2)
	{
		printf("���Ի�ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��\n");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����������\n");
			break;;
		}
	}
	while (num);
}

int main()
{
	text();//��Ϸ���
	return 0;
}

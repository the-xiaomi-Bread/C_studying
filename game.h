#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�����к���
#define ACR 3
#define COL 3

void Initialize(char arr[ACR][COL], int acr, int col);
void board(char arr[ACR][COL],int acr, int col);
void Player_action(char arr[ACR][COL], int acr, int col);
void Computer_action(char arr[ACR][COL], int acr, int col);


//ʤ������
int Victory( char arr[ACR][COL], int acr, int col);
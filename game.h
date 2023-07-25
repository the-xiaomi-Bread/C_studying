#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//定义行和列
#define ACR 3
#define COL 3

void Initialize(char arr[ACR][COL], int acr, int col);
void board(char arr[ACR][COL],int acr, int col);
void Player_action(char arr[ACR][COL], int acr, int col);
void Computer_action(char arr[ACR][COL], int acr, int col);


//胜利条件
int Victory( char arr[ACR][COL], int acr, int col);
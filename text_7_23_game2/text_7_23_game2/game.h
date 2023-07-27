#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ACR 9
#define COL 9
#define ACRS ACR + 2
#define COLS COL + 2

void Initialize(char board[ACRS][COLS], int acrs, int cols, char s);
void Print(char board[ACRS][COLS], int acr, int col);
void Layout(char board[ACRS][ACRS], int acr, int col);

int Sweep(char board[ACRS][COLS], char board1[ACRS][COLS], int acr, int col);
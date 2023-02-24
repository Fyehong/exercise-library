#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdio.h>

#define ROW 9
#define COL 9

#define  ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

//初始化
void Init_board(char arr[ROWS][COLS], int rows, int cols, char set);
//打印
void Display_board(char arr1[ROWS][COLS], int row,int col);

//布置雷
void set_mine(char arr2[ROWS][COLS], int row, int col);

//发现雷
void fine_mine(char mine1[ROWS][COLS], char show2[ROWS][COLS], int row, int col);
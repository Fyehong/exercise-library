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

//��ʼ��
void Init_board(char arr[ROWS][COLS], int rows, int cols, char set);
//��ӡ
void Display_board(char arr1[ROWS][COLS], int row,int col);

//������
void set_mine(char arr2[ROWS][COLS], int row, int col);

//������
void fine_mine(char mine1[ROWS][COLS], char show2[ROWS][COLS], int row, int col);
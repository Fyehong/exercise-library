#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3


//��ʼ������
void InitBoard(char board[ROW][COL], int , int);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int , int);

//������岢��ӡ����
void player_move(char board[ROW][COL], int, int);

//�������岢��ӡ����
void computer_move(char board[ROW][COL], int, int);

//�ж���Ӯ
char is_win(char board[ROW][COL], int, int);
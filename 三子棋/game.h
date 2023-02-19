#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3


//初始化棋盘
void InitBoard(char board[ROW][COL], int , int);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int , int);

//玩家下棋并打印棋盘
void player_move(char board[ROW][COL], int, int);

//电脑下棋并打印棋盘
void computer_move(char board[ROW][COL], int, int);

//判断输赢
char is_win(char board[ROW][COL], int, int);
#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW  3
#define COL  3


void Initarr(char arr[ROW][COL], int row, int col);
void printarr(char arr[ROW][COL], int row, int col);
void playgameman(char arr[ROW][COL], int row, int col);
void playcomputer(char arr[ROW][COL], int row, int col);
char chekwin(char arr[ROW][COL], int row, int col);
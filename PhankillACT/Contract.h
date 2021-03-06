#pragma once

#include "DxLib.h"


//定数定義
const int G = 2;	//重力加速度
const int ScreenSizeX = 640;	//画面の横幅
const int ScreenSizeY = 480;	//画面の縦幅


#define X 15
#define Y 15
#define N 8
#define R 20
#define H 11
#define BLACK 1
#define WHITE -1
#define PLAYER 1
#define CPU -1

const int VectorX[8] = { 0, 1, 1,  1,  0, -1, -1, -1 };
const int VectorY[8] = { 1, 1, 0, -1, -1, -1,  0,  1 };

const int ColorWhite = GetColor(255, 255, 255);
const int ColorBlack = GetColor(0, 0, 0);
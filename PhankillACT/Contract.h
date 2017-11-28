#pragma once

#include "DxLib.h"


//�萔��`
const int G = 2;	//�d�͉����x
const int ScreenSizeX = 640;	//��ʂ̉���
const int ScreenSizeY = 480;	//��ʂ̏c��


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
#pragma once

#include <string>
#include "DxLib.h"
#include "Contract.h"



class Player {
private:
	char keyBuf[256];
	int x, y;
	int xSpeed, ySpeed;
	bool jumpFlag;

public:
	const int xSize = 32;
	const int ySize = 32;
	const int moveSpeed = 3;
	const int jumpSpeed = 7;

	Player();
	void Move();
	void Draw();
};
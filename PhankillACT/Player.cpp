#include "Player.h"



Player::Player(){
	x = 0;
	y = 0;
	xSpeed = 0;
	ySpeed = 0;

	jumpFlag = false;
}

void Player::Move() {

	GetHitKeyStateAll(keyBuf);

	if(keyBuf[KEY_INPUT_LEFT] == 1){
		xSpeed = -moveSpeed;
	}else if(keyBuf[KEY_INPUT_RIGHT] == 1){
		xSpeed = moveSpeed;
	}else{
		xSpeed = 0;
	}

	if(!jumpFlag){
		ySpeed += G;
	}else if(keyBuf[KEY_INPUT_X] == 1){
		ySpeed -= jumpSpeed;
		jumpFlag = false;
	}

	x += xSpeed;
	y += ySpeed;

	if(x < 0){	//左端
		x = 0;
	}
	if(x + xSize > ScreenSizeX){	//右端
		x = ScreenSizeX - xSize;
	}

	if(y + ySize > ScreenSizeY){	//着地
		y = ScreenSizeY - ySize;
		ySpeed = 0;
		jumpFlag = true;
	}
}

void Player::Draw(){

	DrawBox(x, y, x + xSize, y + ySize, ColorWhite, TRUE);

}
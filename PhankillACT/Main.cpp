#include "DxLib.h"
#include "Init.h"
#include "Player.h"


using namespace DxLib;


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	Player player;

	if (Game_Init() == -1) {
		return -1;
	}

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0) {

		player.Move();

		player.Draw();
	}

	DxLib_End();
	return 0;
}
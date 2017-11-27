#include "Init.h"



int Game_Init(void) {

	ChangeWindowMode(TRUE);
	SetWaitVSyncFlag(TRUE);

	if (DxLib_Init() == -1) {
		return -1;
	}

	SetMouseDispFlag(TRUE);
	SetDrawScreen(DX_SCREEN_BACK);

	SetAlwaysRunFlag(TRUE);

	return 0;
}
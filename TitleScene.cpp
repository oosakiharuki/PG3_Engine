#include "TitleScene.h"
#include <Novice.h>

void TitleScene::Initialize(){}

void TitleScene::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Game;
	}
}

void TitleScene::Draw(){
	Novice::ScreenPrintf(300, 300, "Title Scene");
}
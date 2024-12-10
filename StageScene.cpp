#include "StageScene.h"
#include <Novice.h>

StageScene::StageScene(){}

void StageScene::Initialize() {
	inputHamdler_ = new InputHandler();

	inputHamdler_->AssignNoveLeftCommand2PressKeyA();
	inputHamdler_->AssignNoveRightCommand2PressKeyD();

	player_ = new Player();
}

void StageScene::Update() {
	iCommand_ = inputHamdler_->HamdleInput();
	
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}
	player_->Update();
}

void StageScene::Draw() {
	Novice::ScreenPrintf(0, 0, "GameScene");
	player_->Draw();
}




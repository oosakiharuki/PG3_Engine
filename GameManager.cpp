#include "GameManager.h"
#include <Novice.h>

GameManager::GameManager() {

	sceneArr_[Game] = std::make_unique<StageScene>();

	prevSceneNum_ = 0;
	currentSceneNum_ = Game;
	
}


GameManager::~GameManager(){}


int GameManager::Run() {

	// 
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
		
	//if (prevSceneNum_ != currentSceneNum_) {
		sceneArr_[currentSceneNum_]->Initialize();	
	//}

	while (Novice::ProcessMessage() == 0) {
		
		// 
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		Novice::BeginFrame();

		prevSceneNum_ = currentSceneNum_;
		currentSceneNum_ = sceneArr_[currentSceneNum_]->GetScene();


		sceneArr_[currentSceneNum_]->Update();

		sceneArr_[currentSceneNum_]->Draw();

		Novice::EndFrame();



		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	return 0;
}
#pragma once
#include <memory>
#include "IScene.h" 
#include "StageScene.h"

class GameManager{
public:

	GameManager();
	~GameManager();

	int Run();

private:
	std::unique_ptr<IScene> sceneArr_[1];

	int currentSceneNum_;
	int prevSceneNum_;

};
#pragma once
#include <memory>
#include "IScene.h" 
#include "TitleScene.h"
#include "Stage.h"
#include "Clear.h"

class GameManager{
public:

	GameManager();
	~GameManager();

	int Run();

private:
	std::unique_ptr<IScene> sceneArr_[3];

	int currentSceneNum_;
	int prevSceneNum_;

};
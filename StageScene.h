#pragma once
#include "IScene.h"
#include "InputHandler.h"

class StageScene : public IScene {
public:
	StageScene();

	void Initialize() override;
	void Update() override;
	void Draw() override;


private:

	InputHandler* inputHamdler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
};




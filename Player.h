#pragma once
#include<math/Vector2.h>

class Player {
public:

	Player();

	void Initialize();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();

private:
	KamataEngine::Vector2 pos;
	float speed = 2.0f;
	int radius = 50;
};
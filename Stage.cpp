#include "Stage.h"
#include <Novice.h>

using namespace KamataEngine;

void Stage::Initialize() {


	pos = {200,500};
	enemy = {600,100};

	bullet = {-100,-100};

}

void Stage::Update(char* keys, char* preKeys) {

	if (preKeys[DIK_A] && keys[DIK_A]) {
		pos.x -= speed;
	}

	if (preKeys[DIK_D] && keys[DIK_D]) {
		pos.x += speed;
	}

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		bullet = pos;
	}

	bullet.y -= 5;

	Vector2 distance;

	distance.x = enemy.x - bullet.x;
	distance.y = enemy.y - bullet.y;


	if (radiusE *  radiusE + radiusB * radiusB >= distance.x * distance.x + distance.y * distance.y) {
		sceneNum = GameClear;
	}

}

void Stage::Draw() {
	Novice::ScreenPrintf(300, 300, "GAME SCENE");

	Novice::DrawEllipse((int)pos.x, (int)pos.y, radiusP, radiusP, 0.0f, WHITE, kFillModeSolid);
	
	Novice::DrawEllipse((int)enemy.x, (int)enemy.y, radiusE, radiusE, 0.0f, RED, kFillModeSolid);

	Novice::DrawEllipse((int)bullet.x, (int)bullet.y, radiusB, radiusB, 0.0f, GREEN, kFillModeSolid);

}
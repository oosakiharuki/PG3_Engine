#include "Player.h"
#include <Novice.h>

using namespace KamataEngine;

Player::Player(){
	pos = { 100.0f,100.0f };
}

void Player::Initialize(){}

void Player::Update(){}

void Player::Draw(){
	Novice::DrawBox((int)pos.x, (int)pos.y, radius, radius, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight(){
	this->pos.x += this->speed;
}

void Player::MoveLeft(){
	this->pos.x -= this->speed;
}

#include  "IScene.h"

int IScene::sceneNum = Game;

IScene::~IScene(){}

int IScene::GetScene() { return sceneNum; }

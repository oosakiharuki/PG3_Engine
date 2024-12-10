#include  "IScene.h"

int IScene::sceneNum = Title;

IScene::~IScene(){}

int IScene::GetScene() { return sceneNum; }

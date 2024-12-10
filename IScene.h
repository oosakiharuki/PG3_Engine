#pragma once

enum Snece {
	Title,
	Game,
	GameClear
};

class IScene {
public :
	virtual void Initialize() = 0;
	virtual void Update(char* keys, char* preKeys) = 0;
	virtual void Draw() = 0;

	virtual ~IScene();

	int GetScene();

protected:
	static int sceneNum;

};
#pragma once

enum Snece {
	Game,
};

class IScene {
public :
	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	virtual ~IScene();

	int GetScene();

protected:
	static int sceneNum;

};
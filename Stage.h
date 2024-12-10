#include"IScene.h"
#include <math/Vector2.h>


class Stage : public IScene {
public:
	void Initialize() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;

private:
	KamataEngine::Vector2 pos;
	KamataEngine::Vector2 enemy;

	KamataEngine::Vector2 bullet;

	float speed = 10;
	int radiusP = 20;
	int radiusE = 50;
	int radiusB = 10;
};
#include "IScene.h"

class Clear : public IScene {
public:
	void Initialize() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
};
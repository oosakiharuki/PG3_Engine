#include "Command.h"

class InputHandler {
public:
	ICommand* HamdleInput();

	void AssignNoveLeftCommand2PressKeyA();
	void AssignNoveRightCommand2PressKeyD();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;


};
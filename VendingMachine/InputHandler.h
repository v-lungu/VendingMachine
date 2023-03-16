#pragma once
#include "Machine.h"

class InputHandler
{
private:
	Machine machine;

	void addValue();

	void buy();

	void giveChange();

	void quit();

	void viewItems();

public:
	InputHandler(Machine& machine);

	void readInput(char in);
};

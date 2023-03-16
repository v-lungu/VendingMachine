#pragma once

#include <vector>
#include "Item.h"

class Machine
{
private:
	float value;
	std::vector<Item> items;

public:
	Machine();

	void addValue(float amount);

	void vendItem(int code);

	void giveChange();
};
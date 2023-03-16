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

	void giveChange();

	float getValue();

	void change();

	bool inStock(int code);

	const char* buy(int code);

	std::vector<Item>& getItems();
};
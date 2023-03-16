#include "Machine.h"
#include "Item.h"

Machine::Machine()
	: value(0)
{
	items.reserve(5);
	items.emplace_back("Coca-cola", 3.00, 5);
	items.emplace_back("Sprite", 2.50, 5);
	items.emplace_back("Orange Fanta", 1.25, 5);
	items.emplace_back("Roots", 5.00, 5);
	items.emplace_back("Canada Dry", 2.90, 5);
};

void Machine::addValue(float amount)
{
	value += amount;
	return;
}

void Machine::giveChange()
{
	value = 0;
	return;
}

float Machine::getValue()
{
	return value;
}

void Machine::change()
{
	value = 0;
	return;
}

bool Machine::inStock(int code)
{
	return items[code].getAmount() > 0;
}

const char* Machine::buy(int code)
{
	if (inStock(code) && value > items[code].getPrice()) {
		value -= items[code].getPrice();
		items[code].itemSold();
		return items[code].getName();
	}
	else {
		return "no";
	}
}

std::vector<Item>& Machine::getItems()
{
	return items;
}

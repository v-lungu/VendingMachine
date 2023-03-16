#include "Item.h"

Item::Item(const char* name, float price, int amount)
{
	this->code = itemCount;
	this->name = name;
	this->price = price;
	this->amount = amount;
	itemCount++;
};

int Item::getAmount()
{
	return amount;
}

float Item::getPrice()
{
	return price;
}

void Item::itemSold()
{
	this->amount--;
}

#include "Item.h"

using namespace item;

Item(const char* name, float price, int amount)
{
	this->code = itemCount;
	this->name = name;
	this->price = price;
	this->amount = amount;
	itemCount++;
};

int getAmount()
{
	return amount;
}

float getPrice()
{
	return price;
}

void itemSold() 
{
	this->amount--;
}
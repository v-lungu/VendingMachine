#pragma once

class Item
{
private:
	int code;
	const char* name;
	float price;
	int amount;

public:
	inline static int itemCount;

	Item(const char* name, float price, int amount);

	float getPrice();

	const char* getName();

	int getAmount();

	void itemSold();
};
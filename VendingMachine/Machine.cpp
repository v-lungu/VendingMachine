#include "Machine.h"

Machine::Machine()
	: value(0)
{
	items.reserve(5);
	items.emplace_back("Coca-cola", 2.99, 5);
};
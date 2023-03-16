#pragma once
#include "Machine.h"

namespace inputHandler 
{
	class InputHandler
	{
	private:
		Machine machine;

		void addValue();

		void buy();

		void giveChange();

		void quit();

	public:
		InputHandler(Machine& machine);

		void readInput(char in);
	};
}

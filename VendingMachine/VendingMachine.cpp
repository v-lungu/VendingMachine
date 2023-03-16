#include <iostream>
#include "Machine.h"
#include "InputHandler.h"
#include "Item.h"

int main()
{
    std::cout << "Hello, Welcome to the Vending Machine!" << std::endl;
    std::cout << "Here are your options:" << std::endl;
    std::cout << "Add Money: a" << std::endl;
    std::cout << "Buy Something: b" << std::endl;
    std::cout << "Get Change: c" << std::endl;
    std::cout << "View Items: d" << std::endl;
    std::cout << "Quit: q" << std::endl;

    Machine machine;
    InputHandler handler(machine);

    char order; 

    do
    {
        std::cout << "What would you like to do: ";
        std::cin >> order;
        handler.readInput(order);
    } while (order != 'q');

    std::cout << "Thank you for shopping with us today!";
}

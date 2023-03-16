#include <iostream>
#include "InputHandler.h"

InputHandler::InputHandler(Machine& machine)
{
    this->machine = machine;
}

void InputHandler::readInput(char in)
{
    switch (in) {
        case 'a':
            InputHandler::addValue();
            break;
        case 'b':
            InputHandler::buy();
            break;
        case 'c':
            InputHandler::giveChange();
            break;
        case 'q':
            InputHandler::quit();
            break;
        default:
            std::cout << "That wasn't a valid order, give it another go!" << std::endl;
    }
}

void InputHandler::addValue()
{
    float money;
    std::cout << "How much money are you putting in the machine: ";
    std::cin >> money;
    
}

void InputHandler::buy()
{
}

void InputHandler::giveChange()
{
}

void InputHandler::quit()
{

}
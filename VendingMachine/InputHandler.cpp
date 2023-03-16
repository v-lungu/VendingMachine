#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string.h>

#include "InputHandler.h"

InputHandler::InputHandler(Machine& machine)
{
    this->machine = machine;
}

void InputHandler::readInput(char in)
{
    switch (in) {
        case 'a':
            addValue();
            break;
        case 'b':
            buy();
            break;
        case 'c':
            giveChange();
            break;
        case 'd':
            viewItems();
            break;
        case 'q':
            quit();
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

    if (money <= 0) {
        std::cout << "Sorry, not a valid amount of money to put into a vending machine!\n";
    }
    else {
        machine.addValue(money);
        std::cout << "The machine now has $" << std::setprecision(2) << std::fixed << machine.getValue() << " in it.\n";
    }
    return;
}

void InputHandler::buy()
{
    int item;
    std::cout << "Enter the code of the item you would like to buy (0-4): ";
    std::cin >> item;

    if (item > 4 || item < 0) {
        std::cout << "Not a valid code, sorry!";
        return;
    }

    const char* bought = machine.buy(item);
    if (bought != "no") {
        std::cout << "Here is your " << bought << "!\n";
        std::cout << "The machine now has $" << std::setprecision(2) << machine.getValue() << " in it.\n";
    }
    else {
        std::cout << "None left, sorry!\n";
    }
    return;
}

void InputHandler::giveChange()
{
    std::cout << "Here is your change, there was $" << std::setprecision(2) << machine.getValue() << " in the machine!\n";
    machine.change();
    return;
}

void InputHandler::quit()
{
    std::cout << "Thanks, cya never!\n";
    return;
}

void InputHandler::viewItems()
{
    std::vector<Item> items =  machine.getItems();
    std::cout << "Item" << std::setw(20) << "Price\n";
    std::for_each(items.begin(), items.end(), [](Item item) {
        std::cout << item.getName() << std::setw(20 - 1 - strlen(item.getName())) << " $" << std::setprecision(2) << std::fixed << item.getPrice() << std::endl;
        });
}

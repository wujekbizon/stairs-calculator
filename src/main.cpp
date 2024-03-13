#include "./include/Menu.h"
#include "./include/StairDesign.h"
#include "./include/Validator.h"
#include <iomanip>
#include <iostream>

int main()
{
    int choice{0};
    // initialize Menu
    Menu menu;
    menu.displayMainMenu();

    choice = menu.getUserChoice();
    UserInput userInput;
    userInput.getColourMode();

    // Handle user choice using a switch statement

    switch (choice)
    {
    case 1:
        // Handle "Design Staircase" mode (implement functionalities here)
        std::cout << "Design Staircase mode selected." << std::endl;
        StairDesign stairDesign;
        stairDesign.getAllInputs(userInput);
        break;
    case 2:
        // Handle "Create Stairs" mode (implement functionalities here)
        std::cout << "Create Stairs  mode selected." << std::endl;
        break;
    case 3:
        // Handle "About App"
        std::cout << "About App Info " << std::endl;
        break;
    default:
        std::cerr << "Unexpected choice. Please try again." << std::endl;
    }

    return 0;
}
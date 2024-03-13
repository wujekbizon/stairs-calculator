#include "./include/Menu.h"

void Menu::displayMainMenu()
{
    const int menuWidth{30}; // this probably need to noved to MenuSettings class later
    std::cout << std::setfill('=') << std::setw(menuWidth) << "" << std::endl;
    std::cout << "|      Stair Calculator      |" << std::endl;
    std::cout << std::setfill('=') << std::setw(menuWidth) << "" << std::endl;
    std::cout << "|                            |" << std::endl;
    std::cout << "|    1. Design Staircase     |" << std::endl;
    std::cout << "|    2. Create Stairs        |" << std::endl;
    std::cout << "|    3. About App            |" << std::endl;
    std::cout << std::setfill('=') << std::setw(menuWidth) << "" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

int Menu::getUserChoice()
{
    int choice;
    std::cout << "Enter your choice (1, 2 or 3):  ";
    std::cin >> choice;
    std::cout << std::endl;
    while (choice < 1 || choice > 3)
    {
        std::cerr << "Invalid choice. Please enter 1, 2 or 3: ";
        std::cin >> choice;
       }
    return choice;
}
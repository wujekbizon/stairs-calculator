#include "./include/UserInput.h"
#include "./include/Validator.h"

UserInput &UserInput::getStaircaseTypeInput()
{
    // Declare variable to store user's choice
    int choice{0};

    // Prompt user to select staircase type
    std::cout << "Select Staircase Type:\n";
    std::cout << "1. Straight Staircase\n";
    std::cout << "2. Winder Staircase (To be implemented)\n";
    std::cout << "3. Complex Staircase (To be implemented)\n";
    std::cout << "Enter your choice: ";

    // Get user input and validate it
    std::cin >> choice;
    while (choice < 1 || choice > 3)
    {
        std::cerr << "Invalid choice. Please enter 1, 2, or 3: ";
        std::cin >> choice;
    }

    // Set stairType based on user's choice
    switch (choice)
    {
    case 1:
        stairType = StairType::STRAIGHT;
        break;
    case 2:
        stairType = StairType::WINDER;
        break;
    case 3:
        stairType = StairType::COMPLEX;
        break;
    default:
        std::cerr << "Unexpected choice. Please try again." << std::endl;
    }

    return *this;
}

StairType UserInput::getStaircaseType() const
{
    // Return the chosen stair type
    return stairType;
}

UserInput &UserInput::getMountTypeInput()
{
    // Declare variable to store user's choice
    int choice{0};
    // Prompt user to select mount type
    std::cout << "Select Mount Type:\n";
    std::cout << "1. Standard Mount\n";
    std::cout << "2. Flush Mount\n";
    std::cout << "Enter your choice: ";

    // Get user input and validate it
    std::cin >> choice;
    while (choice < 1 || choice > 2)
    {
        std::cerr << "Invalid choice. Please enter 1 or 2: ";
        std::cin >> choice;
    }

    // Set mountType based on user's choice
    switch (choice)
    {
    case 1:
        mountType = MountType::STANDARD;
        break;
    case 2:
        mountType = MountType::FLUSH;
        break;
    default:
        std::cerr << "Unexpected choice. Please try again." << std::endl;
    }
    return *this;
}

MountType UserInput::getMountType() const
{
    // Return the chosen stair mount type
    return mountType;
}

UserInput &UserInput::getTotalRiseInput()
{
    double inputTotalRise{0}; // Temporary variable for validation
    std::cout << "Enter total rise (in millimeters): ";
    std::cin >> inputTotalRise;
    while (!Validator::validatePositiveValue(inputTotalRise))
    {
        std::cout << "Invalid input. Please re-enter, value need to be greater than 0: ";
        std::cin >> inputTotalRise;
    }
    totalRise = inputTotalRise;
    return *this;
}

double UserInput::getTotalRise() const
{
    return totalRise;
}

UserInput &UserInput::getTotalRunInput()
{
    double inputTotalRun{0}; // Temporary variable for validation
    std::cout << "Enter total run (in millimeters): ";
    std::cin >> inputTotalRun;

    while (!Validator::validatePositiveValue(inputTotalRun))
    {
        std::cout << "Invalid input. Please re-enter, value need to be greater than 0: ";
        std::cin >> inputTotalRun;
    }

    totalRun = inputTotalRun;
    return *this;
}

double UserInput::getTotalRun() const
{
    return totalRun;
}

void UserInput::getDimensions() const
{
    // empty
}

void UserInput::toggleColourMode()
{
    // Flips the value of colour using logical NOT operator
    colour = !colour;
}

bool UserInput::getColourMode() const
{
    return colour;
}

UserInput &UserInput::getHeadroomInput()
{
    double inputHeadroom{0}; // Temporary variable for validation
    std::cout << "Enter minimum Head-room required (in millimeters): ";
    std::cin >> inputHeadroom;

    // Validate input (optional)
    while (!Validator::validateInRange(inputHeadroom, 1800.0, 5100.0))
    {
        std::cout << "Invalid input. Please re-enter, value need to be between 1800mm - 5100mm: ";
        std::cin >> inputHeadroom;
    }

    // Assign validated value to headroom
    headroom = inputHeadroom;
    return *this;
}

double UserInput::getHeadroom() const
{
    return headroom;
}

UserInput &UserInput::getStairAngleInput()
{
    double inputStairAngle{0}; // Temporary variable for validation
    // Provide information about expected range (optional)
    std::cout << "Enter stair angle in degrees (range: 20-45 degrees): ";

    std::cin >> inputStairAngle;

    // Validate input(optional)
    while (!Validator::validateInRange(inputStairAngle, 20.0, 45.0))
    {
        std::cout << "Invalid input. Please re-enter, value need to be between 20 - 45: ";
        std::cin >> inputStairAngle;
    }
    stairAngle = inputStairAngle;
    return *this;
}

double UserInput::getStairAngle() const
{
    return stairAngle;
}

UserInput &UserInput::getIdealRunInput()
{
    double inputIdealRun{0}; // Temporary variable for validation
    std::cout << "Enter ideal tread depth (in millimeters): ";
    std::cin >> inputIdealRun;

    // Optional validation (ensure positive value)
    while (!Validator::validatePositiveValue(inputIdealRun))
    {
        std::cout << "Invalid input. Please re-enter, value need to be greater than 0: " << std::endl;
        std::cin >> inputIdealRun;
    }
    idealRun = inputIdealRun;
    return *this;
}

double UserInput::getIdealRun() const
{
    return idealRun;
}

UserInput &UserInput::getOptionalDesignDataInput()
{
    // Collect data for handrail
    std::cout << "Does the stair require a handrail? (y/n): ";
    char handrailInput;
    std::cin >> handrailInput;

    // Validate and set hasHandrail
    hasHandrail = (handrailInput == 'y' || handrailInput == 'Y');
    while (handrailInput != 'y' && handrailInput != 'n' && handrailInput != 'Y' && handrailInput != 'N')
    {
        std::cerr << "Invalid input. Please enter 'y' for yes or 'n' for no: ";
        std::cin >> handrailInput;
    }

    // Discard any leftover newline character
    std::cin.ignore();
    // Collect data for material
    std::cout << "Enter the desired material for the stairs (e.g., wood, metal): ";
    std::getline(std::cin, material); // Use getline to capture entire line
    std::cout << "You chose a " << material << " for you stairs.";
    return *this;
}

std::string UserInput::getMaterial() const
{
    return material;
}

bool UserInput::getHasHandrail() const
{
    return hasHandrail;
}

void UserInput::setHasHandrail(bool &value)
{
    hasHandrail = value;
}

void UserInput::setMaterial(const std::string &value)
{
    material = value;
}

void UserInput::setTotalRise(double &value)
{
    totalRise = value;
}

void UserInput::setTotalRun(double &value)
{
    totalRun = value;
}

void UserInput::setIdealRun(double &value)
{
    idealRun = value;
}

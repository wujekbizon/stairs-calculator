#include "./include/StairDesign.h"

void StairDesign::getAllInputs(UserInput &userInput)
{
    userInput.getStaircaseTypeInput()
        .getMountTypeInput()
        .getTotalRiseInput()
        .getTotalRunInput()
        .getHeadroomInput()
        .getStairAngleInput()
        .getIdealRunInput()
        .getOptionalDesignDataInput();
}

void StairDesign::performDesignCalculations(UserInput &userInput)
{
}
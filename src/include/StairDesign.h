#include "./UserInput.h"

#ifndef STAIRDESIGN_H
#define STAIRDESIGN_H

class StairDesign
{
  public:
    void getAllInputs(UserInput &userInput);
    void performDesignCalculations(UserInput &userInput);
};

#endif
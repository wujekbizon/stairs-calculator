#include <iostream>
#include <regex>
#include <stdexcept>

#ifndef VALIDATOR_H
#define VALIDATOR_H

class Validator
{
  public:
    // Overloaded function to validate a value within a specific range (inclusive)
    static bool validateInRange(double value, double min, double max);

    // Function to validate a positive integer (greater than 0)
    static bool validatePositiveValue(int value);

    // Function to validate a string based on a provided regular expression
    bool validateStringWithRegex(const std::string &value, const std::regex &regex);

    // Example: Validate a string to represent a color code (optional)
    bool validateColorCode(const std::string &value);
};

#endif
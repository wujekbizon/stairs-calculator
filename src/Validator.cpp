#include "./include/Validator.h"

// **Template Function for Range Validation**

// This template function validates if a provided value (of any type `T`) falls within a specified range (inclusive).
// It takes three arguments:
//  - `value`: The value to be validated.
//  - `min`: The minimum allowed value in the range.
//  - `max`: The maximum allowed value in the range.
// It returns `true` if the value is within the range, `false` otherwise.
// If the value is outside the range, it also prints an error message to standard error stream (`std::cerr`).
bool Validator::validateInRange(double value, double min, double max)
{
    if (value < min || value > max)
    {
        std::cerr << "Error: Input value " << value << " is outside the valid range (" << min << "-" << max << ")."
                  << std::endl;
        return false;
    }
    return true;
}

// **emplate Function for Positive Number Validation**

// This function validates if a provided number value is positive.
// It takes one argument:
//  - `value`: The value to be validated.
// It returns `true` if the value is positive, `false` otherwise.
// If the value is not positive, it also prints an error message to standard error stream (`std::cerr`).
bool Validator::validatePositiveValue(int value)
{
    if (value <= 0)
    {
        std::cerr << "Error: Input value " << value << " must be positive." << std::endl;
        return false;
    }
    return true;
}

// **Function for String Validation with Regular Expression**

// This function validates if a provided string matches a specified regular expression.
// It takes two arguments:
//  - `value`: The string value to be validated.
//  - `regex`: A reference to a `std::regex` object representing the validation pattern.
// It returns `true` if the string matches the regular expression, `false` otherwise.
// If the string doesn't match, it also prints an error message to standard error stream (`std::cerr`).
bool Validator::validateStringWithRegex(const std::string &value, const std::regex &regex)
{
    if (!std::regex_match(value, regex))
    {
        std::cerr << "Error: Input value \"" << value << "\" does not match the expected format." << std::endl;
        return false;
    }
    return true;
}

// **Function for Color Code Validation (Not Implemented Yet)**

// This function is intended to validate color codes based on a specific format (e.g., using regular expressions).
// However, the actual implementation for color code validation is not provided yet.
// It takes one argument:
//  - `value`: The string value representing the color code.
// It throws a `std::runtime_error` exception with a message indicating the validation is not implemented.
bool Validator::validateColorCode(const std::string &value)
{
    // Implement your specific color code format validation logic here (e.g., using regex)
    throw std::runtime_error("Color code validation not implemented yet.");
}
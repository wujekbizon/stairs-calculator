#include <cmath>

class MathUtils
{
  public:
    // Basic arithmetic functions
    static double Add(double num1, double num2)
    {
        return num1 + num2;
    }

    static double Subtract(double num1, double num2)
    {
        return num1 - num2;
    }

    static double Multiply(double num1, double num2)
    {
        return num1 * num2;
    }

    // More complex mathematical functions
    static double PythagoreanTheorem(double a, double b)
    {
        return sqrt(pow(a, 2) + pow(b, 2));
    }

    // ... Add other relevant mathematical functions here
};
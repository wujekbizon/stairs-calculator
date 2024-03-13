#include <iomanip>
#include <iostream>
#include <string>

#ifndef USERINPUT_H
#define USERINPUT_H

enum class MountType
{
    STANDARD,
    FLUSH
};

enum class StairType
{
    STRAIGHT,
    WINDER,
    COMPLEX
};

class UserInput
{
  private:
    StairType stairType;
    MountType mountType;
    double totalRise;
    double totalRun;
    double stairAngle;
    bool colour;
    double idealRun;
    bool hasHandrail;
    double headroom;
    std::string material;

  public:
    // Prompts the user to select a staircase type and validates the input.
    // Sets the internal stairType member variable based on the selection.
    UserInput &getStaircaseTypeInput();

    // Returns the currently selected staircase type (StairType enum value).
    StairType getStaircaseType() const;

    // Prompts the user to select a mount type and validates the input.
    // Sets the internal mountType member variable based on the selection.
    UserInput &getMountTypeInput();

    // Returns the currently selected mount type (MountType enum value).
    MountType getMountType() const;

    // Prompts the user to enter the total rise of the project (in millimeters)
    // and validates the input to ensure a positive value.
    UserInput &getTotalRiseInput();

    // Returns the user-provided total rise value (in millimeters).
    double getTotalRise() const;

    // Prompts the user to enter the total run of the project (in millimeters)
    // and validates the input to ensure a positive value.
    UserInput &getTotalRunInput();

    // Returns the user-provided total run value (in millimeters).
    double getTotalRun() const;

    // Prompts the user to enter the ideal tread depth (in millimeters) and stores it.
    // Optionally validates the input to ensure a positive value.
    UserInput &getIdealRunInput();

    // Returns the internally stored ideal run value (in millimeters).
    double getIdealRun() const;

    // Prompts the user to enter the minimum required headroom (in millimeters)
    // and stores it. Optionally validates the input for positive value and
    // adherence to building code standards (likely 1800mm to 5100mm).
    UserInput &getHeadroomInput();

    // Returns the user-provided minimum headroom value (in millimeters).
    double getHeadroom() const;

    // Prompts the user to enter the stair angle in degrees. Optionally provides information
    // about the expected range (typically 20-45 degrees) and validates the input to ensure
    // it falls within this range.
    UserInput &getStairAngleInput();

    // Returns the user-provided stair angle value in degrees.
    double getStairAngle() const;

    // Prompts the user for optional design data related to the stairs.
    // This may include handrail presence and material selection.
    UserInput &getOptionalDesignDataInput();

    // Returns a boolean indicating whether a handrail is required based on user input.
    bool getHasHandrail() const;

    // Returns the user-provided material selection for the stairs.
    // Later we can create a list of materials and use enum
    std::string getMaterial() const;

    // Toggles the color mode by inverting the current color state using
    // the logical NOT operator.
    void toggleColourMode();

    // Returns the current color mode (true for light mode, false for dark mode).
    bool getColourMode() const;

    void getDimensions() const; // empty

    // Sets the total rise of the project (in millimeters) based on the provided unsigned integer value.
    void setTotalRise(double &value);

    // Sets the total run of the project (in millimeters) based on the provided unsigned integer value.
    void setTotalRun(double &value);

    // Sets the ideal tread depth of the project (in millimeters) based on the provided unsigned integer value.
    void setIdealRun(double &value);

    // Sets the handrail presence flag based on the provided boolean value.
    void setHasHandrail(bool &value);

    // Sets the desired material for the stairs based on the provided string reference.
    void setMaterial(const std::string &value);
};

#endif
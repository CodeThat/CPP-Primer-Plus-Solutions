#include <iostream>

using namespace std;

int main()
{
    const int foot = 12;
    const double meter = 0.0254;
    const double kilo = 2.2;
    int feet;
    int inches;
    int pounds;
    int heightInches;
    double weightKG;
    double meters;
    double bmi;

// gather input
    cout << "Enter your height in feet: ";
    cin >> feet;

    cout << "Enter your height in inches: ";
    cin >> inches;

    cout << "Enter your weight in pounds: ";
    cin >> pounds;

// Calculate BMI
    heightInches = feet * foot + inches;
    meters = heightInches * meter;
    weightKG = pounds / kilo;
    bmi = weightKG / (meters * meters);

    cout << "Your Body Mass Index(BMI) is: " << bmi << endl;

    return 0;
}

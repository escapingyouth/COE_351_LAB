#include <iostream>

using namespace std;

int main()
{
    double height{}, weight{};

    cout << "Enter your height in centimeters: ";
    cin >> height;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    double bmi{(weight / ((height / 100) * 2))};

    if (bmi < 18.5)
        cout << "You are underweight" << endl;

    else if (bmi > 18.5 && bmi < 24.9)
        cout << "Your weight is normal" << endl;

    else if (bmi > 25 && bmi < 29.9)
        cout << "You are overweight" << endl;

    else if (bmi > 30 && bmi < 39.9)
        cout << "You are obese" << endl;

    else if (bmi >= 40)
        cout << "You are morbidly obese" << endl;

    return 0;
}
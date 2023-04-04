#include <iostream>

using namespace std;

int sum_of_natural_nums(size_t);
double height_to_feet(double);
unsigned long long fibonacci(unsigned long long n);

// find the sum of the first n natural numbers
int sum_of_natural_nums(size_t n)
{

    int sum{0};

    for (size_t i{1}; i < n + 1; i++)
        sum += i;

    return sum;
}

// convert height from centimeters to feet
double height_to_feet(double centimeters)
{
    return (centimeters / 30.48);
}

// fibonacci sequence
unsigned long long fibonacci(unsigned long long n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2); // recursion
}

int main()
{
    size_t n{};

    cout << "Enter how many natural numbers you want to sum: ";
    cin >> n;

    cout << "\n------------------" << endl;

    cout << sum_of_natural_nums(n) << endl;

    cout << "\n------------------" << endl;

    cout << height_to_feet(167) << endl;

    cout << "\n------------------" << endl;
    cout << fibonacci(30) << endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{

    std::cout << "Hello, world!" << std::endl; // 1

    int random_int{17785}; // 2a

    string greeting{"Welcome to the class!"}; // 2b

    double random_double{-56.1427}; // 2c

    long int long_int{5262778}; // 2d

    int a{5}, b{5}, c{5}; // 2e

    bool random_bool{true}; // 2f

    string random_arr[10]{}; // 2g

    // 3
    int user_age{};
    const int current_year{2023};

    std::cout << "Enter your current age: ";
    cin >> user_age;

    std::cout << "You were born in the year " << current_year - user_age << std::endl;

    int Marks[]{67, 71, 54, 43, 82, 90}; // 4a

    Marks[2] = 75; // 4b

    int AppliedElectricity = Marks[4]; // 4c

    return 0;
}
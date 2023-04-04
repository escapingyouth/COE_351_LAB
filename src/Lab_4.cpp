#include <iostream>

class Quadilateral
{

private:
    int x, y;

public:
    void set_values(int a, int b)
    {
        x = a;
        y = b;
    }

    int area()
    {
        return x * y;
    }
};

int main()
{

    Quadilateral square, rectangle;

    square.set_values(10, 10);
    rectangle.set_values(5, 10);

    std::cout << square.area() << std::endl;
    std::cout << rectangle.area() << std::endl;

    return 0;
}
#include <iostream>

class CPolygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a, height = b;
    }
};

class CRectangle : public CPolygon
{
public:
    int area()
    {
        return width * height;
    }
};
class CTriangle : public CPolygon
{
public:
    int area()
    {
        return (width * height) / 2;
    }
};

int main()
{
    CRectangle rec;
    CTriangle tri;

    rec.set_values(10, 5);
    tri.set_values(10, 5);

    std::cout << "The area of the rectangle is: " << rec.area() << std::endl;

    std::cout << "The area of the triangle is: " << tri.area() << std::endl;

    return 0;
}

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

    virtual int area()
    {
        return 0;
    }
};

class CRectangle : public CPolygon
{

public:
    int area() override
    {
        return width * height;
    }
};
class CTriangle : public CPolygon
{

public:
    int area() override
    {
        return (width * height) / 2;
    }
};

int main()
{
    CRectangle rec;
    CTriangle trgl;
    CPolygon poly;

    CPolygon *ppoly1{&rec};
    CPolygon *ppoly2{&trgl};
    CPolygon *ppoly3{&poly};

    ppoly1->set_values(10, 5);
    ppoly2->set_values(10, 5);
    ppoly3->set_values(10, 5);

    std::cout << "Rectangle area: " << ppoly1->area() << std::endl;
    std::cout << "Triangle area: " << ppoly2->area() << std::endl;
    std::cout << "Polygon area: " << ppoly3->area() << std::endl;
    return 0;
}
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;

    virtual void draw() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    float area()
    {
        return 3.14 * radius * radius;
    }

    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    float area()
    {
        return length * width;
    }

    void draw()
    {
        cout << "Drawing Rectangle" << endl;
    }
};

int main()
{
    Circle c(7);
    Rectangle r(19, 7);

    Shape *s[2];

    s[0] = &c;
    s[1] = &r;

    cout << "Circle:" << endl;
    s[0]->draw();
    cout << "Area = " << s[0]->area() << endl;

    cout << endl;

    cout << "Rectangle:" << endl;
    s[1]->draw();
    cout << "Area = " << s[1]->area() << endl;

    return 0;
}
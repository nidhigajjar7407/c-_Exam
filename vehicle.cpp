#include <iostream>
using namespace std;

class Vehicle
{
private:
    string model;
    float speed;

public:
    void setDetails(string m, float s)
    {
        model = m;
        speed = s;
    }

    string getModel()
    {
        return model;
    }

    float getSpeed()
    {
        return speed;
    }
};

class Car : public Vehicle
{
public:
    float time(float distance)
    {
        return distance / getSpeed();
    }
};

class Bike : public Vehicle
{
public:
    float time(float distance)
    {
        return distance / getSpeed();
    }
};

int main()
{
    Car c;
    Bike b;

    c.setDetails("BMW", 190);
    b.setDetails("Porsche", 170);

    float distance = 120;

    cout << "Car Model: " << c.getModel() << endl;
    cout << "Car Speed: " << c.getSpeed() << " km/h" << endl;
    cout << "Time taken by Car: " << c.time(distance) << " hours" << endl;

    cout << endl;

    cout << "Bike Model: " << b.getModel() << endl;
    cout << "Bike Speed: " << b.getSpeed() << " km/h" << endl;
    cout << "Time taken by Bike: " << b.time(distance) << " hours" << endl;

    return 0;
}
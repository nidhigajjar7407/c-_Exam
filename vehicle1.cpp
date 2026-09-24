#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string model;
    float speed;

public:
    void setDetails(string m, float s)
    {
        model = m;
        speed = s;
    }

    virtual void displayDetails()
    {
        cout << "Model: " << model << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle
{
public:
    void displayDetails()
    {
        cout << "Car Details:" << endl;
        cout << "Model: " << model << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void displayDetails()
    {
        cout << "Bike Details:" << endl;
        cout << "Model: " << model << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

int main()
{
    Car c;
    Bike b;

    c.setDetails("BMW", 190);
    b.setDetails("Porsche", 170);

    Vehicle *v[2];

    v[0] = &c;
    v[1] = &b;

    v[0]->displayDetails();

    cout << endl;

    v[1]->displayDetails();

    return 0;
}
#include <iostream>
using namespace std;

class Sphere
{
public:
    Sphere();
    Sphere(double initialRadius);
    void setRadius(double newRadius);
    double getRadius() const;
    double getDiameter() const;
    double getCircumference() const;
    double getArea() const;
    double getVolume() const;
    void displayStatistics() const;
    ~Sphere();
private:
    double theRadius;
};

Sphere::Sphere() :theRadius(1.0)
{

}

Sphere::Sphere(double initialRadius)
{
    if (initialRadius > 0)
    {
        theRadius = initialRadius;
    }
    else
    {
        theRadius = 1.0;
    }
}

double Sphere::getDiameter() const 
{
    return 2.0 * theRadius;
}


void Sphere::displayStatistics() const
{
    cout << "\nDiameter = " << getDiameter() << endl;
}

Sphere::~Sphere() 
{
    //cout << "\nExit";
}

int main()
{
    Sphere mySphere;
    cout << mySphere.getDiameter();
}
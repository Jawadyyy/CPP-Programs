#include <iostream>

using namespace std;

template <typename T>
class Circle
{
private:
    T PI = 3.14159;
    T radius;

public:
    Circle()
    {
        radius = 0.0;
    }

    Circle(T radius)
    {
        this->radius = radius;
    }

    ~Circle() {}

    void setRadius(T r)
    {
        radius = r;
    }

    T getRadius() const
    {
        return radius;
    }

    T getArea() const
    {
        T area = 0;
        area = PI * (radius * radius);
        return area;
    }

    T getDiameter() const
    {
        T dia = 0;
        dia = radius * 2;
        return dia;
    }

    T getCircumference() const
    {
        T circum = 0;
        circum = 2 * PI * radius;
        return circum;
    }
};

int main()
{
    double rad;
    Circle<double> obj;

    cout << "Enter the radius: " << endl;
    cin >> rad;

    obj.setRadius(rad);

    cout << "The area of the Circle is: " << obj.getArea() << endl;
    cout << "The diameter of the Circle is: " << obj.getDiameter() << endl;
    cout << "The circumference of the Circle is: " << obj.getCircumference() << endl;

    return 0;
}

// Polymorphism

#include <iostream>

using namespace std;

class Car
{
private:
    string name;
    int gen;
    string company;

public:
    void setName(string naam)
    {
        name = naam;
    }

    string getName()
    {
        return name;
    }

    void setGen(int ge)
    {
        gen = ge;
    }

    int getGen()
    {
        return gen;
    }

    void setCompany(string com)
    {
        company = com;
    }

    string getCompany()
    {
        return company;
    }

    Car(string naam, int ge, string com)
    {
        name = naam;
        gen = ge;
        company = com;
    }

    void info()
    {
        cout << "Name: " << name << endl;
        cout << "Generation: " << gen << endl;
        cout << "Company: " << company << endl;
    }

   virtual void on()
    {
        cout << "Starting Car";
    }
};

class Engine: public Car
{
    public:
    string type;

    Engine(string naam, int ge, string com, string ty) :Car(naam,ge,com)
    {
        type=ty;
    }

    void on()
    {
        cout<<"Starting Engine Car ";
    }

};

class Electric:public Car
{
    public:
    string type;

    Electric(string naam, int ge, string com, string ty) :Car(naam,ge,com)
    {
        type=ty;
    }

    void on()
    {
        cout<<"Starting Electric Car ";
    }
};

int main()
{

    Engine en = Engine("Mustang", 5, "Ford", "Engine" );
    Electric el= Electric("Tesla", 1, "Tesla Inc", "Electric");

    Car *c1 = &en;
    Car *c2 = &el;

    c1->on();
    c2->on();

    return 0;
}
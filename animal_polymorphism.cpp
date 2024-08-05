#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected: //Protected Data Members because of Inheritance
    string name;
    int age;
    static int totalanimals; //Static data member which counts the total Number of Animals

public:
    Animal() //Default Constructor
    {
        name = "";
        age = 0;
        ++totalanimals;
    }

    Animal(string name, int age) //Parameterized Constructor
    {
        this->name = name; //Concept of this pointer being used
        this->age = age;
        ++totalanimals;
    }

    ~Animal() //Destructor
    {
        --totalanimals;
    }

    void setName(string name) //Setters concept
    {
        this->name = name;
    }

    string getName() const //Getters concept with const member function to get a constant value
    {
        return name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge() const
    {
        return age;
    }

    static int getTotalAnimals() //Static member function to get Total Animals
    {
        return totalanimals;
    }

    virtual void communicate() const = 0; //Declaring a virtual function for polymorphism 
    virtual void display() const = 0;

    friend ostream &operator<<(ostream &o, const Animal &animal) //Operator overloading to display info
    {
        o << "Name: " << animal.getName() << " || Age: " << animal.getAge();
        return o;
    }
};

class Dog : public Animal //Inheritance for Animal
{
private:
    string color;
    double weight;
    string breed;

public:
    Dog()
    {
        color = "";
        weight = 0;
        breed = "";
    }
    Dog(string name, int age, string color, string breed, double weight) : Animal(name, age)
    {
        this->color = color; //Concept of this pointer being used
        this->breed = breed;
        this->weight = weight;
    }
    ~Dog()
    {
    }

    void communicate() const //Implementation of polymorphism 
    {
        cout << "Dog Says Woof Woof!!!" << endl;
    }

    void display() const //Implementation of polymorphism 
    {
        cout << "Dog - Name: " << getName() << " || Age: " << getAge() << " || Color: " << color << " || Breed: " << breed << " || Weight: " << weight << " kg" << endl;
    }

    friend ostream &operator<<(ostream &os, const Dog &dog) //Operator overloading for this Object
    {
        os << "Dog - " << static_cast<const Animal &>(dog) << " || Color: " << dog.color << " || Breed: " << dog.breed << " || Weight: " << dog.weight << " kg";
        return os;
    }
};

class Cat : public Animal
{
private:
    string color;
    double weight;
    string breed;

public:
    Cat()
    {
        color = "";
        weight = 0;
        breed = "";
    }
    Cat(string name, int age, string color, string breed, double weight) : Animal(name, age)
    {
        this->color = color; //Concept of this pointer being used
        this->breed = breed;
        this->weight = weight;
    }
    ~Cat()
    {
    }

    void communicate() const //Implementation of polymorphism 
    {
        cout << "Cat Says Meow Meow!!!" << endl;
    }

    void display() const //Implementation of polymorphism 
    {
        cout << "Cat - Name: " << getName() << " || Age: " << getAge() << " || Color: " << color << " || Breed: " << breed << " || Weight: " << weight << " kg" << endl;
    }

    friend ostream &operator<<(ostream &os, const Cat &cat) //Operator overloading for this Object
    {
        os << "Cat - " << static_cast<const Animal &>(cat) << " || Color: " << cat.color << " || Breed: " << cat.breed << " || Weight: " << cat.weight << " kg";
        return os;
    }
};

int Animal::totalanimals = 0;

int main()
{

    Dog d = Dog("Martial", 5, "Black", "Golden Retriever", 25.5); //Explicit Constructor
    Cat c = Cat("Garfield", 3, "Yellow", "Persian", 3.6);

    Animal *o1 = &d; //Using pointers to point towards those inherited classes
    Animal *o2 = &c;

    cout << "---------------------------Displaying Dog---------------------------" << endl;

    cout << d << endl; //Using operator overloading to cout the object
    o1->communicate();

    cout << "---------------------------Displaying Cat---------------------------" << endl;

    cout << c << endl; //Using operator overloading to cout the object
    o2->communicate();

    cout << "---------------------------Displaying Total Animals---------------------------" << endl;

    cout << "Total Animals: " << Animal::getTotalAnimals() << endl; //Displaying Total Animals

    return 0;
} 


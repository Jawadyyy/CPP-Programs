#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
        name = "";
        age = 0;
    }

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    ~Person() {}

    virtual void display() = 0;
};

class Player : public Person
{
protected:
    int goalsScored;

public:
    Player()
    {
        goalsScored = 0;
    }

    Player(string name, int age, int goalsScored) : Person(name, age)
    {
        this->goalsScored = goalsScored;
    }

    ~Player() {}

    Player operator+(Player &z)
    {
        Player temp;
        temp.goalsScored = goalsScored + z.goalsScored;
        return temp;
    }

    void display()
    {
        cout << "Name: " << name << " Age: " << age << " Goals Scored: " << goalsScored << endl;
    }

    int getGoals()
    {
        return goalsScored;
    }
};

class Football_Player : public Player
{
protected:
    string clubname;

public:
    Football_Player()
    {
        clubname = "";
    }

    Football_Player(string name, int age, int goalsScored, string clubname) : Player(name, age, goalsScored)
    {
        this->clubname = clubname;
    }

    Football_Player(Football_Player &obj)
    {
        this->name = name;
        this->age = age;
        this->goalsScored = goalsScored;
        this->clubname = clubname;
    }

    ~Football_Player() {}

    void display()
    {
        Player::display();
        cout << "Club Name: " << clubname << endl;
    }
};

double calculateTeamAverage(Player players[], int s)
{
    double totalGoals = 0;
    for (int i = 0; i < s; ++i)
    {
        totalGoals += players[i].getGoals();
    }
    return (totalGoals / s);
}

int main()
{
    int size = 3;

    cout << "--------------------------------Displaying Player Info-----------------------------------" << endl;
    Football_Player p1("Messi", 36, 21, "Barcelona");
    Football_Player p2("Ronaldo", 38, 23, "Real Madrid");
    Player p3 = p1 + p2;
    p1.display();
    p2.display();
    p3.display();
    Football_Player p5;
    p5 = p1;
    cout << "-------------------------------AFTER COPYING VALUES FROM P1 TO P5-------------------------------" << endl;
    p5.display();

    Player team[] = {p1, p2, p3};

    cout << "Team Average Goals Scored: " << calculateTeamAverage(team, size) << endl;

    return 0;
}
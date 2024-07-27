#include <iostream>

using namespace std;

class Car
{
    private:
        string name;
        char direction;
        int position;

    public:
        Car(string naam, char direc, int posi)
        {
            name=naam;
            direction=direc;
            position=posi;
        }

        void turn()
        {
            if(direction=='E')
            {
                direction='S';
            }

            else if(direction=='S')
            {
                direction='W';
            }

            else if(direction=='W')
            {
                direction='N';
            }

            else if(direction=='N')
            {
                direction='E';
            }
        }

        void turn(char direcnew)
        {
            direction=direcnew;
        }

        void move(int dist)
        {
            position=position+dist;
        }

        void info()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Direction: "<<direction<<endl;
            cout<<"Position: "<<position<<endl;
        }


};

int main()
{
    Car obj = Car("Mehran", 'E', 0);

    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Turn right" << endl;
        cout << "2. Turn to specific direction" << endl;
        cout << "3. Move" << endl;
        cout << "4. Show Car Information" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                cout<<"Direction has been turned Right"<<endl;

                obj.turn();
                break;
            }
            case 2:
            {
                char dire;
                cout<<"Enter the new Direction: "<<endl;
                cin>>dire;

                obj.turn(dire);
                break;
            }
            case 3:
            {
                int dist;
                cout<<"Enter the total Distance: "<<endl;
                cin>>dist;

                obj.move(dist);
            }
                
                break;
            case 4:
            {
                obj.info();
                break;
            }
            case 0:
            {
                cout << "Exiting program" << endl;
                break;
            }
            default:
            {
                cout << "Invalid choice Try again!!! " << endl;
            }
        }
    } while (choice != 0);


    return 0;
}
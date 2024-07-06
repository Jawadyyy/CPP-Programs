#include <iostream>
#include <iomanip>

using namespace std;

const int n = 20;

class GARAGE
{
    string name[n];
    int model[n];
    string color[n];
    int count = 0;

public:
    void add();
    void remove();
    void info();
    void garage();
};

void GARAGE::add()
{
    cout << "Enter the name of the Car: " << endl;
    cin >> name[count];

    cout << "Enter the model of the Car: " << endl;
    cin >> model[count];

    cout << "Enter the color of the Car: " << endl;
    cin >> color[count];

    cout << "Car has been successfully added" << endl;

    count++;
}

void GARAGE::remove()
{
    string rem;

    cout << "Enter a Car name to Remove: " << endl;
    cin >> rem;

    for (int i = 0; i < count; i++)
    {
        if (rem == name[i])
        {
            for (int j = 0; j < count - 1; ++j)
            {
                name[i] = name[i + 1];
                model[i] = model[i + 1];
                color[i] = color[i + 1];
            }

            count--;
        }
    }

    cout << "Car has been successfully removed" << endl;
}

void GARAGE::info()
{
    string nem;

    cout << "Tell me the name of the Car to get the info" << endl;
    cin >> nem;

    cout << "----------------Info---------------------" << endl;
    for (int i = 0; i < count; i++)
    {
        if (nem == name[i])
        {
            cout << "Name: " << name[i] << endl;
            cout << "Model: " << model[i] << endl;
            cout << "Color: " << color[i] << endl;
        }
    }
}

void GARAGE::garage()
{

    cout << left << setw(20) << "Name:" << setw(20) << "Model:" << setw(20) << "Color:" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << left << setw(20) << name[i] << setw(20) << model[i] << setw(20) << color[i] << endl;
    }
}

int main()
{
    char op;
    GARAGE obj;

    while (true)
    {

        cout << "----------Garage System----------" << endl;
        cout << "1-Add a Car" << endl;
        cout << "2-Remove a Car" << endl;
        cout << "3-Display Info" << endl;
        cout << "4-Display Garage" << endl;
        cout << "5-Exit Garage" << endl;
        cin >> op;

        switch (op)
        {
        case '1':
        {
            obj.add();

            break;
        }
        case '2':
        {
            obj.remove();
            break;
        }
        case '3':
        {
            obj.info();
            break;
        }
        case '4':
        {
            obj.garage();
            break;
        }
        case '5':
        {
            cout << "Exiting Garage" << endl;
            return 0;
        }
        default:
        {
            cout << "Invalid Selection. Try Again!!" << endl;
            break;
        }
        }
    }

    return 0;
}

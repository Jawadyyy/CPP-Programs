#include <iostream>

using namespace std;

int main()
{
    int rabn;
    int varx, varo = 0, vari = 1;
    int varxi, varoi = 1, varii = 1;
    int varxix, varxixz;
    int j = 0;
    int y = 4;

    cout << "Enter the number of months for the rabbit pairs" << endl;
    cin >> rabn;

    if (rabn > 1)
    {

        cout << "At start: " << endl;
        cout << "Old pair: " << varo << endl;
        cout << "New pair: " << varoi << endl;
        varxixz = varo + varoi;
        cout << "Total pair: " << varxixz << endl;

        cout << "After 2 months: " << endl;
        cout << "Old pair: " << vari << endl;
        cout << "New pair: " << varii << endl;
        varxixz = vari + varii;
        cout << "Total pair: " << varxixz << endl;

        while (y <= rabn) // If rabbit pair is greater than 1
        {

            varxi = varoi + varii;
            varoi = varii;
            varii = varxi; // old pair

            varx = varo + vari;
            varo = vari;
            vari = varx; // new pair

            cout << "After " << y << " months:" << endl;
            cout << "Old pair: " << varxi << endl;
            cout << "New pair: " << varx << endl;
            varxix = varx + varxi; // total pairs
            cout << "Total pair: " << varxix << endl;

            y = y + 2;
            j++;
        }
    }

    else if (rabn == 1) // If rabbit pair is equal to 1
    {
        cout << "At start: " << endl;
        cout << "Old pair: " << varo << endl;
        cout << "New pair: " << varoi << endl;
        varxixz = varo + varoi;
        cout << "Total pair: " << varxixz << endl;
    }

    else
    {
        cout << "Invalid Input" << endl;
    }

    return 0;
}
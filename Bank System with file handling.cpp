#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char c;
    double fundsd, fundsw;
    double bank = 0;

    ifstream inFile("bank.txt");
    if (inFile.is_open())
    {
        inFile >> bank;
        inFile.close();
    }

    cout << "$$$$$$$$ B A N K S Y S T E M $$$$$$$$$$$" << endl;
    cout << "________________________________________ " << endl;
    cout << "                Menu                     " << endl;
    cout << "a) Deposit Funds                          " << endl;
    cout << "b) Withdraw Funds                         " << endl;
    cout << "c) Check your Funds                       " << endl;
    cout << "e) Exit the System                        " << endl;
    cout << "________________________________________ " << endl;

    cout << "Enter your Choice" << endl;
    cin >> c;
    try
    {
        switch (c)
        {
        case 'a':
        {
            cout << "Hello, how much funds would you like to add?" << endl;
            cin >> fundsd;
            bank = bank + fundsd;
            cout << "Your total funds after this deposit are: " << bank << "$" << endl;

            ofstream outFile("bank.txt");
            if (outFile.is_open())
            {
                outFile << bank;
                outFile.close();
            }
            break;
        }
        case 'b':
        {
            cout << "Hello, how much funds would you like to withdraw?" << endl;
            cin >> fundsw;
            bank = bank - fundsw;
            cout << "Your total funds after this withdrawal are: " << bank << "$" << endl;

            ofstream outFile("bank.txt");
            if (outFile.is_open())
            {
                outFile << bank;
                outFile.close();
            }

            break;
        }

        case 'c':
        {
            cout << "Your total funds are: " << endl;
            cout << bank << "$" << endl;
            break;
        }

        case 'e':
        {
            cout << "Exiting the bank system" << endl;
            return 0;
        }
        default:
            throw 101;
            break;
        }
    }

    catch (int n)
    {
        cout << "Invalid Input Error No: " << n << endl;
    }

    return 0;
}
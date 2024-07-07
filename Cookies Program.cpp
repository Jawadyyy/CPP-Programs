#include <iostream>

using namespace std;

int main()
{
    int ctotal, cinbox, boxincontainer, totbox, totcontainer; // Declaring Variables
    int leftcookies, leftbox;                                 // Declaring leftover variables
    char z;

    cout << "Enter the total number of cookies you have: " << endl; // Asking User for Input
    cin >> ctotal;

    cout << "Enter the number of cookies you have in your box: " << endl; // Asking User for Input
    cin >> cinbox;

    cout << "Enter the number of cookie boxes you have in your container: " << endl; // Asking User for Input
    cin >> boxincontainer;

    // Calculations
    totbox = ctotal / cinbox;      // For total boxes
    leftcookies = ctotal % cinbox; // For leftover cookies

    totcontainer = totbox / boxincontainer; // For total Containers
    leftbox = totbox % boxincontainer;      // For leftover boxes

    cout << "You need " << totbox << " boxes and " << totcontainer << " containers to ship the cookies." << endl; // Output

    cout << "Do you want to preview the left over cookies and boxes? Press(Y/N)" << endl; // Asking User if the user wants to check the leftover stuff
    cin >> z;

    if (z == 'Y' || z == 'y')
    {

        cout << "You have " << leftcookies << " leftover cookies." << endl;

        cout << "You have " << leftbox << " leftover boxes." << endl;
    }

    else
    {
        cout << "Ending program" << endl; // Terminations Program
    }

    return 0;
}
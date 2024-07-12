#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int num=n;
    int k = 0;
    int r;
    int rev;

    if (n < 0) {
        return false;
    }

    for (int i = 0; n > 0; i++)
    {
        r = n % 10;
        k = (k * 10) + r;
        n = n / 10;
    }

    rev = k;

    if (rev == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int nom;
    bool pal;

    cout << "Enter a number: ";
    cin >> nom;

    pal = palindrome(nom);

    if (pal == true)
    {
        cout << "It is a Palindrome" << endl;
    }
    else
    {
        cout << "It is not a Palindrome" << endl;
    }

    return 0;
}
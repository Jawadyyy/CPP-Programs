#include <iostream>

using namespace std;

int withrecursion(int, int);

int main()
{
    int varb, vare;
    int value;

    cout << "Give the value of base b" << endl;
    cin >> varb;

    cout << "Give the value of exponent e" << endl;
    cin >> vare;

    value = withrecursion(varb, vare);

    cout << "The result is: " << value << endl;

    return 0;
}

int withrecursion(int varb, int vare)
{

    int cal;

    if (vare == 0)

    {
        return 1;
    }

    else

    {
        cal = varb * withrecursion(varb, vare - 1);

        return cal;
    }
}

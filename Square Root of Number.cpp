#include <iostream>

using namespace std;

int mySqrt(int x)
{
    int result = 0;

    if (x == 0 || x == 1)
    {
        return x;
    }

    for (int i = 1; i <= x; ++i)
    {
        if (i <= x / i)
        {
            result = i;
        }
        else
        {
            break;
        }
    }

    return result;
}

int main()
{
    int n;

    cout << "Enter an number: " << endl;
    cin >> n;

    cout << "The square root of " << n << " is: " << mySqrt(n);
}
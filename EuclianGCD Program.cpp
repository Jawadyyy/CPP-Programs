#include <iostream>

using namespace std;

int euclideanGCD(int, int);

int main()
{
    int m, n;
    int k;

    cout << "Enter Number 1: " << endl;
    cin >> m;

    cout << "Enter Number 2: " << endl;
    cin >> n;

    cout << "Greatest Divisor is " << euclideanGCD(m, n) << endl;

    return 0;
}

int euclideanGCD(int m, int n)
{
    int k = 0;

    cout << "(" << m << "," << n << ")" << endl;

    for (n; n > 0;)
    {

        k = m % n;
        m = n;
        n = k;

        cout << "(" << m << "," << n << ")" << endl;
    }

    return m;
}
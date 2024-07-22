#include <iostream>

using namespace std;

int dec(int, int );

double evaluatePolynomial(double, int);

    int main()
    {
        double x;
        int p; // f0r power
        double varout;

        cout << "Enter the value of x" << endl;
        cin >> x;

        cout << "Enter the power of the number" << endl;
        cin >> p;

        if (p > 0)
        {
            varout = evaluatePolynomial(x, p);
            cout << "Output: " << varout;
        }
        else
        {
            cout << "Power is Smaller than zero " << endl;
        }
    }

    double evaluatePolynomial(double x, int p)
    {
        int c;     // for coefficients
        int s;     // for number of coefficients
        int r = 0; // for calculation
        int j = 0; // for loop

        c = p + 1;

        cout << "Enter " << c << " number of Coefficients" << endl;
        while (j < p)
        {
            cin >> s;
            r = r + (s * dec(x, p - j) );
            j++;
        }
            cin>>s;
            r=r+s;
        return r;
    }

    int dec(int x, int p)
    {
    int k = 1;
    int u=x;
    int pow=0;
    while (p >0)
    {
        k = k * u;
        p--;
    }
    pow=k;
return pow;
    }

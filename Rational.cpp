#include <iostream>

using namespace std;

class Rational
{
private:
    int numerator;
    int denominator;

public:
    Rational(int n, int d)
    {
        int gcd = 1;
        for (int i = 1; i <= n && i <= d; ++i)
        {
            if (n % i == 0 && d % i == 0)
            {
                gcd = i;
            }
        }

        // Simplify the fraction
        n /= gcd;
        d /= gcd;
        numerator = n;
        denominator = d;
    }

    void setnumerator(int nu)
    {
        numerator = nu;
    }
    int getnumerator()
    {
        return numerator;
    }
    void setdenominator(int de)
    {
        denominator = de;
    }
    int getdenominator()
    {
        return denominator;
    }

    void print();
};

Rational addRationalNumber(Rational &r1, Rational &r2)
{
    int n = r1.getnumerator() * r2.getdenominator() + r1.getdenominator() * r2.getnumerator();
    int d = r1.getdenominator() * r2.getdenominator();
    return Rational(n, d);
}

Rational multiRationalNumber(Rational &r1, Rational &r2)
{
    int n = r1.getnumerator() * r2.getnumerator();
    int d = r1.getdenominator() * r2.getdenominator();
    return Rational(n, d);
}

Rational divRationalNumber(Rational &r1, Rational &r2)
{
    int n = r1.getnumerator() * r2.getdenominator();
    int d = r1.getdenominator() * r2.getnumerator();
    return Rational(n, d);
}

void Rational::print()
{
    cout << getnumerator() << "/" << getdenominator();
}

int main()
{
    Rational r1(2, 4);
    Rational r2(3, 4);

    cout<<"The two fractional numbers are: "<<endl;
    r1.print();
    cout<<endl;
    r2.print();
    cout<<endl;

    Rational sum = addRationalNumber(r1, r2); // Adding r1 and r2
    cout << "Sum: ";
    sum.print();
    cout << endl;

    Rational product = multiRationalNumber(r1, r2); // Multiplying r1 and r2
    cout << "Product: ";
    product.print();
    cout << endl;

    Rational quotient = divRationalNumber(r1, r2); // Dividing r1 by r2
    cout << "Quotient: ";
    quotient.print();
    cout << endl;

    return 0;
}
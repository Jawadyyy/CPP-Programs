#include <iostream>

using namespace std;

int main()
{
    int d, varr;

    for (int j = 1000; j > 0; j--) {

        int vars = 0;
        d = j;

        while (d != 0) {
            varr = d % 10;
            vars = vars + (varr * varr * varr);
            d = d / 10;
        }

        if (vars == j) 
        cout << "Is a Armstrong number " << j << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;

void displaysortednumbers(int, int, int);

int main()
{
    int n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    displaysortednumbers(n1, n2, n3);

    return 0;
}

void displaysortednumbers(int a1, int a2, int a3)
{
    cout<<"The sorted numbers are: "<<endl;

    if (a1 <= a2 && a1 <= a3)
    {
        cout << a1;

        if (a2 <= a3)
        {
            cout << " " << a2 << " " << a3;
        }
        else
        {
            cout << " " << a3 << " " << a2;
        }
    }
    else if (a2 <= a1 && a2 <= a3)
    {
        cout << a2;

        if (a1 <= a3)
        {
            cout << " " << a1 << " " << a3;
        }
        else
        {
            cout << " " << a3 << " " << a1;
        }
    }
    else
    {
        cout << a3;

        if (a1 <= a2)
        {
            cout << " " << a1 << " " << a2;
        }
        else
        {
            cout << " " << a2 << " " << a1;
        }
    }

    cout << endl;
}

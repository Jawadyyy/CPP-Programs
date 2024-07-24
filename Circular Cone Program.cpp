#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
    float varc, varo;
    float varx1,varx2,varx;
    float varv1,varv2,varv;
    float const pie = 3.14;
    float varh;
    cout << "Enter the radius of the circular paper : ";
    cin >> varc;

if(varc>0)
{
    varo = pow(3 / 2, 1 / 2) * varc; //Calculating radius of cone

    varx1=2*pie*varo;
    varx2=2*pie*sqrt(2.00/3.00)*varo;
    varx=varx1-varx2; //Calculating the length removed

    varv1=2 * pie *(varo*varo*varo);
    varv2=9 * sqrt(3);
    varv=varv1/varv2; //Calculating the maximized volume
    
    cout << "Removed Sector " << endl;

    cout << setprecision(3) << varx <<endl;

    cout << "Max Volume " << endl;

    cout << setprecision(4) << varv <<endl;

}

else
{
    cout<<"Enter positive radius"<<endl;
}

    return 0;
}
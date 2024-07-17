#include <iostream>

using namespace std;

float fahren(int varc)
{
    float out;

    out=(varc*(9/5)+32);

    return out;
}

float kelvin(int varf)
{
    float res;

    res=(varf-32)*(5/9)+273.15;

    return res;
}

float centi(int vark)
{
    float thi;

    thi=(vark-273.15);

    return thi;

}


int main()
{
    int varc,varf,vark;

    cout<<"Enter Temp in Centrigrade: "<<endl;
    cin>>varc;

    cout<<"Enter Temp in Fahrenheit: "<<endl;
    cin>>varf;

    cout<<"Enter Temp in Kelvin: "<<endl;
    cin>>vark;


    cout<<"Centi to Fahren: "<<fahren(varc)<<endl;

    cout<<"Fahren to Kelvin: "<<kelvin(varf)<<endl;

    cout<<"Kelvin to Centi: "<<centi(vark)<<endl;


return 0;
}
#include<iostream>

using namespace std;

int main()
{
    int amount;
    int a500,b100,c50,d20,e10,f5,g1;
    int A=500;
    int B=100;
    int C=50;
    int D=20;
    int E=10;
    int F=5;
    int G=1;

    cout<<"Enter a number between range of 100 to 100000Rs: "<<endl;
    cin>>amount;

    a500=amount/A; //Calculating the number of currency notes
    amount=amount-(A*a500); //Calculating how many Rs are left

    b100=amount/B;
    amount=amount-(B*b100);

    c50=amount/C;
    amount=amount-(C*c50);

    d20=amount/D;
    amount=amount-(D*d20);

    e10=amount/E;
    amount=amount-(E*e10);

    f5=amount/F;
    amount=amount-(F*f5);

    g1=amount/G;
    amount=amount-(G*g1);

    cout<<"Currency Note   :   Number"<<endl<<"500             :   "<<a500<<endl<<"100             :   "<<b100<<endl<<"50              :   "<<c50<<endl<<"20              :   "<<d20<<endl<<"10              :   "<<e10<<endl<<"5               :   "<<f5<<endl<<"1               :   "<<g1<<endl;
    

return 0;
}

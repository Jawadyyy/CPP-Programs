#include<iostream>

using namespace std;

int main()

{
    unsigned char a;
    unsigned char b;
    unsigned char s;

    int num1;
    int num2;
    unsigned char output;
    cout << "Enter number 1: " << endl;
    cin >> num1;

    cout << "Enter number 2: " << endl;
    cin >> num2;

    a = num1;
    b = num2;
    s = a ^ b; //finding the sum of binaries of those two numbers
    b = (a & b)<<1; //finding the carry 
    a=s;
    output = (b ^ a); //Adding the two new binaries until we get the carry 0 and get the desired output

    s = a ^ b;
    b = (a & b)<<1;
    a=s;
    output = (b ^ a);

    s = a ^ b;
    b = (a & b)<<1;
    a=s;
    output = (b ^ a);

    s = a ^ b;
    b = (a & b)<<1;
    a=s;
    output = (b ^ a);

    s = a ^ b;
    b = (a & b)<<1;
    a=s;
    output = (b ^ a);

    s = a ^ b;
    b = (a & b)<<1;
    a=s;
    output = (b ^ a);

    s = a ^ b;
    b = (a & b)<<1;
    a=s;
    output = (b ^ a);

    s = a ^ b;
    b = (a & b)<<1;
    a=s;
    output = (b ^ a);
 
    cout<<"Output: "<<static_cast<int>(output)<<endl;

return 0;
}

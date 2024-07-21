#include <iostream>
using namespace std;
int main()

{
    int varx,vary;

    cout<<"Enter x"<<endl;
    cin>>varx;

    cout<<"Enter y"<<endl;
    cin>>vary;

if ((varx>0) && (vary>0))
{

    cout<<"Lies in 1st quadrant"<<endl;

}

else if ((varx<0) && (vary>0))
{

    cout<<"Lies in 2nd quadrant"<<endl;

}

else if ((varx<0) && (vary<0))
{

    cout<<"Lies in 3rd quadrant"<<endl;

}

else if ((varx>0) && (vary<0))
{

    cout<<"Lies in 4th quadrant"<<endl;

}

else
{

    cout<<"Lies at Origin"<<endl;

}


return 0;
}

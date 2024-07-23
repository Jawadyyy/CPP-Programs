#include <iostream>

using namespace std;

int main()
{
   long int year,mont,day,hour,min,sec;
   long int rem;

    cout<<"Enter the number of seconds: ";
    cin>>sec;

    year=sec/31536000;
    rem=sec%31536000;

    mont=rem/2592000;
    rem=rem%2592000;

    day=rem/86400;
    rem=rem%86400;

    hour=rem/3600;
    rem=rem%3600;

    min=rem/60;
    rem=rem%60;

    cout<<"years: "<<year<<endl<<"months: "<<mont<<endl<<"day: "<<day<<endl<<"hour: "<<hour<<endl<<"min: "<<min<<"seconds"<<rem<<endl;

    

    

    























return 0;
}

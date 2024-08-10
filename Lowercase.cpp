#include <iostream>

using namespace std;

string toLowerCase(string s)
{
    string temp;

    for(int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            temp += s[i] + 32;
        }
        else
        {
            temp += s[i];
        }
    }    

    return temp;    
}

int main()
{
    string sen;

    cout << "Enter a string to convert it to lower case" << endl;
    getline(cin, sen);

    cout << "The output is: " << toLowerCase(sen) << endl;
    
    return 0;
}

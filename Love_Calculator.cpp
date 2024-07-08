#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    string n1,n2;
    int love;

    cout<<"Enter Name 1: "<<endl;
    getline(cin,n1);

    cout<<"Enter Name 2: "<<endl;
    getline(cin,n2);

    love= 1 + (rand()%100);

    cout<<"The love percentage between: "<<endl;
    cout<<n1<<endl;
    cout<<"+"<<endl;
    cout<<n2<<endl;
    cout << "   *     *   " << endl;
    cout << "  * *   * *  " << endl;
    cout << " *   * *   * " << endl;
    cout << "*     *     *" << endl;
    cout << " *    "<<love<<"   *" << endl;
    cout << "  *       *  " << endl;
    cout << "   *     *   " << endl;
    cout << "    *   *    " << endl;
    cout << "     * *     " << endl;
    cout << "      *      " << endl;

    return 0;
}
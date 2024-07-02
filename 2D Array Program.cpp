#include <iostream>

using namespace std;

void gethighestinrow(int array[3][3]);
void getlowestinrow(int array[3][3]);
void gethighestincol(int array[3][3]);
void getlowestincol(int array[3][3]);
void leftdiagtotal(int array[3][3]);
void rightdiagtotal(int array[3][3]);
void rowsum(int array[3][3]);
void colsum(int array[3][3]);

int main()
{
    int opt;
    char ent;

    int mainarray[3][3] = {{2, 5, 9},
                           {1, 8, 7},
                           {6, 3, 0}};

    cout << "______________________" << endl;
    cout << "|                    |" << endl;
    cout << "| 2D ARRAY CALCULATOR|" << endl;
    cout << "|____________________|" << endl;
    cout << "0)-Display the 2D Array" << endl;
    cout << "1)-Get Highest element in rows" << endl;
    cout << "2)-Get Lowest element in rows" << endl;
    cout << "3)-Get Highest element in columns" << endl;
    cout << "4)-Get Lowest element in columns" << endl;
    cout << "5)-Get sum in left diagonal" << endl;
    cout << "6)-Get sum in right diagonal" << endl;
    cout << "7)-Get sum in rows" << endl;
    cout << "8)-Get sum in columns" << endl;
    cout << "9)-Close Menu" << endl;
    do
    {
        cout<<"Enter your option"<<endl;
        cin >> opt;

        switch (opt)
        {
        case 0:
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << mainarray[i][j] << "    ";
                }
                cout << endl;
            }
            break;
        }
        case 1:
        {
            gethighestinrow(mainarray);
            break;
        }

        case 2:
        {
            getlowestinrow(mainarray);
            break;
        }

        case 3:
        {
            gethighestincol(mainarray);
            break;
        }

        case 4:
        {
            getlowestincol(mainarray);
            break;
        }

        case 5:
        {
            leftdiagtotal(mainarray);
            break;
        }

        case 6:
        {
            rightdiagtotal(mainarray);
            break;
        }

        case 7:
        {
            rowsum(mainarray);
            break;
        }

        case 8:
        {
            colsum(mainarray);
            break;
        }

        case 9:
        {
            return 0;
            break;
        }

        default:
        {
            cout << "Invalid Input" << endl <<endl <<endl;

            cout<<"Do you want to enter again?(Y/y)"<<endl;
            cin>>ent;

            break;
        }
        }
    }while(ent=='Y' || ent=='y');
}

void gethighestinrow(int array[3][3])
{
    int *pt;

    for (int i = 0; i < 3; i++)
    {
        int highest = array[i][0];
        pt = &highest;
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] > highest)
            {
                highest = array[i][j];
            }
        }
        cout << "The highest element in row [" << i << "] is: " << *pt << endl;
        cout << "The address of this element is: " << &pt << endl;
    }
}

void getlowestinrow(int array[3][3])
{
    int *point;

    for (int i = 0; i < 3; i++)
    {
        int lowest = array[i][0];
        point= &lowest;
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] < lowest)
            {
                lowest = array[i][j];
            }
        }
        cout << "The lowest in element row [" << i << "] is: " << *point << endl;
        cout << "The address of this element is: " << &point << endl;
    }
}

void gethighestincol(int array[3][3])
{
     int *pont;

    for (int i = 0; i < 3; i++)
    {
        int highest = array[0][i];
        pont=&highest;
        for (int j = 0; j < 3; j++)
        {
            if (array[j][i] > highest)
            {
                highest = array[j][i];
            }
        }
        cout << "The highest element in column [" << i << "] is: " << *pont << endl;
        cout << "The address of this element is: " << &pont << endl;
    }
}

void getlowestincol(int array[3][3])
{
    int *punt;

    for (int i = 0; i < 3; i++)
    {
        int lowest = array[0][i];
        punt=&lowest;
        for (int j = 0; j < 3; j++)
        {
            if (array[j][i] < lowest)
            {
                lowest = array[j][i];
            }
        }
        cout << "The lowest in element row [" << i << "] is: " << *punt << endl;
        cout << "The address of this element is: " << &punt << endl;
    }
}

void leftdiagtotal(int array[3][3])
{
    int *pt;

    int sum = 0;

    for (int i = 0, j = 0; i < 3; i++, j++)
    {
        if (i == j)
        {
            sum = sum + array[i][j];
        }
    }
    pt=&sum;
    cout << "The sum of left diagonal is: " << *pt << endl;
    cout << "The address of this sum variable is: " << &pt << endl;
}

void rightdiagtotal(int array[3][3])
{
    int *pt;

    int sum = 0;

    for (int i = 0, j = 2; i < 3; i++, j--)
    {
        sum = sum + array[i][j];
    }
    pt=&sum;
    cout << "The sum of left diagonal is: " << *pt << endl;
    cout << "The address of this sum variable is: " << &pt << endl;
}

void rowsum(int array[3][3])
{
    int *pt;

    int sum;

    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + array[i][j];
        }
        pt=&sum;
        cout << "The sum of row [" << i << "] is: " << *pt << endl;
        cout << "The address of this row element is: " << &pt << endl;
    }
}

void colsum(int array[3][3])
{
    int *pt;

    int sum;

    for (int i = 0; i < 3; i++)
    {
        sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum = sum + array[j][i];
        }
        pt=&sum;
        cout << "The sum of row [" << i << "] is: " << *pt << endl;
        cout << "The address of this row element is: " << &pt << endl;
    }
}
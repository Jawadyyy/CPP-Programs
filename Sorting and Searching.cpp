#include <iostream>

using namespace std;

void linearsearch(int array[], int s);
void binarysearch(int array[], int s);
void bubblesort(int array[], int s);
void insertionsort(int array[], int s);

int main()
{
    int size, op;

    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int ray[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of aray: " << endl;
        cin >> ray[i];
    }
    cout << endl;

    while(true)
    {

    cout << "-----------------Menu-----------------------" << endl;
    cout << "1) LinearSearch" << endl;
    cout << "2) BinarySearch" << endl;
    cout << "3) BubbleSort" << endl;
    cout << "4) InsertionSort" << endl;
    cout << "5) Exit Menu" << endl
         << endl;
    cin >> op;

    switch (op)
    {
    case 1:
    {
        linearsearch(ray, size);
        break;
    }
    case 2:
    {
        binarysearch(ray, size);
        break;
    }
    case 3:
    {
        bubblesort(ray, size);
        break;
    }
    case 4:
    {
        insertionsort(ray, size);
        break;
    }
    case 5:
    {
        cout << "Exiting Menu" << endl;
        return 0;
        break;
    }
    }
    }
    return 0;
}

void linearsearch(int array[], int s)
{
    int numli;
    int pos;

    cout << "Enter a number to linear search: " << endl;
    cin >> numli;

    for (int i = 0; i < s; i++)
    {
        if (array[i] == numli)
        {
            pos = i + 1;
            break;
        }
        else
        {
            pos = 0;
        }
    }
    if (pos != 0)
    {
        cout << "Number found at position: " << pos << endl;
    }

    else if (pos == 0)
    {
        cout << "Number not found" << endl;
    }
}

void binarysearch(int array[], int s)
{
    int swap,loc;
    int mid,pos;

    cout << "Unsorted array is: " << endl
         << endl;

    for (int k = 0; k < s; k++)
    {
        cout << array[k] << " ";
    }

    for (int j = 0; j < s; j++)
    {
        for (int z = j + 1; z < s; z++)
        {
            if (array[j] > array[z])
            {
                swap = array[j];
                array[j] = array[z];
                array[z] = swap;
            }
        }
    }
    cout << endl;

    cout << "Sorted array is: " << endl
         << endl;

    for (int k = 0; k < s; k++)
    {
        cout << array[k] << " ";
    }

    mid=s/2;
    cout<<endl;

    cout<<"Enter the number you want to search: "<<endl;
    cin>>loc;

if(mid%2==0)
{
    cout<<"mid is even"<<endl;

    if(array[mid]==loc)
    {
        pos=array[mid]+1;
    }
    else if(array[mid]<loc)
    {
        for(int i=mid+1;i<s;i++)
        {
            if(array[i]=loc)
            {
                pos=i+1;
                break;
            }
        }
    }

    else
    {
        for (int i=0;i<mid-1;i++)
        {
            if(array[i]=loc)
            {
                pos=i+1;
                break;
            }
        }
    }

    cout<<"The number is present in position: "<<pos<<endl;
}

else if(mid%2!=0)
{
    cout<<"mid is odd"<<endl;

    mid=mid+1;
    
    if(array[mid]==loc)
    {
        pos=array[mid]+1;
    }
    else if(array[mid]<loc)
    {
        for(int i=mid+1;i<s;i++)
        {
            if(array[i]=loc)
            {
                pos=i+1;
                break;
            }
        }
    }

    else
    {
        for (int i=0;i<mid-1;i++)
        {
            if(array[i]=loc)
            {
                pos=i+1;
                break;
            }
        }
    }

    cout<<"The number is present in position: "<<pos<<endl;
}

}

void bubblesort(int array[], int s)
{
    int swap;

    cout << "Unsorted array is: " << endl
         << endl;

    for (int k = 0; k < s; k++)
    {
        cout << array[k] << " ";
    }

    for (int j = 0; j < s; j++)
    {
        for (int z = j + 1; z < s; z++)
        {
            if (array[j] > array[z])
            {
                swap = array[j];
                array[j] = array[z];
                array[z] = swap;
            }
        }
    }
    cout << endl;

    cout << "Sorted array is: " << endl
         << endl;

    for (int k = 0; k < s; k++)
    {
        cout << array[k] << " ";
    }
}

void insertionsort(int array[], int s)
{
    int swap;

    cout << "Unsorted array is: " << endl
         << endl;

    for (int k = 0; k < s; k++)
    {
        cout << array[k] << " ";
    }

    for (int j = 1; j < s; j++)
    {
        swap = array[j];
        int p = j - 1;
        while ((j >= 0) && (swap < array[p]))
        {
            array[p + 1] = array[p];
            p--;
        }
        array[p + 1] = swap;
    }
    cout << endl;

    cout << "Sorted array is: " << endl
         << endl;

    for (int k = 0; k < s; k++)
    {
        cout << array[k] << " ";
    }
}
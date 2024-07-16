#include <iostream>
#include <iostream>

using namespace std;

int main()
{

    int varr;
    char varn, varopt;
    int j = 0, d = 0;
    int k = 1;
    cout << "Rock, Paper and Scissors Game! " << endl;

    while (true)
    {

        cout << "Choose one of the following options: " << endl;
        cout << "-------------------------------------" << endl;

        cout << "(r)  for  rock" << endl;
        cout << "(p)  for  paper" << endl;
        cout << "(s)  for  scissors" << endl;
        cin >> varopt;

        srand(time(NULL));
        varr = rand() % 3 + 1;

        switch (varr)
        {

        case 1:
            varn = 'r';
            cout << "Computer Choice is: " << varn << endl;
            break;
        case 2:
            varn = 'p';
            cout << "Computer Choice is: " << varn << endl;
            break;
        case 3:
            varn = 's';
            cout << "Computer Choice is: " << varn << endl;
            break;

        default:
            cout << "Invalid" << endl;
            break;
        }

        if ((varn == 'r') && (varopt == 'r'))
        {
            cout << "It is a tie" << endl;
        }

        else if ((varn == 'r') && (varopt == 'p'))

        {
            cout << "You win this round" << endl;

            ++j;
        }
        else if ((varn == 'r') && (varopt == 's'))

        {
            cout << "You lose this round" << endl;

            ++d;
        }

        else if ((varn == 'p') && (varopt == 'r'))
        {
            cout << "You lose this round" << endl;

            ++d;
        }

        else if ((varn == 'p') && (varopt == 'p'))
        {
            cout << "It is a tie" << endl;
        }

        else if ((varn == 'p') && (varopt == 's'))
        {
            cout << "You win this round" << endl;

            ++j;
        }

        else if ((varn == 's') && (varopt == 'r'))
        {
            cout << "You win this round" << endl;

            ++j;
        }

        else if ((varn == 's') && (varopt == 'p'))
        {
            cout << "You lose this round" << endl;

            ++d;
        }

        else if ((varn == 's') && (varopt == 's'))
        {
            cout << "It is a tie" << endl;
        }

        else
        {
            cout << "Invalid result" << endl;
        }

        if (k >= 3)
        {

            if (j > d)
            {
                cout << "You are the Winner of this Match" << endl;

                break;
            }

            else if (d > j)
            {
                cout << "You are the Loser of this Match" << endl;

                break;
            }
        }

        ++k;
    }

    return 0;
}

#include <iostream>

using namespace std;

class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int sum=0;

        for (int i = 1; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }

        if(num==sum)
        {
            return true;
        }

    }
};

int main()
{
    Solution sol;
    sol.checkPerfectNumber(28);

    return 0;
}
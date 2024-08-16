#include <iostream>

using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num < 0)
            return false;

        if (num == 1)
            return true;

        for (int i = 2; i <= num / 2; ++i)
        {
            if (i * i == num)
                return true;
        }

        return false;
    }
};

int main()
{
    Solution sol;
    sol.isPerfectSquare(64);

    return 0;
}

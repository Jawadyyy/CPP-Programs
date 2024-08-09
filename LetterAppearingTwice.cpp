#include <Iostream>

using namespace std;

class Solution
{
public:
    char repeatedCharacter(string s)
    {
        bool characters[26] = {false};

        for (int i = 0; i < s.length(); i++)
        {
            if (characters[s[i] - 'a'])
            {
                return s[i];
            }

            else
            {
                characters[s[i] - 'a'] = true; 
            }
        }

        return '\0';
    }
};

int main()
{
    Solution sol;
    sol.repeatedCharacter("abccd");

    cout << "First repeated character: " << sol.repeatedCharacter("abccd") << endl;

    return 0;
}
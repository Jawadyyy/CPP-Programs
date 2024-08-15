#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i = 0; i < t.length(); i++) {
            bool found = false;
            for(int j = 0; j < s.length(); j++) {
                if(t[i] == s[j]) {
                    s[j] = ' ';
                    found = true;
                    break;
                }
            }
            if(!found) {
                return t[i];
            }
        }
        return '\0';
    }
};

int main()
{
    Solution obj;
    char result = obj.findTheDifference("abcd", "abcdef");
    cout << result << endl; // Output should be 'y'

    return 0;
}

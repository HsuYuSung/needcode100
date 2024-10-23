#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {

        string str;

        for (char c : s)
        {
            if (isalnum(c))
            {
                str += c; // Append only alphanumeric characters
            }
        }

        int left = 0;
        int right = str.size() - 1;
        while (left < right)
        {
            if (tolower(str[left]) != tolower(str[right]))
            {
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    string s = "Was it a car or a cat I saw?";
    Solution sol;
    bool ans = sol.isPalindrome(s);
    cout << "ans: " << ans << endl;

    return 0;
}
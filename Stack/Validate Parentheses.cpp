#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else if (c == ')' || c == ']' || c == '}')
            {
                if (st.empty()) {
                    return false;
                }

                char top = st.top();
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{'))
                {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};

int main()
{
    string s = "]";
    Solution sol;
    bool ans = sol.isValid(s);
    cout << "ans: " << ans << endl;

    return 0;
}
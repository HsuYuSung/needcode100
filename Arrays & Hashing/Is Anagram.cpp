#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> umap;

        for (int i = 0; i < s.length(); i++)
            umap[s[i]]++;

        for (int i = 0; i < t.length(); i++)
        {
            auto it = umap.find(t[i]);
            if (umap.find(t[i]) == umap.end())
                return false;
            umap[t[i]]--;
        }

        for (int i = 'a'; i <= 'z'; i++)
            if (umap[i] > 0 || umap[i] < 0)
                return false;

        return true;
    }
};

int main()
{
    Solution sol;

    bool is_same = sol.isAnagram("abcccc", "abccccccc");
    cout << "is_same: " << is_same << endl;
    return 0;
}

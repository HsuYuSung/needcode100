#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<unordered_map<char, int>> vec;
        vector<vector<string>> result;
        for (auto str: strs) {
            unordered_map<char, int> word;
            for (auto i: str) {
                word[i] += 1;
            }
            auto it = find(vec.begin(), vec.end(), word);
            int idx = distance(vec.begin(), it);
            if (it == vec.end()) {
                vec.push_back(word);
                result.push_back({str});
            } else {
                result[idx].push_back(str);
            }
        }

        return result;
    }
};


int main() {
    vector<string> input {"act", "pots", "tops", "cat", "stop", "hat"};
    vector<vector<string>> output {{"hat"}, {"act", "cat"}, {"stop", "pots", "tops"}};

    vector<vector<string>> ans;
    Solution sol;
    ans = sol.groupAnagrams(input);

    for (size_t i=0; i<ans.size();i++) {
        cout << i << ": ";
        for (size_t j=0; j<ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
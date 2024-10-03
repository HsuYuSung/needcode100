#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> tmp;
        for (int i=0; i<nums.size(); i++) {
            tmp[nums[i]] = i;
        }

        for (int i=0; i<nums.size(); i++) {
            vector<int> vec;
            vec.push_back(i);

            int val = target - nums[i];
            // cout << val << endl;
            if (tmp[val] != i && tmp[val]) {
                vec.push_back(tmp[val]);
                return vec;
            }
        }

        vector<int> vec;
        return vec;
    }
};

int main() {
    Solution sol;
    vector<int> vec {3,4,5,6};
    int target = 7;
    vector<int> ans;
    ans = sol.twoSum(vec, target);
    cout << "Ans: " << endl;
    for (auto i: ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
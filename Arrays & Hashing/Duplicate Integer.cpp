#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for (int i=0; i<nums.size(); i++) {
            if (s.count(nums[i]))
                return true;
            s.insert(nums[i]);
        }
        return false;
    }
};

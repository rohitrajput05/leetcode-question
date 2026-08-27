class Solution {
public:
       bool containsDuplicate(vector<int>& nums) {
       unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        // iterate through the whole vector nums for required solution
        for (auto it : mpp) {
            if (it.second > 1) {
                return true;
            }
        }
        return false;
    }
};
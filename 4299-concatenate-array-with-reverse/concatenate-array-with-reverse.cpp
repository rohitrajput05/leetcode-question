class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        int low = n-1;
        for(int i=low; i>=0; i--){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool increase = true;
        bool decrease = true;
        int i = 0;
        while(i<n-1){
            if(nums[i]<nums[i+1]){
                decrease = false;
            }
            else if(nums[i]>nums[i+1]){
                increase = false;
            }
            i++;
        }
        return increase||decrease;   
    }
};
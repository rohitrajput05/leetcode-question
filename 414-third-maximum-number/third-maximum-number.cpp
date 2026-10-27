class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int cnt = 1;
        sort(nums.begin(), nums.end());
        for(int i = nums.size()-1; i>0; i--){
            if(nums[i]==nums[i-1]) continue;
            else if(nums[i]>nums[i-1]) cnt++;
            if(cnt == 3) return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};
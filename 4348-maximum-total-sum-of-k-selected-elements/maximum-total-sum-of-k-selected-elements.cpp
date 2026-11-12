class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end());
        long long sum = 0;
        int n = nums.size();
        int i = n-1;
        while(k>0){
            if(mul>0) sum+= 1ll*mul*nums[i];
            else sum+=nums[i];
            i--;
            mul--;
            k--;
        }
        return sum;
    }
};
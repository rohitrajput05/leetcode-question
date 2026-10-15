class Solution {
public:
    bool isPossible(vector<int>&nums, int mid, int k){
        int subarray = 1;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>mid) return false;
            if((sum+nums[i])>mid){
                subarray+=1;
                sum = nums[i];
            }
            else{
                sum+=nums[i];
            }
        }
        if(subarray<=k) return true;
        return false;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *min_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid = low+(high-low)/2;
            if(isPossible(nums, mid, k) == true){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
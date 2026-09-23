class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int current = (low+high)/2;
        while(low <= high && nums[current] != target){
            if(nums[current]> target){
                high = current-1;
            }
            if(nums[current]< target){
                low = 1+current;
            }
            current = (low+high)/2;
        }       
        if(nums[current] == target){
            return current;
        }
        return -1;
    }
};
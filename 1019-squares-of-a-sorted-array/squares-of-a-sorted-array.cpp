class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
                int n = nums.size();

        for(int i =0; i<n; i++){            //replacing elements with their square
            nums[i] = nums[i]*nums[i];          
        }

        for(int i =0; i<n; i++){                 //insertion sort
            int j = i;
            while(j>0 && nums[j-1]>nums[j]){
                swap(nums[j], nums[j-1]);
                j--;
            }
        }
        return nums;
    }
};
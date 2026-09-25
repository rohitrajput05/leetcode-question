class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return 0;
        }
        int ls = 0;
        int rs = 0;
        for(int i = 1; i<n; i++){
            rs += nums[i];
        }
        int j = 1;
        while(ls!=rs && j < n){
            rs-=nums[j];
            ls+=nums[j-1];
            j++;
        }
        if(ls == rs){
        return j-1;
        }
        return -1;
    }
};
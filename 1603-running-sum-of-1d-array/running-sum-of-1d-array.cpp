class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        vector<int>arr(size, 0);
        int sum;
        for(int i =0; i<size; i++){
            sum = 0;
            for(int j=0; j<=i; j++){
                sum += nums[j];
            }
            arr[i] = sum;
        }
        return arr;
    }
};
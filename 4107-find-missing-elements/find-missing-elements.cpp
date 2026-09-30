class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>missing;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int current = nums[0];
        current++;
        for(int i = 1; i<n; i++){
            while(current<nums[i]){
                missing.push_back(current);
                current++;
            }
            current++;
        }
        return missing;
    }
};
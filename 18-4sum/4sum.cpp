class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        long long sum;
        vector<vector<int>>answer;
        for(int i = 0; i<n-3; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j<n-2; j++){
                if(j>i+1 && nums[j-1] == nums[j]) continue;
                int k = j+1;
                int l = n-1;
                while(k<l){
                    sum = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum<target){
                        k++;
                    }
                    else if(sum>target){
                        l--;
                    }
                    else{
                        vector<int>temp = {nums[i], nums[j], nums[k], nums[l]};
                        k++;
                        l--;
                        answer.push_back(temp);
                        while(k<l &&nums[k-1] == nums[k]){
                        k++;
                    }
                    while(k<l &&nums[l+1] == nums[l]){
                        l--;
                    }
                    }
                }
            }
        }
        return answer;
    }
};
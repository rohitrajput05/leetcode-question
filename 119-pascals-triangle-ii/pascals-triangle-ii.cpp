class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        long long current = 1;
        ans.push_back(current);
        for(int i = 0; i<rowIndex; i++){
            current *= (rowIndex-i);
            current /= i+1;
            ans.push_back(current);
        }
        return ans;
    }
};
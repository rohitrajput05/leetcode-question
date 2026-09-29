class Solution {
public:
vector<int>genrow(int row){
    int current = 1;
    vector<int>ansrow;
    ansrow.push_back(1);
    for(int col = 1; col<row; col++){
        current *= (row-col);
        current/=(col);
        ansrow.push_back(current);
    }
    return ansrow;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i = 1; i<=numRows; i++){
            ans.push_back(genrow(i));
        }
        return ans;
    }
};
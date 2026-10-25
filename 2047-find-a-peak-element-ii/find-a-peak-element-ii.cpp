class Solution {
public:
    int maxRow(vector<vector<int>>&mat, int n, int m, int mid){
        int maxInd = 0;
        for(int i = 0; i<n; i++){
            if(mat[i][mid]>mat[maxInd][mid]){
                maxInd = i;
            }
        }
        return maxInd;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0; 
        int high = m-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int maxRowIndex = maxRow(mat, n, m, mid);
            int left = mid-1 >= 0 ? mat[maxRowIndex][mid-1] : -1;
            int right = mid + 1 <m ? mat[maxRowIndex][mid+1] : -1;
            if(left < mat[maxRowIndex][mid] && right<mat[maxRowIndex][mid]){
                return {maxRowIndex, mid};
            }
            else if(left>mat[maxRowIndex][mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {-1, -1};
    }
};
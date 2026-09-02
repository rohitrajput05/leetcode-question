class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int mini=0;
        int total =0;
        int n= cardPoints.size();
        for(int i=0; i<n;i++){
            total+=cardPoints[i];
        }
        int winsum =0;
        for(int i=0; i<n-k;i++){
            winsum+=cardPoints[i];
        }
        mini = winsum;
        for(int i=0; i<k;i++){
           winsum += cardPoints[n-(k-i)] - cardPoints[i];
           mini = min(winsum, mini);
        }
        int sol = total-mini;
        
        return sol;
    }
};
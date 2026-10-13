class Solution {
public:
    bool check(vector<int>&bloomDay, int mid, int m, int k){
        int cnt = 0;
        int noOfb = 0;
        for(int i = 0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=mid){
                cnt++;
            }
            else{
                noOfb += cnt/k;
                cnt = 0;
            }
        }
        noOfb += cnt/k;
        if(noOfb>=m) return true;
        return false;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((bloomDay.size())/m<k){
            return -1;
        }
        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());

        int low = mini;
        int high = maxi;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(bloomDay, mid, m, k) == true){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
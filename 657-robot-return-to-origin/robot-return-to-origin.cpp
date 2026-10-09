class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i<n; i++){
            if(moves[i] == 'L'){
                cnt1--;
            }
            else if(moves[i] == 'R'){
                cnt1++;
            }
            else if(moves[i] == 'D'){
                cnt2--;
            }
            else if(moves[i] == 'U'){
                cnt2++;
            }
        }
        if(cnt1 == 0 && cnt2 == 0){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        vector<int>answer;
        int current = 0;
        char ch;
        int ans;
        for(int i = 0; i<n; i++){
            ch = seq[i];
            if(ch == '('){
                ans = current%2;
                current++;
                answer.push_back(ans);
            }
            else{
                current--;
                ans = current%2;
                answer.push_back(ans);
            }
        }
        return answer;
    }
};
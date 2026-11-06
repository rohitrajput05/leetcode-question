class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>ans(26, false);
        for(int i=0; i<sentence.size(); i++){
            ans[sentence[i]-'a'] = true;
        }
        for(int i=0; i<26; i++){
            if(ans[i]==false) return false;
        }
        return true;
    }
};
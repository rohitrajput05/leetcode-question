class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        int length = 0;
        bool odd = false;
        vector<int>v(128, 0);
        for(int i = 0; i<n; i++){
            v[s[i]]++;
        }
        for(int i = 0; i<128; i++){
            if(v[i]%2 == 0) length+=v[i];
            else if(v[i]%2 == 1) {
                length+=(v[i]-1);
                odd = true;
            }
        }
        if(odd) return length+1;
        return length;
    }
};
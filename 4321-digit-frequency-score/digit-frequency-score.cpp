class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>freq(10, 0);
        while(n>0){
            int ld = n%10;
            freq[ld]++;
            n/=10;
        }
        int score = 0;
        for(int i = 0; i<10; i++){
            score += i*freq[i];
        }
        return score;
    }
};
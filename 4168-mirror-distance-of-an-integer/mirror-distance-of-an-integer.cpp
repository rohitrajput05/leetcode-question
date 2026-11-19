class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int cpy = n;
        while(cpy>0){
            int ld = cpy%10;
            rev = rev*10+ld;
            cpy/=10;
        }
        return abs(n-rev);
    }
};
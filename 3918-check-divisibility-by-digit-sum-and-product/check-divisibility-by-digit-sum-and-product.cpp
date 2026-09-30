class Solution {
public:
    bool checkDivisibility(int n) {
        int dig_sum = 0;
        int product = 1;
        int ld;
        int original = n;
        int sum;
        while(n>0){
            ld = n%10;
            dig_sum+=ld;
            product*=ld;
            n/=10;
        }
        sum = product+dig_sum;
        if(original%sum == 0){
            return true;
        }
        return false;
    }
};
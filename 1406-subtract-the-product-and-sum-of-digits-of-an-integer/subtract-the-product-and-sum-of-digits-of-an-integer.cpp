class Solution {
public:
    int subtractProductAndSum(int n) {
        int product =1;
        int sum = 0;
        int ld;
        int result;
        while(n!=0){
            ld = n%10;
            product*=ld;
            sum+=ld;
            n=n/10;
        }
        result = product - sum;
        
        return result;
    }
};
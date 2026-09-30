class Solution {
public:
    int maxProduct(int n) {
       int digit;
       int copy = n;
       int largest = INT_MIN;
       int slargest = INT_MIN;
       int product;
       while(copy>0){
        digit = copy%10;
        copy/=10;
        if(digit>largest){
            slargest = largest;
            largest = digit;
        }
        else if(digit>slargest){
            slargest = digit;
        }
       }
       product = slargest*largest;
       return product;
    }
};
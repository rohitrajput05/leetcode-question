class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int amt = purchaseAmount%10;
        if(amt<5){
            return 100-(purchaseAmount-amt);
        }
        return 100-(purchaseAmount+10-amt);
    }
};
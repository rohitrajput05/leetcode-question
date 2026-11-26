class Solution {
public:
    bool canAliceWin(int n) {
        int turn = 0;
        int remove = 10;
        while(n>=remove){
            turn++;
            n=n-remove;
            remove--;
        }
        if(turn%2==0) return false;
        return true;
    }
};
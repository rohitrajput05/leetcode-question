class Solution {
public:
    bool isThree(int n) {
        if(n<=2) return false;
        bool exist = true;
        int check = 0;
        for(int i = 2; i<n; i++){
            if(n%i == 0) check++;
        }
        if(check == 1) return true;
        return false;
    }
};
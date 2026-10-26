class Solution {
public:
    int numberOfMatches(int n) {
        int currentTeam = n;
        int matches = 0;
        while(currentTeam>1){
            if(currentTeam%2 == 0){
                matches+=currentTeam/2;
                currentTeam/=2;
            }
            else{
                matches += (currentTeam-1)/2;
                currentTeam = currentTeam/2+1;
            }
        }
        return matches;
    }
};
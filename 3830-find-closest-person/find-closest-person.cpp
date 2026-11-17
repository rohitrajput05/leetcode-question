class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xz = abs(x-z);
        int yz = abs(y-z);
        if(xz>yz) return 2;
        if(xz<yz) return 1
        ;
        return 0;
    }
};
class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<=0)
            return false;
        if((num&(num-1))!=0)
            return false;
        int n=log2(num);
        if(n&1)
            return false;
        return true;
    }
};
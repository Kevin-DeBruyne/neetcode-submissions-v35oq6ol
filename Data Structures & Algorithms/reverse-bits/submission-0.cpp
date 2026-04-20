class Solution {
public:
    bool checkKthBit(int n, int k) {
        // Right shift n by k 
        n = n >> k;
        // If 0th bit is set 
        if ((n & 1) != 0) {
            return true;
        }
        return false;
    }
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        for(int i=0;i<=31;i++){
            res+=checkKthBit(n, i)*pow(2,31-i);
        }
        return res;
    }
};

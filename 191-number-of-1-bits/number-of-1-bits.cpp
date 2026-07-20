class Solution {
public:
    int hammingWeight(int n) {

        // suppose and 32 bits like 1 0 1 0 0 {dan dik theke 0 1 2 3 cholche upto 32 bits }
        // now jodi right sift korte hoy 1 bit k taho;e nocher formula use hobe 
        int count=0;
      
        for (int i = 31; i >= 0; i--) {
            if (((n >> i) & 1) == 1) {
                count++;
            }
        }

        return count;
        
    }
};
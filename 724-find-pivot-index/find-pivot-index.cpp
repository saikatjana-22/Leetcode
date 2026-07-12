class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //  ami eta prefix and suffix sum diyeo korte pari but leftsum right sum er r ekta extra formula ache seta diyeo korte parbo 


        int n = nums.size();
        int totalsum =0;
        for (int i=0;i<n;i++)
        {
            totalsum+=nums[i];
        }
        int leftsum =0;
        for (int i=0;i<n;i++)
        {
            int rightsum=totalsum-leftsum-nums[i];


            if (leftsum==rightsum)
            return i;

            leftsum+=nums[i];
        }
        return -1;




    }
};
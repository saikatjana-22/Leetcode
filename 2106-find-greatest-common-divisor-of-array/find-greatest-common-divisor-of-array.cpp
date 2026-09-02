class Solution {
public:
    int findGCD(vector<int>& nums) {

        int min =nums[0];
        int max =nums[0];

        for (int i =0;i<nums.size();i++)
        {
            if (nums[i]<min)
            min= nums[i];

            if (nums[i]>max)
            max= nums[i];
        }

        while (min!=0)
        {
            int rem = max%min;
            max= min ;
            min = rem;
        }
        return max;
    }
    };
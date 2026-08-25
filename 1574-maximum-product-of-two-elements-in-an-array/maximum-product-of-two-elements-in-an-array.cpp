class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
         int largest = 0;
         int seclargest=0;
         for (int i=0;i<n;i++)
         {
            if (nums[i]>largest)
            {
               seclargest=largest;
               largest=nums[i];
            }
            else 
            {
                seclargest = max(seclargest,nums[i]);
            }



         }
         return (largest-1)*(seclargest-1);
    }
};
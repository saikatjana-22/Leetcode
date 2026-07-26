class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
    //     int n = nums.size();
    //     sort(nums.begin(),nums.end());

    // int result = ((nums[n-1]*nums[n-2]) - (nums[0]*nums[1]));
    // return result;

    // approac 2 
    int n = nums.size();
    int largest = INT_MIN;
    int seclargest=INT_MIN;
    int smallest =INT_MAX;
    int secsmallest = INT_MAX;

    for (int i =0;i<n;i++)
    {
        if (nums[i]>largest)
        {
            seclargest= largest;
            largest= nums[i];
        }
        else 
        seclargest = max(seclargest,nums[i]);

        if (nums[i]<smallest)
        {
            secsmallest = smallest;
            smallest =nums[i];
        }
        else
        secsmallest =min (secsmallest,nums[i]);
    }
     return (largest * seclargest)-(smallest * secsmallest);

        
    }
};
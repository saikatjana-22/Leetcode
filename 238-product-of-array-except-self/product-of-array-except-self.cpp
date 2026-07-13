class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> answer(n, 1);

        // // Step 1: Prefix (left product)
        // for (int i = 1; i < n; i++) {
        //     answer[i] = answer[i - 1] * nums[i - 1];
        // }

        // // Step 2: Suffix (right product)
        // int right = 1;
        // for (int i = n - 1; i >= 0; i--) {
        //     answer[i] = answer[i] * right;
        //     right = right * nums[i];
        // }

        // return answer;

        // 1st approach 
    //    int n = nums.size();
    //     int countz = 0;
    //     int product_without_zero = 1;

    //     // Step 1: count zeros & product
    //     for (int i = 0; i < n; i++) {
    //         if (nums[i] == 0) {
    //             countz++;
    //         } else {
    //             product_without_zero *= nums[i];
    //         }
    //     }

    //     vector<int> result(n);

    //     // Step 2: build result
    //     for (int i = 0; i < n; i++) {
    //         if (nums[i] != 0) {
    //             if (countz > 0) {
    //                 result[i] = 0;
    //             } else {
    //                 result[i] = product_without_zero / nums[i];
    //             }
    //         } else { // nums[i] == 0
    //             if (countz > 1) {
    //                 result[i] = 0;
    //             } else {
    //                 result[i] = product_without_zero;
    //             }
    //         }
    //     }

    //     return result;

// int n = nums.size();
//     vector<int> result (n); // left er multiplication gulo ekhane store kore rakhbo 
//     result[0]=1;
//     for (int i=1;i<n;i++)
//     {
//         result[i]=result[i-1]*nums[i-1];

//     }

      
//         int right = 1;
//         for (int i = n - 1; i >= 0; i--) {
//             result[i] = result[i] * right;
//             right = right * nums[i];
//         }

//         return result;/



int n = nums.size();
vector<int>result(n);
result[0]=1;
for (int i=1;i<n;i++)
{
    result[i]=result[i-1]*nums[i-1];
}
int right=1;
for(int i =n-1;i>=0;i--)
{
    result[i]= right*result[i];
    right=right*nums[i];
}
return result;


    }
};
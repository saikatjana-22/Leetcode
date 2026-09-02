class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> st;

        for (int num : nums) {
            // Try every possible factor
            for (int i = 2; i * i <= num; i++) {
                
                if (num % i == 0) {
                    st.insert(i);

                    // Remove this factor completely
                    while (num % i == 0) {
                        num /= i;
                    }
                }
            }

            // If remaining number is > 1, it is a prime factor
            if (num > 1) {
                st.insert(num);
            }
        }

        return st.size();
    }
};
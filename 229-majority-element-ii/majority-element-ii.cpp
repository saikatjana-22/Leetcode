class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int count1 = 0, count2 = 0;
        int maj1 = 0, maj2 = 1;

        // First pass: find two possible candidates
        for (int i = 0; i < n; i++) {
            if (nums[i] == maj1) {
                count1++;
            }
            else if (nums[i] == maj2) {
                count2++;
            }
            else if (count1 == 0) {
                maj1 = nums[i];
                count1 = 1;
            }
            else if (count2 == 0) {
                maj2 = nums[i];
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        // Second pass: count actual frequencies
        vector<int> result;
        int freq1 = 0;
        int freq2 = 0;

        for (int& num : nums) {
            if (num == maj1) {
                freq1++;
            }
            else if (num == maj2) {
                freq2++;
            }
        }

        // ekhane dutor jonno du bar frequescy check korchi

        // Add candidates that appear more than n / 3 times
        if (freq1 > n / 3) {
            result.push_back(maj1);
        }
                    
        if (freq2 > n / 3) {
            result.push_back(maj2);  // Correct: maj2, not maj1
        }

        return result;
    }
};
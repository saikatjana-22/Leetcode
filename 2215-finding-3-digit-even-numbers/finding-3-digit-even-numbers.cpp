class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);

        // Count frequency of each digit
        for (int digit : digits) {
            freq[digit]++;
        }

        vector<int> ans;

        for (int num = 100; num <= 998; num += 2) {
            int x = num;

            int a = x / 100;        // hundreds digit
            int b = (x / 10) % 10;  // tens digit
            int c = x % 10;         // units digit

            // Use a temporary frequency array
            vector<int> used(10, 0);

            used[a]++;
            used[b]++;
            used[c]++;

            bool possible = true;

            for (int i = 0; i < 10; i++) {
                if (used[i] > freq[i]) {
                    possible = false;
                    break;
                }
            }

            if (possible) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};
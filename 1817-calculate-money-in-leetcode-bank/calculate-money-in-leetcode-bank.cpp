class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int monday = 1;

        while (n > 0) {
            for (int i = 0; i < 7 && n > 0; i++) {
                ans += monday + i;
                n--;
            }

            monday++;
        }

        return ans;
    }
};
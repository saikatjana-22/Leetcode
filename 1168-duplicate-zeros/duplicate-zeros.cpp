class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> dest(n, 0);

        int s = 0;
        int d = 0;

        while (s < n) {
            if (arr[s] == 0) {
                if (d < n) {
                    dest[d] = 0;
                }

                d++;

                if (d < n) {
                    dest[d] = 0;
                }
            } else {
                if (d < n) {
                    dest[d] = arr[s];
                }
            }

            d++;
            s++;
        }

        for (int i = 0; i < n; i++) {
            arr[i] = dest[i];
        }
    }
};
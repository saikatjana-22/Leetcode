class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> expected = heights; //eta copy korte help kore .

        sort(expected.begin(), expected.end());

        int count = 0;

        for (int i = 0; i < expected.size(); i++) { //ekhane expected .size()or heights.szie()korelo sam ee asbe 

            if (heights[i] != expected[i]) {
                count++;
            }
        }

        return count;
    }
};
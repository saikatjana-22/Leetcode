
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         int n = matrix.size();
//         int m = matrix[0].size();
//         int x = target;

//         for (int i = 0; i < n; i++)
//         {
//             if (matrix[i][0] <= x && x <= matrix[i][m-1])
//             {
//                 int start = 0, end = m - 1;

//                 while (start <= end)
//                 {
//                     int mid = (start + end) / 2;

//                     if (matrix[i][mid] == x)
//                     {
//                         return true;
//                     }
//                     else if (matrix[i][mid] < x)
//                     {
//                         start = mid + 1;
//                     }
//                     else
//                     {
//                         end = mid - 1;
//                     }
//                 }
//             }
//         }

//         return false;
//     }
// };

// r ekta approach e kora jete pare 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        int start = 0;
        int end = n * m - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            int row = mid / m;
            int col = mid % m;

            if (matrix[row][col] == target)
            {
                return true;
            }
            else if (matrix[row][col] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return false;
    }
};
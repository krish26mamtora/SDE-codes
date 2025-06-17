#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    int find_row(vector<vector<int>> &matrix, int key)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0, high = m - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (matrix[mid][0] <= key && matrix[mid][n - 1] >= key)
            {
                return mid;
            }
            else if (matrix[mid][0] > key)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }

    int binary_search(vector<int> arr, int st, int end, int key)
    {
        if (st > end)
        {
            return -1;
        }

        int mid = (st + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            return binary_search(arr, mid + 1, end, key);
        }
        else
        {
            return binary_search(arr, st, mid - 1, key);
        }
    }

public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix[0].size();
        int row_index = find_row(matrix, target);
        if (row_index == -1)
        {
            return false;
        }
        else
        {
            int col_index = binary_search(matrix[row_index], 0, n - 1, target);
            return col_index != -1;
        }
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target = 16;

    if (sol.searchMatrix(matrix, target))
    {
        cout << "Target " << target << " found in the matrix." << endl;
    }
    else
    {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}

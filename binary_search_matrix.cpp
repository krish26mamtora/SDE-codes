#include <iostream>
#include <vector>
using namespace std;

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
    int n = arr.size();
    int mid = (st + end) / 2;
    if (st > end)
    {
        return -1;
    }
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        st = mid + 1;
        return binary_search(arr, st, end, key);
    }
    else
    {
        end = mid - 1;
        return binary_search(arr, st, end, key);
    }
    return -1;
}

int main()
{
    int m = 4, n = 4, key = 4;
    vector<vector<int>> matrix(m, vector<int>(n, 0));
    matrix = {{1, 3, 4, 5},
              {6, 7, 8, 9},
              {11, 12, 15, 17},
              {20, 21, 25, 28}};

    int row_index = find_row(matrix, key);
    if (row_index == -1)
    {
        cout << "Key not found in any row." << endl;
    }
    else
    {
        int col_index = binary_search(matrix[row_index], 0, n - 1, key);
        if (col_index == -1)
            cout << "Key not found in the row." << endl;
        else
            cout << "Found at (" << row_index << ", " << col_index << ")" << endl;
    }
}
#include <iostream>
#include <vector>
using namespace std;

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
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int idx = binary_search(arr, 0, 9, 18);
    if (idx >= 0)
    {
        cout << "indx value: " << idx;
    }
    else
    {
        cout << "element not found";
    }
}
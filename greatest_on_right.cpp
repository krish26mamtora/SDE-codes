#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int n = arr.size();
        vector<int> ans(n, 0);
        ans[n - 1] = -1;
        int curr_max = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            ans[i] = curr_max;
            if (arr[i] > curr_max)
            {
                curr_max = arr[i];
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> arr = {17, 18, 5, 4, 6, 1};

    vector<int> result = sol.replaceElements(arr);

    cout << "Replaced Elements: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

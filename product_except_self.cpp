#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 1);
        int mul = 1;
        for (int i = 0; i < n; i++)
        {
            ans[i] *= mul;
            mul = mul * nums[i];
        }
        mul = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            ans[i] *= mul;
            mul = mul * nums[i];
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = sol.productExceptSelf(nums);

    cout << "Product Except Self: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> a(101, 0);
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += a[nums[i]];
            a[nums[i]]++;
        }

        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    Solution sol;
    int result = sol.numIdenticalPairs(nums);

    cout << "Number of good pairs: " << result << endl;

    return 0;
}

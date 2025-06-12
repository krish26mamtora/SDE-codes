#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[nums[i]] = i; // map value to index
        }
        for (int i = 0; i < n; i++)
        {
            int sub = target - nums[i];
            if (m.find(sub) != m.end() && m[sub] != i)
            {
                return {i, m[sub]};
            }
        }
        return {};
    }
};

int main()
{
    int n, target;
    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices of elements adding up to " << target << " are: "
             << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}

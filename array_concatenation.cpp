#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            nums.push_back(nums[i]);
        }
        return nums;
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
    vector<int> result = sol.getConcatenation(nums);

    cout << "Concatenated array:\n";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

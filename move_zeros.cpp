#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[k++] = nums[i];
            }
        }
        while (k < n)
        {
            nums[k++] = 0;
        }
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {0, 1, 0, 3, 12};

    sol.moveZeroes(nums);

    cout << "After moving zeroes: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

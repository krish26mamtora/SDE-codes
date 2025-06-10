#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int length = nums.size();
        sort(nums.begin(), nums.end());
        return nums[length / 2];
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = sol.majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}

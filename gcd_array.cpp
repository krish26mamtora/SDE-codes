#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    int GCD(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        else
            return GCD(b, a % b);
    }

public:
    int findGCD(vector<int> &nums)
    {
        int small = *min_element(nums.begin(), nums.end());
        int large = *max_element(nums.begin(), nums.end());
        return GCD(small, large);
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2, 5, 6, 9, 10};
    int result = sol.findGCD(nums);
    cout << "GCD of smallest and largest element: " << result << endl;
    return 0;
}

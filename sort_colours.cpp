#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int zero = 0;
        int one = 0;
        int two = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                zero++;
            else if (nums[i] == 1)
                one++;
            else if (nums[i] == 2)
                two++;
        }

        int j = 0;
        for (int i = 0; i < zero; i++)
        {
            nums[j++] = 0;
        }
        for (int i = 0; i < one; i++)
        {
            nums[j++] = 1;
        }
        for (int i = 0; i < two; i++)
        {
            nums[j++] = 2;
        }
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
    sol.sortColors(nums);

    cout << "Sorted colors: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

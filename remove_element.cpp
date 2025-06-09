#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int l = nums.size();
        int curr = 0;
        for (int k = 0; k < l; k++)
        {
            if (nums[k] != val)
            {
                nums[curr] = nums[k];
                curr++;
            }
        }
        return curr;
    }
};

int main()
{
    int n, val;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the value to remove: ";
    cin >> val;

    Solution sol;
    int k = sol.removeElement(nums, val);

    cout << "Number of elements after removal: " << k << "\n";
    cout << "Array after removal:\n";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

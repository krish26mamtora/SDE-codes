#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        int x = arr.size();
        unordered_map<int, int> freq;

        for (int m : arr)
        {
            freq[m]++;
        }

        set<int> cmp;
        for (pair<int, int> one_row : freq)
        {
            cmp.insert(one_row.second);
        }

        return cmp.size() == freq.size();
    }
};

int main()
{
    Solution sol;

    // Sample input
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    // Check if occurrences are unique
    bool result = sol.uniqueOccurrences(arr);

    // Print result
    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}

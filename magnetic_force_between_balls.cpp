#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isPossible(vector<int> &position, int m, int dist)
    {
        int count = 1;
        int last_pos = position[0];

        for (int i = 1; i < position.size(); i++)
        {
            if (position[i] - last_pos >= dist)
            {
                count++;
                last_pos = position[i];
            }
            if (count >= m)
                return true;
        }
        return false;
    }

    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());

        int low = 1;
        int high = position.back() - position.front();
        int ans = 0;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (isPossible(position, m, mid))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> position1 = {1, 2, 3, 4, 7};
    int m1 = 3;
    cout << "Maximum minimum magnetic force: " << sol.maxDistance(position1, m1) << endl;

    vector<int> position2 = {5, 4, 3, 2, 1, 1000000000};
    int m2 = 2;
    cout << "Maximum minimum magnetic force: " << sol.maxDistance(position2, m2) << endl;

    return 0;
}

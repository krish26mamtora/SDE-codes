#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
private:
    bool canFinish(vector<int> &piles, int h, int k)
    {
        long hours = 0;
        for (int pile : piles)
        {
            hours += (pile + k - 1) / k; // ceil(pile/k)
        }
        return hours <= h;
    }

public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (canFinish(piles, h, mid))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    int result = sol.minEatingSpeed(piles, h);
    cout << "Minimum eating speed Koko needs: " << result << endl;

    return 0;
}

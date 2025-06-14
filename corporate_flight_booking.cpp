#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> corpFlightBookings(vector<vector<int>> &bookings, int n)
    {
        vector<int> ans(n, 0);
        int len = bookings.size();
        for (int i = 0; i < len; i++)
        {
            int a = bookings[i][0] - 1;
            int b = bookings[i][1] - 1;
            int c = bookings[i][2];
            ans[a] += c;
            if (b < n - 1)
            {
                ans[b + 1] -= c;
            }
        }
        for (int i = 1; i < n; i++)
        {
            ans[i] += ans[i - 1];
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> bookings = {
        {1, 2, 10},
        {2, 3, 20},
        {2, 5, 25}};
    int n = 5;

    vector<int> result = sol.corpFlightBookings(bookings, n);

    cout << "Flight bookings result:\n";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

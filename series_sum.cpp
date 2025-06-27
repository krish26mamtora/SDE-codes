#include <iostream>
using namespace std;

class Solution
{
public:
    int seriesSum(int n)
    {
        return n * (n + 1) / 2;
    }
};

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    Solution sol;
    int sum = sol.seriesSum(n);

    cout << "Sum of series " << n << " = " << sum << endl;

    return 0;
}

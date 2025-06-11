#include <iostream>
using namespace std;

class Solution
{
public:
    int alternateDigitSum(int n)
    {
        int ans = 0;
        int sign = 1;

        while (n != 0)
        {
            int digit = n % 10;
            ans += digit * sign;
            sign *= -1;
            n /= 10;
        }

        if (sign == 1)
        {
            ans *= -1;
        }

        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    Solution sol;
    int result = sol.alternateDigitSum(n);

    cout << "Alternate digit sum: " << result << endl;

    return 0;
}

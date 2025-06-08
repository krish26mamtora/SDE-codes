#include <iostream>
using namespace std;

class Solution
{
public:
    int reverseDigits(int n)
    {
        int ans = 0;
        while (n != 0)
        {
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans;
    }
};

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    Solution sol;
    int reversed = sol.reverseDigits(number);

    cout << "Reversed number: " << reversed << endl;

    return 0;
}

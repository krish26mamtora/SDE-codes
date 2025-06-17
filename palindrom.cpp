#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int n)
    {
        int ans = 0;
        int chk = n;
        while (n != 0)
        {
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans == chk;
    }
};

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    Solution sol;
    bool result = sol.isPalindrome(number);

    if (result)
    {
        cout << number << " is a palindrome." << endl;
    }
    else
    {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}

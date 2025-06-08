#include <iostream>
using namespace std;

class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        return (n % 2) ? n * 2 : n;
    }
};

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    Solution sol;
    int result = sol.smallestEvenMultiple(n);

    cout << "Smallest even multiple of " << n << " is: " << result << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int multiply(int n)
{
    int ans = 1;
    while (n > 0)
    {
        ans = ans * (n % 10);
        n /= 10;
    }

    return ans;
}
int ans(int x, int count)
{
    if (x % 10 == x)
    {
        return count;
    }
    x = multiply(x);
    cout << "new x : " << x << endl;
    return ans(x, ++count);
}

int main()
{
    int x;
    // int count = 0;
    int count = 0;
    cin >> x;
    cout << "final count : " << ans(x, count);
}
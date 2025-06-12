#include <iostream>
#include <vector>
using namespace std;

int add_digit(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += (n % 10);
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
    x = add_digit(x);
    cout << "new x : " << x << endl;
    return ans(x, ++count);
}

int main()
{
    int x;
    int count = 0;
    cin >> x;
    cout << "final count : " << ans(x, count);
}
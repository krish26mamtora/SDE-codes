#include <iostream>
#include <vector>
using namespace std;

int towerofhanoi(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return 1 + 2 * towerofhanoi(n - 1);
}
int main()
{
    int x;
    cin >> x;
    cout << towerofhanoi(x);
}

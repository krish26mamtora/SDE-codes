#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int x = 7;
    map<int, int> m;

    while (x % 2 == 0)
    {
        m[2]++;
        x /= 2;
    }
    for (int i = 3; i * i <= x; i += 2) // Handle odd factors
    {
        while (x % i == 0)
        {
            m[i]++;
            x /= i;
        }
    }
    if (x > 2) // If x is a prime number greater than 2
    {
        m[x]++;
    }
    for (auto it : m)
    {
        cout << it.first << "^" << it.second << " ";
    }

    return 0;
}

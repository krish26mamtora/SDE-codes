#include <iostream>
#include <vector>
using namespace std;

bool checkprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n % 2 == 0)
    {
        return (n == 2);
    }
    for (int i = 3; i <= (n / i); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    if (checkprime(n))
    {
        cout << n << " is prime";
    }
    else
    {
        cout << n << " is Not prime";
    }
}
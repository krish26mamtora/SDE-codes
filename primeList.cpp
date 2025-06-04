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
    int start;
    cout << "Enter starting point : ";
    cin >> start;
    int end;
    cout << "Enter ending point : ";
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        if (checkprime(i))
        {
            cout << i << " ";
        }
    }
}
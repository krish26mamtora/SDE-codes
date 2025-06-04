#include <iostream>
#include <vector>
using namespace std;

bool armstrongNumber(int n)
{
    int chk = n;
    int size = (int)log10(n) + 1;
    int ans = 0;
    while (n != 0)
    {
        ans += pow((n % 10), size);
        n /= 10;
    }
    return (ans == chk);
}

int main()
{
    int start, end;
    cout << "Enter starting point : ";
    cin >> start;
    cout << "Enter Ending point : ";
    cin >> end;

    for (int i = start; i <= end; i++)
    {
        if (armstrongNumber(i))
        {
            cout << i << " is armstrong number" << endl;
        }
    }
    return 0;
}
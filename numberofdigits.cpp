#include <iostream>
using namespace std;

bool isSet(int n)
{
    return (n & 1);
}
int main()
{
    int x = 1;
    cout << "j";
    int n = sqrt(x);
    int count = 0;
    cout << "numebr of bits: " << floor(log2(x)) + 1 << endl;

    while (x > 0)
    {
        if (isSet(x))
        {
            count++;
        }
        x >>= 1;
    }
    cout << "numebr of set bits: " << count << endl;
    return 0;
}
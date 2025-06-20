#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = 8;
    int ans = (x ^ (x & (x - 1)));
    cout << "MSB 0f number is : " << log2(ans);
    return 0;
}
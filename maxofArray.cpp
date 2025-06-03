#include <iostream>
#include <vector>
using namespace std;

void inputVector(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}
int maxofArray(vector<int> &v, int n)
{
    int max = v[0];
    for (int i = 1; i < n; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    return max;
}
void print(int n)
{
    cout << "maximum is: " << n << endl;
}
int main()
{
    int z;
    cin >> z;
    vector<int> v(z);
    inputVector(v, z);
    int max = maxofArray(v, z);
    print(max);
    return 0;
}
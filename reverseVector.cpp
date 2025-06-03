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
void reverseVector(vector<int> &v, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(v[i], v[n - 1 - i]);
    }
    // reverse(v.begin(), v.end());
}
void print(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int z;
    cin >> z;
    vector<int> v(z);
    inputVector(v, z);
    reverseVector(v, z);
    print(v, z);
    return 0;
}
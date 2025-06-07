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

void Makesuffix(vector<int> &v, int n)
{
    for (int i = n - 2; i >= 0; i--)
    {
        v[i] += v[i + 1];
    }
}
void Makeprefix(vector<int> &v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        v[i + 1] += v[i];
    }
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
    int n;
    cin >> n;
    vector<int> v(n, 0);
    inputVector(v, n);
    Makeprefix(v, n);
    print(v, n);
    return 0;
}
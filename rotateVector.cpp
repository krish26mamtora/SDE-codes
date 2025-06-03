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

void rotateVectorClockwise(vector<int> &v, int n, int k)
{
    vector<int> temp;
    for (int i = n - k; i < n; i++)
    {
        temp.push_back(v[i]);
    }
    for (int i = n - 1; i >= k; i--)
    {
        v[i] = v[i - k];
    }
    for (int i = 0; i < k; i++)
    {
        v[i] = temp[i];
    }
}

void rotateVectorAntiClockwise(vector<int> &v, int n, int k)
{
    vector<int> temp;
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        temp.push_back(v[i]);
    }
    for (int i = 0; i < n - k; i++)
    {
        v[i] = v[i + k];
    }
    for (int i = n - k; i < n; i++)
    {
        v[i] = temp[j++];
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
    int z;
    int k = 2;
    cin >> z;
    vector<int> v(z);
    inputVector(v, z);
    // rotateVectorClockwise(v, z, k);
    rotateVectorAntiClockwise(v, z, k);
    print(v, z);
    return 0;
}
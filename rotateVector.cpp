#include <iostream>
#include <vector>
using namespace std;

void inputVector(vector<int> &v, int n)
{
    cout << "Enter vector : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << endl;
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

// void rotateVectorAntiClockwise(vector<int> &v, int n, int k)
// {
//     vector<int> temp;
//     int j = 0;
//     for (int i = 0; i < k; i++)
//     {
//         temp.push_back(v[i]);
//     }
//     for (int i = 0; i < n - k; i++)
//     {
//         v[i] = v[i + k];
//     }
//     for (int i = n - k; i < n; i++)
//     {
//         v[i] = temp[j++];
//     }
// }

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
    cout << "vector size: ";
    cin >> z;
    vector<int> v(z);

    int k;
    cout << "rotation size: ";
    cin >> k; // read number of steps to rotate

    k = k % z; // handle cases where k > z
    inputVector(v, z);

    if (k <= z / 2)
    {
        rotateVectorClockwise(v, z, z - k); // simulate anti-clockwise
    }
    else
    {
        rotateVectorClockwise(v, z, k); // rotate clockwise directly
    }

    print(v, z);
    return 0;
}

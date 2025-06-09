#include <iostream>
#include <vector>
using namespace std;

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
//  for (int x : arr)
//         total_sum += x;

//     int leftsum = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int rightsum = total_sum - leftsum - arr[i];

//         if (leftsum == rightsum)
//             return "YES";

//         leftsum += arr[i];
//     }
string balancedSums(vector<int> arr)
{
    int n = arr.size();
    vector<int> leftsum = arr;
    vector<int> rightsum = arr;

    Makeprefix(leftsum, n);
    Makesuffix(rightsum, n);

    for (int i = 0; i < n; i++)
    {
        if (leftsum[i] == rightsum[i])
        {
            return "YES";
        }
    }

    return "NO";
}

int main()
{
    vector<int> arr = {1, 2, 3, 3};
    cout << balancedSums(arr) << endl;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int st, int mid, int end, vector<int> &b)
{
    int i = st, j = mid + 1, k = st;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        b[k++] = a[i++];
    }
    while (j <= end)
    {
        b[k++] = a[j++];
    }
    for (int l = st; l <= end; l++)
    {
        a[l] = b[l];
    }
}

void merge_sort(vector<int> &arr, int st, int end, vector<int> &temp)
{
    if (st >= end)
        return;

    int mid = st + (end - st) / 2;
    merge_sort(arr, st, mid, temp);
    merge_sort(arr, mid + 1, end, temp);
    merge(arr, st, mid, end, temp);
}

void print(const vector<int> &v)
{
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> t = {1, 3, 6, 8, 3, 2, 1, 4, 99, 6, 9, 11, 2};
    vector<int> temp(t.size());
    merge_sort(t, 0, t.size() - 1, temp);
    print(t);
    return 0;
}

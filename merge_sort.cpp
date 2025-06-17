#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> a, vector<int> b)
{
    int m = a.size();
    int n = b.size();
    vector<int> ans;
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            ans.push_back(a[i++]);
        }
        else
        {
            ans.push_back(b[j++]);
        }
    }
    while (i < m)
    {
        ans.push_back(a[i++]);
    }
    while (j < n)
    {
        ans.push_back(b[j++]);
    }
    return ans;
}

vector<int> merge_sort(vector<int> &arr, int st, int end)
{
    if (st == end)
    {
        return {arr[st]};
    }

    int mid = st + (end - st) / 2;
    vector<int> left = merge_sort(arr, st, mid);
    vector<int> right = merge_sort(arr, mid + 1, end);
    return merge(left, right);
}

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> t = {1, 3, 6, 8, 3, 2, 1, 4, 99, 6, 9, 11, 2};
    vector<int> ans = merge_sort(t, 0, t.size() - 1);
    print(ans);
    return 0;
}

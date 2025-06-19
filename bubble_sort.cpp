#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!swapped)
            break;
    }
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
    bubble_sort(t);
    print(t);
    return 0;
}

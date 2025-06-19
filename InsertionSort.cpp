#include <iostream>

using namespace std;

void print(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertionsort(vector<int> &arr, int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

    cout << "after insertion sort : " << endl;
    print(arr, n);
}
int main()
{

    vector<int> arr = {4, 9, 1, 8, 2};
    cout << "Before sort: " << endl;
    print(arr, 5);
    insertionsort(arr, 5);
    return 0;
}
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

void print_1_to_n_single(int n)
{
    if (n <= 0)
    {
        return;
    }
    else
    {
        print_1_to_n_single(n - 1);
        cout << n;
        if (n == 1)
            cout << "\n";
        else
            cout << " ";
    }
    cout << endl;
}
void print_n_to_1_single(int n)
{
    if (n <= 0)
    {
        cout << endl;
        return;
    }
    else
    {
        cout << n << " ";
        print_n_to_1_single(n - 1);
    }
}

int main()
{

    print_1_to_n_single(5);
    print_n_to_1_single(5);
    return 0;
}
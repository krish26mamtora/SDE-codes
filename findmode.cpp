#include <iostream>
#include <map>
using namespace std;

void inputVector(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}
void printmode(vector<int> v)
{
    cout << "Mode is: ";
    for (int i = 0; i < v.size(); i++)
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
    int mode = 0;
    vector<int> cmp;
    map<int, int> mp;
    for (int i = 0; i < z; i++)
    {
        mp[v[i]]++;
        if (mode > mp[v[i]])
        {
            continue;
        }
        if (mode < mp[v[i]])
        {
            mode = max(mode, mp[v[i]]);
            cmp = {};
        }
        cmp.push_back(v[i]);
    }
    printmode(cmp);
}
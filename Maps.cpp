#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m = {

        {"banana", 3},
        {"orange", 7},
        {"banana", 4},
        {"apple", 5}, // Duplicate key; will overwrite the previous value
        {"grape", 2}};

    for (auto &pair : m)
        cout << pair.first << ": " << pair.second << endl;

    cout << "----------" << endl;
    unordered_map<string, int> mp = {

        {"banana", 3},
        {"orange", 7},
        {"banana", 4},
        {"apple", 5},
        {"grape", 2}};

    for (auto &pair : mp)
        cout << pair.first << ": " << pair.second << endl;
    cout << "----------" << endl;

    for (auto [key, value] : mp)
    {
        cout << key << ": " << value << endl;
    }
    return 0;
}

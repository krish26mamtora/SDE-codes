#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m = {

        {"banana", 3},
        {"orange", 7},
        {"banana", 4},
        {"apple", 5},
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
    cout << "----------" << endl;

    unordered_map<string, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << (*it).first << " : " << (*it).second << endl;
    }
    return 0;
}

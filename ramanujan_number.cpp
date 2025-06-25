#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findRamanujanNumbers(int limit)
{
    unordered_map<int, vector<pair<int, int>>> cubeSums;

    for (int a = 1; a * a * a < limit; a++)
    {
        for (int b = a; a * a * a + b * b * b <= limit; b++)
        {
            int sum = a * a * a + b * b * b;
            cubeSums[sum].push_back({a, b});
        }
    }

    for (auto &entry : cubeSums)
    {
        if (entry.second.size() >= 2)
        {
            cout << "Ramanujan number: " << entry.first << endl;
            for (auto &pair : entry.second)
            {
                cout << pair.first << "^3 + " << pair.second << "^3 = " << entry.first << endl;
            }
            cout << "-----------------------" << endl;
        }
    }
}

int main()
{
    int limit;
    cout << "Enter upper limit: ";
    cin >> limit;

    findRamanujanNumbers(limit);

    return 0;
}

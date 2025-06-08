#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        int size = chalk.size();
        long long sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += chalk[i];
        }
        k %= sum;
        for (int i = 0; i < size; ++i)
        {
            if (chalk[i] > k)
            {
                return i;
            }
            k -= chalk[i];
        }
        return -1;
    }
};

int main()
{
    int n, k;
    cout << "Enter number of students: ";
    cin >> n;

    vector<int> chalk(n);
    cout << "Enter chalk usage for each student:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> chalk[i];
    }

    cout << "Enter total pieces of chalk (k): ";
    cin >> k;

    Solution sol;
    int result = sol.chalkReplacer(chalk, k);

    cout << "Student who will replace the chalk: " << result << endl;

    return 0;
}

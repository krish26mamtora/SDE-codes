#include <iostream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

double percent_diff(double a, double b)
{
    double diff = abs(a - b);
    double perc_diff = diff / min(a, b);
    return perc_diff;
}

int main()
{
    map<double, vector<pair<int, int>>> diff_map;

    for (int i = 1; i <= 38; i++)
    {
        double pow_10 = pow(10, i);
        int power = floor(log2(pow_10));
        double pow_2_left = pow(2, power);
        double pow_2_right = pow(2, power + 1);

        double diff_left = percent_diff(pow_10, pow_2_left);
        double diff_right = percent_diff(pow_10, pow_2_right);

        double min_diff;
        int closest_power_of_2;

        if (diff_left <= diff_right)
        {
            min_diff = diff_left;
            closest_power_of_2 = power;
        }
        else
        {
            min_diff = diff_right;
            closest_power_of_2 = power + 1;
        }

        cout << "Power of 10: " << i << " Closest Power of 2: " << closest_power_of_2 << " Current Min Deviation: " << min_diff << endl;

        diff_map[min_diff].push_back({i, closest_power_of_2});
    }

    cout << "\nSorted Results (Lowest Error to Highest Error):\n";

    for (auto entry : diff_map)
    {
        for (auto p : entry.second)
        {
            cout << "Power of 10: " << p.first
                 << " | Closest Power of 2: " << p.second
                 << " | Percentage Difference: " << entry.first << endl;
        }
    }

    return 0;
}

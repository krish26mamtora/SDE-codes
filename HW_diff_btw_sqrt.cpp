#include <iostream>
#include <cmath>
using namespace std;

bool percent_diff(double actual, double vedic)
{
    double diff = abs(actual - vedic);
    double perc_diff = diff / actual * 100;
    return perc_diff > 1.0;
}

double vedicSqrt(int n)
{
    int s = floor(sqrt(n));
    // int s = perfact_square(n);
    int perfectSquare = s * s;
    double numerator = (n - perfectSquare) / 2.0;
    double denominator = s;
    double approximation = s + (numerator / denominator);

    return approximation;
}

double actual_root(int n)
{
    return sqrt(n);
}

int solve(int range)
{
    int count = 0;
    for (int i = 1; i <= range; i++)
    {
        double actual = actual_root(i);
        double vedic = vedicSqrt(i);
        if (percent_diff(actual, vedic))
        {
            count++;
            cout << "Number: " << i << " | Vedic: " << vedic << " | Actual: " << actual << endl;
        }
    }
    return count;
}

int main()
{
    int range = 1e8;
    int result = solve(range);
    cout << "\nTotal elements with >1 percent difference: " << result << endl;
    return 0;
}

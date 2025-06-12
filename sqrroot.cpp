#include <iostream>
#include <vector>
using namespace std;

double get_deviation(int n, double root)
{
    int est = root * root;
    double diff = abs(n - est);
    double perc_diff = diff / n * 100;
    return perc_diff;
}

double helper(int n, double guess)
{

    while (get_deviation(n, guess) >= 1)
    {
        cout << guess << "\n";
        double div = n / guess;
        double avg = (div + guess) / 2.0;
        guess = avg;
    }
    return guess;
}

double squrroot(int n)
{
    double guess = 1;
    return helper(n, guess);
}
int main()
{
    int x;
    cin >> x;
    cout << squrroot(x);
    // time O(logn)
}
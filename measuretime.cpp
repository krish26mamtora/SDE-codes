
#include <iostream>
#include <chrono>
#include <cmath>
using namespace std;
using namespace chrono;

int find_msb_bit(int n)
{
    int ans = (n ^ (n & (n - 1)));
    volatile double logval = log2(ans);
    return 0;
}
int find_msb_iteration(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            return count;
        }
        n >>= 1;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    const int iterations = 1000000; // 1 million repetitions

    auto start = high_resolution_clock::now();

    for (int i = 0; i < iterations; ++i)
    {
        find_msb_iteration(n);
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end - start);

    double avg_time = duration.count() / static_cast<double>(iterations);

    cout << "Total time: " << duration.count() << " nanoseconds" << endl;
    cout << "Average time per call: " << avg_time << " nanoseconds" << endl;

    return 0;
}

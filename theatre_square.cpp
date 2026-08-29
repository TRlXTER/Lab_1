#include <iostream>
using namespace std;

long long requiredFlagstones(long long n, long long m, long long a)
{
    long long alongN = (n + a - 1) / a;
    long long alongM = (m + a - 1) / a;
    return alongN * alongM;
}

#ifdef RUN_TESTS

int main()
{
    int failed = 0;

    if (requiredFlagstones(6, 6, 4) != 4)
    {
        cout << "Test 1 failed\n";
        failed++;
    }

    if (requiredFlagstones(1, 1, 1) != 1)
    {
        cout << "Test 2 failed\n";
        failed++;
    }

    if (requiredFlagstones(10, 1, 3) != 4)
    {
        cout << "Test 3 failed\n";
        failed++;
    }

    if (requiredFlagstones(9, 9, 3) != 9)
    {
        cout << "Test 4 failed\n";
        failed++;
    }

    if (failed == 0)
        cout << "All Theatre Square tests passed\n";

    return failed;
}

#else

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    cout << requiredFlagstones(n, m, a) << '\n';
    return 0;
}

#endif

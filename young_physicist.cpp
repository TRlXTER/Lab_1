#include <iostream>
using namespace std;

bool isEquilibrium(const int forces[][3], int n)
{
    int sumX = 0;
    int sumY = 0;
    int sumZ = 0;

    for (int i = 0; i < n; i++)
    {
        sumX += forces[i][0];
        sumY += forces[i][1];
        sumZ += forces[i][2];
    }

    return sumX == 0 && sumY == 0 && sumZ == 0;
}

#ifdef RUN_TESTS

int main()
{
    int failed = 0;

    int test1[][3] =
    {
        {4, 1, 7},
        {-2, 4, -1},
        {1, -5, -3}
    };

    if (isEquilibrium(test1, 3) != false)
    {
        cout << "Test 1 failed\n";
        failed++;
    }

    int test2[][3] =
    {
        {3, -1, 7},
        {-5, 2, -4},
        {2, -1, -3}
    };

    if (isEquilibrium(test2, 3) != true)
    {
        cout << "Test 2 failed\n";
        failed++;
    }

    int test3[][3] =
    {
        {0, 0, 0}
    };

    if (isEquilibrium(test3, 1) != true)
    {
        cout << "Test 3 failed\n";
        failed++;
    }

    int test4[][3] =
    {
        {1, 0, 0},
        {-1, 0, 0},
        {0, 5, 0}
    };

    if (isEquilibrium(test4, 3) != false)
    {
        cout << "Test 4 failed\n";
        failed++;
    }

    if (failed == 0)
        cout << "All Young Physicist tests passed\n";

    return failed;
}

#else

int main()
{
    int n;
    cin >> n;

    int forces[100][3];

    for (int i = 0; i < n; i++)
        cin >> forces[i][0] >> forces[i][1] >> forces[i][2];

    cout << (isEquilibrium(forces, n) ? "YES" : "NO") << '\n';
    return 0;
}

#endif

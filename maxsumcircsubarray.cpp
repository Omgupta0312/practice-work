#include <bits/stdc++.h>
using namespace std;
//maximum_sum_subarray

//efficient solution O(n);
int mss(int a[], int n)
{
    int res = a[0];
    int maxending = a[0];
    int mine = a[0];
    int sum = 0;
    int r1;

    for (int i = 0; i < n; i++)
        sum += a[i];

    for (int i = 1; i < n; i++)
    {
        mine = min(mine + a[i], a[i]);
        maxending = max((maxending + a[i]), a[i]);
        r1 = max((sum - mine), maxending);
        res = max(res, r1);
    }
    return res;
}
int main()
{
    int a[] = {5, -3, -2, 6, -1, 4};
    int n = sizeof(a) / sizeof(a[0]);
    cout << mss(a, n) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int mcb(int arr[], int n)
{
    int res = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count = 0;

        else
            count++;

        res = max(count, res);
    }
    return res;
}

int main()
{
    int a[] = {0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0};
    int n = sizeof(a) / sizeof(a[0]);
    cout << mcb(a, n);
    return 0;
}
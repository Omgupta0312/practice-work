#include <bits/stdc++.h>
using namespace std;

int majority(int a[], int n)
{
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[res] == a[i])
            count++;
        else
            count--;

        if (count == 0);
        {
            count = 1;
            res = i;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[res] == a[i])
            count++;
    }
    if (count <= n / 2)
        return -1;

    return res;
}

int main()
{
    int a[] = {6, 8, 4, 8, 8};
    int n = sizeof(a) / sizeof(a[0]);
    cout << majority(a, n) << " " << a[majority(a, n)];
    return 0;
}
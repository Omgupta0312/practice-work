#include <bits/stdc++.h>
using namespace std;

void mergesort(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }

    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }

    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }
}

int main()
{
    int a[] = {1, 23, 4, 45, 334, 56, 65};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);

    int b[] = {26, 34, 56, 44, 37, 8, 6, 8, 79, 32};
    int m = sizeof(b) / sizeof(b[0]);
    sort(b, b + m);

    mergesort(a, b, n, m);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void leftshift(int arr[], int n, int d)
{
    int t[d];
    for (int i = 0; i < d; i++)
        t[i] = arr[i];

    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];

    for (int i = 0; i < d; i++)
        arr[n - d + i] = t[i];

    for (int i=0;i<n;i++)
        cout <<arr[i] << " ";
}

int main()
{
    int d;
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "enter d";
    cin >> d;

    leftshift(a, n, d);

    return 0;
}
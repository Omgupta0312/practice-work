#include <bits/stdc++.h>
using namespace std;

void insertionsort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j;
        for (j = i - 1; j >= 0 && a[j] > key; j--)
            a[j + 1] = a[j];

        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {2, 1, 3, 56, 43, 67, 22, 88, 55, 76, 2};
    int n = sizeof(a) / sizeof(a[0]);
    insertionsort(a, n);
    for (auto x : a)
        cout << x << " ";
    return 0;
}
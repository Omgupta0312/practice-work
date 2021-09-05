#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int *t;
    t = x;
    x = y;
    y = t;
}
void selectionsort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minindx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minindx])
            {
                swap(a[minindx], a[j]);
            }
        }
    }
}

int main()
{
    int a[] = {2, 1, 3, 56, 43, 67, 22, 88, 55, 76, 2};
    int n = sizeof(a) / sizeof(a[0]);
    selectionsort(a, n);
    for (auto x : a)
        cout << x << " ";
    return 0;
}
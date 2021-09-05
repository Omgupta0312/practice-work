#include <bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int *t;
    t = x;
    x = y;
    y = t;
}

int hp(int a[], int l, int h)
{
    int i = l - 1, j = h + 1;
    int pivot = a[l];
    while (true)
    {
        do
        {
            i++;
        } while (a[i] < pivot);

        do
        {
            j--;
        } while (a[j] > pivot);

        if (i >= j)
            return j;
        swap(a[i], a[j]);
    }
}

void quicksort(int a[], int l, int h)
{
    if (l < h)
    {
        int p = hp(a, l, h);
        quicksort(a, l, p);
        quicksort(a, p + 1, h);
    }
}

int main()
{
    int a[] = {2, 1, 3, 56, 43, 67, 22, 88, 55, 76, 2};
    int n = sizeof(a) / sizeof(a[0]);
    quicksort(a, 0, n - 1);

    for (auto x : a)
        cout << x << " ";
    return 0;
}
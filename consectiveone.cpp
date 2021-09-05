#include <bits/stdc++.h>
using namespace std;

int cons_one_sorted_bs(int a[], int n)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == 0)
            l = mid + 1;
        else
        {
            if (mid == 0 || a[mid - 1] != a[mid])
                return (n - mid);
            else
                h = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << cons_one_sorted_bs(arr, n);
    return 0;
}

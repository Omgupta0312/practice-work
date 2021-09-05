#include <bits/stdc++.h>
using namespace std;

int firstoccbybinarysearch(int a[], int l, int h, int k)
{
    if (l > h)
        return -1;

    int mid = floor((l + h) / 2);
    if (a[mid] < k)
        return firstoccbybinarysearch(a, mid + 1, h, k);
    else if(a[mid]>k)
        return firstoccbybinarysearch(a, l, mid - 1, k);
    else
    {
        if (mid == 0 || a[mid - 1] != a[mid])
            return mid;
        else
            return firstoccbybinarysearch(a, l, mid - 1, k);
    }
}

int main()
{
    int arr[] = {1, 10, 15,24, 24, 24, 24, 27, 27, 28, 30};
    int b[2] = {10, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstoccbybinarysearch(arr, 0, n-1, 24);

    return 0;
}

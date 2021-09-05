#include <bits/stdc++.h>
using namespace std;

int lastoccbybinarysearch(int a[], int n, int k)
{  int l=0,h=n-1;
    while (l <= h)
    {
        int mid = floor((l + h) / 2);
        if (a[mid] < k)
        l=mid+1;
            
        else if (a[mid] > k)
        h=mid-1;
        else
        {
            if (mid!=(n-1) || a[mid + 1] != a[mid])
                return mid;
            else
            l=mid+1;
            
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 10, 15, 24, 24, 24, 24, 27, 27, 28, 30};
    int b[2] = {10, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << lastoccbybinarysearch(arr,n, 24);

    return 0;
}

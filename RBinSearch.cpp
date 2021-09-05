#include <bits/stdc++.h>
using namespace std;

int binarysearch(int a[], int l, int h, int k)
{

    if (l <= h)
    {
        int mid = (l + h) / 2;

        if (a[mid] == k)
            return mid;
        else if (a[mid] < k)
            return binarysearch(a, mid + 1, h, k);
        else
            return binarysearch(a, l, mid - 1, k);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 10, 15, 24, 27,27, 28, 30};
    int b[2]={10,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<n<<" "<< binarysearch(arr, 0,n-1, 30);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int firstoccbybinarysearch(int a[], int n, int k)
{ int l=0,h=n-1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] < k)
        l=mid+1;
            
        else if (a[mid] > k)
        h=mid-1;
        else
        {
            if (mid == 0 || a[mid - 1] != a[mid])
                return mid;
            else
            h=mid-1;
            
        }
    }
    return -1;
}

int lastoccbybinarysearch(int a[],int n, int k)
{ int l=0,h=n-1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] < k)
        l=mid+1;
            
        else if (a[mid] > k)
        h=mid-1;
        else
        {
            if (mid==n-1 || a[mid] != a[mid+1])
                return mid;
            else
            l=mid+1;
            
        }
    }
    return -1;
}

int duplicatecount(int a[],int n,int k)
{

    int first=firstoccbybinarysearch(a,n,k);
    if(first==-1)
    return 0;


    return (lastoccbybinarysearch(a,n,k)-first+1);
}


int main()
{
    int arr[] = {1, 10, 15, 24, 24, 24, 24, 27, 27, 28, 30};
    int b[2] = {10, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<duplicatecount(arr,n,25);

    return 0;
}

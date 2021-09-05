#include<bits/stdc++.h>
using namespace std;


void swap(int *x, int *y)
{
    int *t;
    t = x;
    x = y;
    y = t;
}

void countsort(int a[],int n)
{
    int res=INT_MIN;
    for(int i=0;i<n;i++)
    {
        res=max(res,a[i]);
    }

    int k[20]={0};
    for(int i=0;i<n;i++)
    k[a[i]]++;

    for(int i=1;i<=res;i++)
    k[i]+=k[i-1];


    int outarr[n]={0};
    for(int i=n-1;i>=0;i--)
    outarr[--k[a[i]]]=a[i];

    for(int i=0;i<n;i++)
    a[i]=outarr[i];



}

int main()
{
    int arr[]={1,2,3,2,3,4,2,1,5,4,6,4,5,2,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    countsort(arr,n);

    for(auto x:arr)
    cout<<x<<"  ";
    return 0;
}

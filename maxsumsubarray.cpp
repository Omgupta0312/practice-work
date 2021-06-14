#include <bits/stdc++.h>
using namespace std;
//maximum_sum_subarray

//efficient solution O(n);
//kadane's algorithm;
int mss(int a[], int n)
{
    int res = a[0];
    int maxending = a[0];

    for (int i = 1; i < n; i++)
    {
        maxending = max((maxending + a[i]), a[i]);
        res = max(res, maxending);
    }
    return res;
}

//  timecomplexity=O(n*n)
int summax(int a[],int n)
{
    int res=a[0];
    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            curr=curr+a[j];
            res=max(res,curr);
        }
    }
    return res;
} 
 

int main()
{
    int a[] = {-2,-3,8,-7,-1,-2,3};
    int n = sizeof(a) / sizeof(a[0]);
    cout << mss(a, n) << endl;
    return 0;
}
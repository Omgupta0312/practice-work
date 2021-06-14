#include <bits/stdc++.h>
using namespace std;

int mleo(int a[],int n)
{
    int res=1,curr=1;
    for(int i=1;i<n;i++)
    {
        if((a[i] % 2 == 0 && a[i- 1] % 2 != 0) || (a[i] % 2 != 0 && a[i - 1] % 2 == 0))
       {
            curr++;
            res=max(res,curr);
       }
        else curr=1;
    }
    return res;
}

int mleo2(int a[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((a[j] % 2 == 0 && a[j - 1] % 2 != 0) || (a[j] % 2 != 0 && a[j - 1] % 2 == 0))
                curr++;
            else
                break;
        }
        res = max(res, curr);
    }
    return res;
}

int main()
{
    int arr[] = {10, 12, 14, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mleo(arr, n) << endl;
    return 0;
}
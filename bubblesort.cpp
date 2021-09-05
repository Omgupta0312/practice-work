#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int *t;
    t = x;
    x = y;
    y = t;
}

void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
             {
                 swap(a[j],a[j+1]);
                 swapped = true;
             }    
        }
        if(swapped==false)
        break;
    }
}

int main()
{
    int a[] = {2, 1, 3, 56, 43, 67, 22, 88, 55, 76, 2};
    int n = sizeof(a) / sizeof(a[0]);
    bubblesort(a, n);
    for (auto x : a)
        cout << x << " ";
    return 0;
}
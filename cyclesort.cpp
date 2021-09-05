#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int *temp;
    temp=x;
    x=y;
    y=temp;
}

void cyclesort(int a[],int n)
{
    int pos=0,cs=0;
    int item=a[cs];
    for(int i=cs+1;i<n;i++)
    {
        pos=cs;
        if(a[i]<item)
        pos++;

        swap(item,a[pos]);

        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1;i<n;i++)
            {
                if(a[i]<item)
                pos++;
            }
            swap(item,a[pos]);
        }
    }
}

int main()
{
    int a[]={20,40,50,10,30};
    int n=sizeof(a)/sizeof(a[0]);
    cyclesort(a,n);
    for(auto x:a)
    cout<<x<<" ";


    return 0;
}
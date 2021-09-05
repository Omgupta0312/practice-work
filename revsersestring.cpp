
#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int *t;
    t = x;
    x = y;
    y = t;
}

void reverse(char s[],int l,int h)
{
    while(l<=h)
    {
        swap(s[l],s[h]);
        l++;
        h--;
    }
}


void revstring(char s[],int n)
{
    int start=0,end=0;
    while(end<n)
    {
        if(s[end]==' ')
        {
            reverse(s,start,end-1);
            start=end+1;

        }
        end++;
    }
    reverse(s,start,n-1);
    reverse(s,0,n-1);
}


int main()
{
    char s[]="welcome to gfg";
    int n=sizeof(s)/sizeof(s[0]);
    revstring(s,n);
    for(auto x:s)
    cout<<x;
    return 0;
}
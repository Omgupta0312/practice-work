#include<bits/stdc++.h>
using namespace std;

int digitsum(int n)
{ static int s=0;
    if(n==0) return 0;
    s+=n%10;
    digitsum(n/10);
    // even n%10 + digitsum(n/10) can be return in above func. to avoid any static variable in func.
    return s;
}

int main()
{
    int r= digitsum(32451);
    cout<<r;
    return 0;
}
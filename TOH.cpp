#include<bits/stdc++.h>
using namespace std ;
void toh(int n,int a,int b,int c)
{
    if(n>0)
    {
        toh(n-1,a,c,b);
        cout<<"move upper disc from  "<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
    }
}


int main()
{    int n;
    cout<<"enter n";
    cin>>n;
    toh(n,1,2,3);
    return 0;
}
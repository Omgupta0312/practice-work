#include <iostream>

using namespace std;

int main() {

int n,i;

cout<<"enter n"<<endl;

cin>>n;

int arr[n];

for(i=0;i<n;i++)
{
cout<<"enter value in "<<i<<"->";
cin>>arr[i];
}

cout<<endl<<endl;

for(i=(n-1); i >=0; i--)
{
cout<<arr[i]<<endl;
}

return 0;
}



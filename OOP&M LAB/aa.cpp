#include<iostream>
using namespace std;
int main()
{
    int i,fac=1,n;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<=n;i++)
    fac=i*fac;
    cout<<fac;
    return 0;
}
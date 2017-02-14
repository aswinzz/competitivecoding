#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100001],t,n,i;
    cin>>n>>t;
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=t;i<n;i++)
     cout<<a[i]<<" ";
    for(i=0;i<t;i++)
        cout<<a[i]<<" ";
}

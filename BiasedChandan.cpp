#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,a[10000];
    long int sum;
       sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            if((a[i]==0)&&(i!=0))
            sum=sum-a[i-1];
        }
        cout<<sum<<"\n";


}

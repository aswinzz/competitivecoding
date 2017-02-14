#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,a[100000],q,x,y,z,data,freq[100000],s,maxi,k;

cin>>n;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cin>>q;
while(q--)
{

cin>>x>>y>>z;
if(x==1)
{
maxi=0;
for(k=0;k<100000;k++)
{
freq[k]=0;
}
for(i=0;i<n;i++)
{
data=a[i];
freq[data]++;
}
maxi=freq[a[y]];
for(s=y+1;s<z;s++)
{
if(maxi<freq[a[s]])
{maxi=freq[a[s]];
}
}
cout<<maxi<<"\n";
}
else if(x==2)
{
a[y]=z;
}
}
return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,n,x,q,a,b,l;
vector <int> v;
cin>>n;
for(i=0;i<n;i++)
{
cin>>x;
v.push_back(x);
}
cin>>q;
v.erase(v.begin()+q-1);
cin>>a>>b;
v.erase(v.begin()+a-1,v.begin()+b-1);
l=v.size();
cout<<l<<"\n";
for(i=0;i<l;i++)
cout<<v[i]<<" ";
}

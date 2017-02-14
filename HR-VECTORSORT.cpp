#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,x,n;
vector <int> vect;
cin>>n;
for(i=0;i<n;i++)
{
cin>>x;
vect.push_back(x);
}
sort(vect.begin(),vect.end());
for(i=0;i<n;i++)
{
cout<<vect[i]<<" ";
}
}

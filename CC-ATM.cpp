#include<bits/stdc++.h>
using namespace std;
int main()
{
float bal;
int x;
cin>>x>>bal;

if(x<=bal)
{
if(x%5==0)
{
bal=bal-float(x)-0.50;
}
}
cout<<setprecision(2)<<fixed<<bal;
return 0;
}

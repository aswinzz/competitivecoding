#include <iostream>
using namespace std;

int main() {
long int t,n,k,i;
cin>>t;
while(t--)
{
    cin>>n>>k;
    for(i=n+1;i<=1000000001;i++)
    {
        if(i%k==0)
        break;
    }
    cout<<i<<"\n";
}

	return 0;
}

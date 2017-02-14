#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,n,i,a[10000];
    stack <int> s;
    int sum;
       sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=0)
            {
                s.push(a[i]);
                c++;
            }
            else if((a[i]==0)&&(i!=0))
            {
                s.pop();
                c--;
            }
        }
        for(i=0;i<c;i++)
        {
            sum+=s.top();
            s.pop();
        }
        cout<<sum<<"\n";

    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int main() {
    map <string,int> m;
    int n,q,mark;
    string name;
    cin>>q;
    while(q--)
        {
        cin>>n;
        if(n==1)
            {
            cin>>name;
            cin>>mark;
           mark+=m[name];
            m.insert(make_pair(name,mark));
        }
        else if(n==2)
            {
            cin>>name;
            m.erase(name);
        }
        else if(n==3)
            {
            cin>>name;
            cout<<m[name]<<"\n";
        }
    }
    return 0;
}

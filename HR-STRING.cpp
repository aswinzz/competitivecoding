#include<bits/stdc++.h>
using namespace std;
int main()
{
    string string1,string2;
    cin>>string1;
    cin>>string2;
    cout<<string1.size()<<" "<<string2.size()<<"\n";
    cout<<string1+string2<<"\n";
    swap(string1[0],string2[0]);
    cout<<string1<<" "<<string2;
    return 0;
}


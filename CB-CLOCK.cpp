#include <bits/stdc++.h>
using namespace std;

int main() {
	float h,m,ha,ma,angle;
	int t;
	cin>>t;
	while(t--)
	{
	 cin>>h>>m;
	 if(h==12)
	 h=0;
	 if(m==60)
	 m=0;
	 ha=0.5*((60*h)+m);
	 ma=m*6;
	 angle=abs(ha-ma);
	 if(angle>180)
	 angle=360-angle;
	 cout<<fixed<<setprecision(1)<<angle<<"\n";
	}

	return 0;
}

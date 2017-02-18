#include <bits/stdc++.h>
using namespace std;

int main() {
	float ha,ma,angle;
	int t,h,m;
	cin>>t;
	while(t--)
	{

     scanf("%d:%d",&h,&m);
	 if(h>=12)
	 h=0;
	 if(m>=60)
	 m=0;
      ma=((float(m))/60)*360;
        ha=(((float(h))+((float(m))/60))/12)*360;
	 //ha=0.5*float(((60*h)+m));
	 //ma=float(m*6);
	 angle=abs(ha-ma);
	 if(angle>180)
	 angle=360-angle;
	 cout<<fixed<<setprecision(1)<<angle<<"\n";
	}

	return 0;
}

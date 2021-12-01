// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D?mobile=falseusing namespace std;
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a+b-c == d) {cout<<"YES"<<"\n";}
	else if(a*b-c == d) {cout<<"YES"<<"\n";}
	else if(a*b+c == d) {cout<<"YES"<<"\n";}
	else if(a+b-c == d) {cout<<"YES"<<"\n";}
	else if(a+b*c == d){ cout<<"YES"<<"\n";}
	else if(a-b+c == d){ cout<<"YES"<<"\n";}
	else if(a-b*c == d){ cout<<"YES"<<"\n";}
	else {cout<<"NO"<<"\n";}
	
}
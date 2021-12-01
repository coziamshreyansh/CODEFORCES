// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A?locale=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x, p;
	cin>>x>>p;
	float amount = (p*100)/(100-x);
	cout<<fixed<<setprecision(2)<<amount<<"\n";
}
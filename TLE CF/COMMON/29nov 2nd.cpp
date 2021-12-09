#include<bits/stdc++.h>
using namespace std;
void solve(string &num, int n){
	if(n == 2 && num[0] >= num[1])
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES"<<"\n"; 
		cout<<2<<"\n";
		cout<<num[0]<<" "<<num.substr(1);	
	}
	
    cout<<"\n";
}
int main()
{
	
	int q; cin>>q;
	int size;
	string num;
	while(q--)
	{
		cin>>size;
		cin>>num;
		solve(num, size);
	}
	return 0;
}
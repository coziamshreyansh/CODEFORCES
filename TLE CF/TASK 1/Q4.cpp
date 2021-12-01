#include<iostream>
using namespace std;
int main()
{
	int t; cin>>t;
	long long l, r;
	while(t--){
		cin>>l>>r;
		if(l>r){swap(l,r);}
		l = l-1;
		cout<<( (r * (r+1)) / 2 -  (l * (l+1)) / 2);
		cout<<"\n";
	}
	return 0;
}
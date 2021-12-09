#include<bits/stdc++.h>
using namespace std;
void solve(int *arr, int n){
	
	bool flag = false;

	for (int i = 0; i < n-1; ++i)
	{
		if(a[i] != a[i+1]){swap(a[i], a[i+1]); flag = true;}
	}
	if(flag){
		cout<<YES<<"\n";
		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}
	}
	else {cout<<"NO";}

	cout<<"\n";
}
int main()
{
	int quer; cin>>quer;
	int n;
	while(quer--){
		cin>>n;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		solve(arr, n);
	}
	return 0;
}
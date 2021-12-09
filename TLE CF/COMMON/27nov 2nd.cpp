#include<iostream>
using namespace std;
int main()
{
	int queries; cin>>queries;
	int n, l, r, k;

	while(queries--){
		cin>>n>>l>>r>>k;
		int *arr = new int[n];
		for(int i=0; i<n;i++){cin>>arr[i];}
		sort(arr, arr+n);
		int sum = 0;
		int count = 0;
		for(int i=0; i<n; i++)
		{
			if((l<= arr[i] && r >= arr[i]) && sum  <= k)
			{
				sum += arr[i];
				if(sum <= k){count++;}
			}
		}
		cout<<count<<"\n";

	}
	return 0;
}
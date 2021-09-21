#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
vector<int> solve(int size, int *arr)
{
	vector<int> ans(size);
	if(size <= 2)
	{
		for (int i = 0; i < size; ++i)
		{
			ans[i] = arr[i];
		}
		return ans;
	}
	int i = 0; int j=size-1; int ans_index = 0;
	if(!(size % 2))
	{
		while(i<j)
		{
			ans[ans_index] = arr[i];
			ans_index++;
			ans[ans_index] = arr[j];
			ans_index++;
			i++;
			 j--;
		}
		return ans;
	}
	else if(size%2 != 0)
	{
		while(i<j)
		{
 
			ans[ans_index] = arr[i];
			ans_index++;
			ans[ans_index] = arr[j];
			ans_index++;
			i++;
			 j--;
		}
		if(i == j)
		{
			ans[ans_index] = arr[j];
 
		}
		return ans;
	}
}
int main()
{
	int t; cin>>t;
	int n; 
	while(t--)
	{
		cin>>n;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		vector<int> ans = solve(n, arr);
		for (int i = 0; i < n; ++i)
		{
			cout<<ans[i]<<" ";
		}
		cout<<nl;
		delete []arr;
	}
}

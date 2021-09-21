// #include<bits/stdc++.h>
// #define nl "\n"
// using namespace std;
// void solve(int n, int x)
// {
// 	if(n == 1)
// 	{
// 		cout<<"0"<<nl;
// 		return;
// 	}
// 	int *arr = new int[n];
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>arr[i];
// 	}
// 	if(d == 0)
// 	{
// 		sort(arr, arr+n);
// 		if(arr[0] == arr[n-1])
// 		{
// 			cout<<"0"<<nl;
// 			return ;
// 		}
// 		else // start deleting from last untill you find arr[0]==arr[i]
// 		{		// or start compairing from i=1 till arr[0] = arr[i](maintain a count) then do size - count + 1(+1 coz we have not counted zeroth index)
// 			int count= 0;
// 			for (int i = 1; i < n; ++i)
// 			{
// 			     if(arr[0] != arr[i])
// 			     {
// 			     	break;
// 			     }
// 			     count++;
// 			}
// 			cout<<(size - count + 1)<<nl;
// 			return ;
// 		}
// 	}
// 	// approach1(n^2) from last(n-2 to 0) check if (a[n] - a[i] > d) how many satisfies the cond
// 	// it means how many are from from current last elem 
// 	// and if nfar > size/2 then we will remove number from last 
// 	// else will do the same thing from 1 to n-1 if (a[i] - a[0] > d)
// 	// and remove from first if there are nfar > size/2 from first number(a[0])
// 	sort(arr, arr+n);
// 	int nFar=0;
// 	bool nihua = true;
// 	int i=0; int j = n-1;
// 	while(nihua)
// 	{
 
// 		// 
// 		for (int aux_j = j; aux_j>=i;  j++)
// 		{
// 			if(a[j] - a[i])
// 		}
// 	}
// }
// int main()
// {
// 		int n, d; cin>>n>>d;
// 		solve(n,d);
	
// }
/////////////////////////////////////Approach 2 O(n^2)
#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int arr[100001]; 
int n,d, ans=0;
int main()
{
 
	cin>>n>>d;
	
	for (int i = 1; i <= n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr+1, arr+n+1);
	// num will store current a[i]
	// ans will have max possible numbers to be kept and so we gonna remove (n - ans) no.s of element 
	//  kk will have j i.e no of possible indexes till where diff of a[j] - a[i](i.e num) is < d
	int ans = 0; int num = arr[0]; int kk = -1;
 
	for (int i = 1; i <= n; ++i)
	{
		num = arr[i]; kk = -1;
		for (int j = i; j <= n; ++j)
		{
			if(arr[j] - num > d) // if diff > d break coz furthermore points we dont want
			{
				
				break;
			}
			kk = j;
		}
		ans = max(ans, kk - i + 1); // kk - i + 1 tells no.s whose diff with a[i] is < d
	}
	cout<<(n-ans); // n-ans, coz ans have max no. of points to be stored so we will be removing n-ans points
	delete []arr;
}

// 93 ms
#include<bits/stdc++.h>
#define lb lower_bound 
#define ll long long int
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main()
{
	fast();
	int q; cin>>q;
	while(q--)
	{
		ll ans = 0;
		int n; cin>>n;
		ll *arr = new ll[n];

		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>arr[i];

		}
		if(n == 2)
		{
			cout<<(arr[0]*arr[1])<<"\n";
		}
		else
		{
a
			for (int i = 0; i < n-1; ++i)
			{
				/* code */
				ans = max(arr[i]*arr[i+1],ans);

			}
			cout<<ans<<"\n";
		}

		
	}
	return 0;
}

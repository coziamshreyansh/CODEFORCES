#include<bits/stdc++.h>
	// #include<ext/pd_ds/assoc_container.hpp>
	 
	// using namespace __gnu_pbds;
	using namespace std;
 
	#define ff first
	#define ss second
	#define int long long int
	#define pb push_back
	#define mp make_pair
	#define pii pair<int, int>
	#define vi vectro<int>
	#define mii map<int, int>
	#define setbits(x) __builtin_popcountll(x)
	#define zrobits(x) __builtin_ctzll(x)
	#define mod 1e9+7
	#define inf 1e18
	#define ps(x,y) fixed<<setprecision(y)<<x
	#define mk(arr, n, type) type *arr=new type[n]
	#define w(x) int x; cin>>x; while(x--)
	void fastio(){
		ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    return;
	}
	void shanx(){
		int n, m, i, j, ti, tj;
		cin>>n>>m>>i>>j>>ti>>tj;
		int di = 1, dj = 1, ans = 0;
		while(i != ti && j != tj){
			if(i+di > n || i+di < 1) di *= -1;
			if(j+dj > m || j+dj < 1) dj *= -1;
			
			i += di; j += dj; ans++;
		}
		cout<<ans<<"\n";
		return;
 
	} 
	int32_t main()
	{
		fastio();
		w(queries){
			shanx();
		}
	}

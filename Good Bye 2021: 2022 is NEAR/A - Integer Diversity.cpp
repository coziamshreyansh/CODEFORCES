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
		int n; cin>>n;
		mk(arr, n, int);
		unordered_map<int, int> memo;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			memo[arr[i]]++;
		}
		int cnt = memo.size(); 
		for (auto it:memo)
		{
		     int a = it.first, b = it.second; 
			if(b >= 2 && (a != 0 && (memo.find(-a) == memo.end()))){cnt++;}
		}
		cout<<cnt<<"\n";
		return;
 
 
	} 
	int32_t main()
	{
		fastio();
		w(queries){
			shanx();
		}
	}

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
		int l,m,n;
		cin>>l>>m>>n;
		int perimeter = l+m+n;
		if(perimeter % 2 == 0)
		{
			int max_side = max(l, max(n,m));
		    int min_side = min(l, min(n,m));
			int another = perimeter-(max_side+min_side);
			if(min_side == another || another == max_side)
			{
				if(min_side == another && max_side%2 ==0){cout<<"YES"<<"\n"; return;}
				else if(min_side == another && max_side%2 !=0){cout<<"YES"<<"\n"; return;}
				if(max_side == another && min_side%2 ==0){cout<<"YES"<<"\n"; return;}
				else if(max_side == another && min_side%2 !=0){cout<<"YES"<<"\n"; return;}
			}
			else
			{
				if(another+min_side == max_side){cout<<"YES"<<"\n"; return;}
				else{cout<<"NO"<<"\n"; return;}
			}
			
		
		
		}
		else
			cout<<"NO"<<"\n";
			return;
		
		
		
	} 
	int32_t main()
	{
		fastio();
		w(queries){
			shanx();
		}
	}

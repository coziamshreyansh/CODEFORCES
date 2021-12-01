#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
// void init_code(){
//     fast_io;
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif 
// }


int main() {
   fast_io;
   ll x,y,p,q;
   cin>>x>>y>>p>>q;
   ll ans = x*y*p*q;
   
   string ans1 = "";
   int j=0;
   while(j < 2 && ans>=0)
   {
      ans1 += '(ans % 10)';
      ans /= 10;
      j++;
   }
   reverse(ans1.begin(),ans1.end());

   cout<<"\n";
   return 0;
}
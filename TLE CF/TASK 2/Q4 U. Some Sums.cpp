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

bool digitsumcheck(int num, int a, int b)
{
   int sum =0;
   while(num > 0)
   {
      sum += num%10;
      num /= 10;
   }
   if(sum >= a && sum <= b)
   {
      return true;
   }
   return false;
}
int main() {
   fast_io;
   int n, a, b;
   cin>>n>>a>>b;
   bool *include = new bool[n+1]; 
   int sum = 0;
   for (int i = 0; i < n+1; ++i)
   {
      if(digitsumcheck(i, a+b))
      {
         include[i] = true;
         sum += include[i];
      }
      else
      {
         include[i] = false;
      }
   }
   cout<<"\n";
   delete []include;
   return 0;
}
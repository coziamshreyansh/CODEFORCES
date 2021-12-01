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
   read(t);
   int n;

   while(t--)
   {
      cin>>n;
      ll *arr = new ll[n];
      for (int i = 0; i < n; ++i)
      {
         cin>>arr[i];
      }
      sort(arr, arr+n);
      ll int sum = 0;
      int po2[] = {2, 4, 8, 16};
      int found = 0, found_index = -1;
      for (int i = n-1; i >= 0; --i)
      {
         if(!binary_search(po2, po2+4, arr[i]))
            {found = arr[i]; found_index = i; break;}
      }
      if(found == 0){
         for(int i=0;i<n-1;i++)
         {
            while((arr[i] % 2 == 0 )&&(arr[i]>1)){arr[n-1] *= 2; arr[i] /= 2;}
         }
      }
      else{
         for (int i = 0; i < n; ++i)
         {
            if(i != found_index)
            {
            while((arr[i] % 2 == 0 )&&(arr[i]>1)){arr[found_index] *= 2; arr[i] /= 2;}
            }
         }
      }
      for (int i = 0; i < n; ++i)
      {
         sum+=arr[i];
      }
      cout<<sum;
      cout<<"\n";
      delete []arr;
   }   
   return 0;
}
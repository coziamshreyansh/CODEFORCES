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
   read(n);
   int *arr = new int[n];
   // in one case let 0th elem be negative and check number of operations to make it alternate
   // in one case let 0th elem be positive and check number of operations to make it alternate
   for(int i=0; i<n; i++){
      cin>>arr[i];

   }
   int count1=0,count2 =0;
   if(arr[0] > 0)
   {
      
      // count how many even index are not positive
      // also count how many odd index arenot negative
      for (int i = 0; i < n; ++i)
      {
         if(i % 2 == 0 && arr[i] < 0){count1++;}
         else if(i % 2 != 0 && arr[i] > 0){count1++;}
      }
      // for count2 we assumed by  changing sign of 0th element and checking how many operations are required to make array alternate
      count2++; // coz we changed sign of 0th elem so it took 1 operation
      // now your 0th elem is -ve so even index elem must be -ve and odd elem index must be +ve
      // so just count how many of them are following
      for (int i = 1; i < n; ++i)
      {
         if(i % 2 == 0 && arr[i] > 0){count2++;}
         else if(i % 2 != 0 && arr[i] < 0){count2++;}
      }
      cout<<min(count1, count2);
   }
   else{
      
      // count how many even index are not positive
      // also count how many odd index arenot negative
      for (int i = 0; i < n; ++i)
      {
         if(i % 2 == 0 && arr[i] > 0){count1++;}
         else if(i % 2 != 0 && arr[i] < 0){count1++;}
      }
      count2++;
      for (int i = 1; i < n; ++i)
      {
         if(i % 2 == 0 && arr[i] < 0){count2++;}
         else if(i % 2 != 0 && arr[i] > 0){count2++;}
      }
      cout<<min(count1, count2);
   }
  

   cout<<"\n";
   delete []arr;
   return 0;
}
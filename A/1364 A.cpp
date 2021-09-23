#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
void solve(int n, int x)
{
    int *a = new int[n]; int sum=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        sum += a[i];
    }
    int sum1, sum2, m1, m2;
    if(sum % x != 0){cout<<n<<nl;}
    
 
    else 
    {
        sum1 = sum2 = sum;
        m1 = m2 = n;
        // FROM 0 TO N-1 WE WILL GET SUM % X != 0
        for (int i = 0; i < n; ++i)
        {
            if((sum1-a[i]) % x != 0)
            {
                sum1 -= a[i];
                m1--;
                break; // breaking coz we obtained desired sum
            }
            else
            {
                sum1 -= a[i];
                m1--;
            }
        }
        for (int i = n-1; i >= 0; --i)
        {
            if((sum2 -a[i]) % x != 0)
            {
                sum2 -= a[i];
                m2--;
                break; // breaking coz we obtained desired sum
            }
            else
            {
                sum2 -= a[i];
                m2--;
            }
            
        }
        int ans = max(m1, m2);
            int maxsum = max(sum1, sum2);
           if(maxsum % x != 0)
             {
               cout<<ans<<nl;
             }
           else
            {
              cout<<"-1"<<nl;
            }
 
 
 
    }
    
    
 
}
int main(){
    int t; cin>>t;
    int n, x;
    while(t--){
        cin>>n>>x;
        solve(n,x);
    }
    return 0;
}

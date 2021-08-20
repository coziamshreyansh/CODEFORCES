#include<bits/stdc++.h>
#define lb lower_bound 
#define nl "\n"
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
 
int main(){
	fast();
	int t; cin>>t;
	int *arr = new int[1000];
	int i = 0; int num = 1;
	int lastdig;
	while(i < 1000)
	{
		lastdig = num%10;
		if(num % 3 != 0 && lastdig != 3){
			arr[i] = num;
			i++;
		}
		num++;
	}
 
	int k; 
	while(t--)
	{ 		
		cin>>k;
		k = k-1;
		cout<<arr[k]<<nl;
		
	}
	delete []arr;
	return 0;
}

#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
void solve(string s, int k)
{
	int size = s.size();
	if(k == 0)
	{
		cout<<"YES"<<nl; return;
	}
	if(size % k != 0)
	{
		cout<<"NO"<<nl;return;
	}
	else 
	{
		string helper = ""; string helper1 = "";
		int sizesubstr = size/k;
		int j = sizesubstr; int aux_j; 
		int i = 0; int aux_i;
		bool ans = true;
		while(k--) // no of substr times
		{

				aux_j = j-1; aux_i = i;
				while(aux_i < j && aux_j >= i)
				{
					helper+=s[aux_i]; // store substr
					helper1 += s[aux_j]; // stores rev of substr
					aux_j--; aux_i++;
				}
				
				
				if(helper1 != helper)
				{
					ans = false;
					break;
				}
				i=j;
				j = j+sizesubstr; 
				helper=""; helper1="";
				

			
		}
		if(ans)
		{
			cout<<"YES"<<nl;
		}
		else 
		{
			cout<<"NO"<<nl;
		}
	}
}
int main()
{
	
	int k; string s;
	
		cin>>s; cin>>k;
		solve(s, k);
	
}
//saddastavvat


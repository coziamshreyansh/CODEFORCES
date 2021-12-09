#include<bits/stdc++.h>
using namespace std;
const string divisible[] ={"00", "25", "50", "75"};
const int INF = 100;
int possiblities(string &div, string& num){
	int ans = 0;
	int ptr = num.size()-1; // one pointer which will start iteration from the end and will first find div[1] in num string and then div[0] in num and also count++
	while(ptr >= 0 && num[ptr] != div[1])
	{
		ans++;
		ptr--;
	}
	if(ptr < 0) return INF;
	ptr--; // excluding div[1] which we found on num string coz we dont wanna remove it

	while(ptr >= 0 && num[ptr] != div[0])
	{
		ptr--;
		ans++;
	}
	if(ptr < 0){return INF;} else {return ans;}
}
int main()
{
	int queries; cin>>queries;
	string num;
	while(queries--)
	{
		cin>>num;
		int ans = INT_MAX;
		for(auto e: divisible){
			ans = min(ans, possiblities(e, num));
		}
		cout<<ans:
		cout<<"\n";
	}
	return 0;
}
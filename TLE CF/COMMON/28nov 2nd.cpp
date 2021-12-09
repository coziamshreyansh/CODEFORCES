#include<bits/stdc++.h>
using namespace std;
bool even(int num)
{
	return num%2==0 ? true : false;
}
void solve(long long int *arr, long long int n){
	
	long long int count1 = 0, count_1 = 0, count0 = 0;
	long long int sum1=0, sum_1=0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] == 0){count0++; }
		else if(arr[i]>0){count1++; sum1+=arr[i];}
		else{sum_1+=arr[i]; count_1++;}
	}
	long long int sum = 0;
	if(sum1 > 0){sum1 -= count1;}
	if(sum_1 != 0)
	{
		if(even(count_1)){sum += abs(sum_1);  sum -= count_1;}
		else if(!even(count_1) && count0 != 0){sum += abs(sum_1); sum -= count_1;}
		else if(!even(count_1) && count0 == 0){sum += abs(sum_1); sum -= count_1; sum += 2;}
	} 
	sum += count0;
	sum += sum1;
	cout<<sum;
    cout<<"\n";
}
int main()
{
	long long int n; cin>>n;
	long long int *arr = new long long int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	solve(arr, n);
	return 0;
}
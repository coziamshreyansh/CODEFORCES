#include<iostream>
using namespace std;
int main()
{
	// approach is to use 4 variables for putting / \ in proper position
	int n; cin>>n;
	if(n % 2 == 0)
	{
		int upperslash1 = 0, upperslash2 = n-1;
			// halfupper part
			for (int j = 0; j < n/2; ++j)
			{
					for (int i = 0; i < n; ++i)
					{
						if(upperslash1 == i && upperslash1 < n/2)
						{
							cout<<'\\';

						}

						else if(upperslash2 == i && upperslash2 > (n/2)-1)
						{
							cout<<'/';
							
						}
						else
							cout<<"*";
					}
					cout<<"\n";
					upperslash2--; upperslash1++;
			}
			// half lower part
			int lowerslash1 = (n/2)-1, lowerslash2 = n/2;
			for (int j = n/2; j < n; ++j)
			{
					for (int i = 0; i < n; ++i)
					{
						if(lowerslash1 == i && lowerslash1 < n/2)
						{
							cout<<'/';

						}

						else if(lowerslash2 == i && lowerslash2 > (n/2)-1)
						{
							cout<<'\\'; 
							// use double slash to print single slash
						}
						else
							cout<<"*";
					}
					cout<<"\n";
					lowerslash2++; lowerslash1--;
			}

		
	}
}
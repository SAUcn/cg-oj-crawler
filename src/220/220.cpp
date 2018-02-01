#include <cstdio>
#include <string>
#include <cstring> 
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
int main()
{
	int n,m;	
	cin>>n>>m;
	for(int i=0;i<=14;i++)
	{
		if(prime[i]>n)
		{
			if(prime[i]==m)
			{
				cout<<"YES";
				return 0;
			}
			cout<<"NO";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
} 


#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
	int n,i,j;
	long long a,b;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		b=sqrtl(a); //long double sqrtl( long double x );
		for(j=2;j*j<=b;j++) 
		{	
			if(b%j==0)
			{
				break;
			}
		}
		if(j*j>b && b*b==a && a>1)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	return 0;
}

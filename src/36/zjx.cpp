#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	long long n;
	long long x;
	long long y;
	while(scanf("%lld",&x)!=EOF)
	{
		n=0;
		y=sqrt((double)x);
		for(int i=1;i<=y;i++)
			n++;
		cout<<x-n<<endl;
	}
}

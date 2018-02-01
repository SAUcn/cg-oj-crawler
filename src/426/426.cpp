#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	long long a,b,aa=0,bb=0,sum1=0,sum2=0;
	cin>>a>>b;
	sum1=a+b;
	int c=1;
	while(a)
	{
		if(a%10==0)
		{
			a/=10;
			continue;
		}
		aa+=a%10*c;
		c*=10;
		a/=10;
	}
	c=1;
	while(b)
	{
		if(b%10==0)
		{
			b/=10;
			continue;
		}
		bb+=b%10*c;
		c*=10;
		b/=10;
	}
	c=1;
	while(sum1)
	{
		if(sum1%10==0)
		{
			sum1/=10;
			continue;
		}
		sum2+=sum1%10*c;
		c*=10;
		sum1/=10;
	}
	if(aa+bb==sum2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

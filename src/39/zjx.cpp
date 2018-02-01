#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	long long m,n;
	int a,b;
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		int c=1;
		if(n-m>9)
		{
			printf("0\n");
			continue;
		}
		a=n%10;
		b=m%10;
		if(a<b)
		{
			printf("0\n");
			continue;
		}
		else
			for(int i=a;i>b;i--)
				c*=i;
		c%=10;
		printf("%d\n",c);
	}
}

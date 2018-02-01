#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	long long int a;
	int c=0;
	while(scanf("%lld",&a)!=EOF)
	{
	
	if(a==1)
	{
		printf("NO\n");
		continue;
	}
	if(a==2||a==3)
	{
		printf("YES\n");
		continue;
	}
	int b=sqrt((double)a);
	for(int i=2;i<=b;i++)
	{
		if(a%i==0)
			break;
		if(i==b)
			c++;
	}
	if(c==1)
		printf("YES\n");
	else
		printf("NO\n");
	c=0;
}
}

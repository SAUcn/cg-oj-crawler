#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	unsigned long long a=1,b,e=0;
	int c=0,d=0;
	cin>>a>>b;
	e=a;
	while(1)
	{
		if(a==b)
		{
			d=1;
			break;
		}
		if(a>b)
			break;
		a*=e;
		c++;
	}
	if(d==1)
		printf("YES\n%d",c);
	else
		printf("NO");
}

#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	double x;
	long int b;
	int c=0;
	cin>>x;
	int a=x/3;
	x/=3;
	if(a==0)
	{
		printf("1");
		return 0;
	}
	if(x!=(double)a)
		b=a*2+1;
	else
		b=2*a;
	printf("%ld",b);
}

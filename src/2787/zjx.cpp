#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	double n,c;
	cin>>n;
	n-=36;
	while(n>=0)
	{
		n-=36;
		a++;
	}
	n+=36;
	while(n)
	{
		c=n/3;
		b=c+0.5;
		n=0;
	}
	cout<<a<<" "<<b;
}

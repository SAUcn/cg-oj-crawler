#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	double a,b,x,y;
	cin>>x>>a>>y>>b;
	x=(b*y-a*x)/(b-a);
	printf("%.2lf",x);
}

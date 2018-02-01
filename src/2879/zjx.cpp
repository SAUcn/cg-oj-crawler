#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	int  x;
	cin>>a>>b;
	c=20000.0/(b*b*3.1415926*a);
	x=c;
	if((double)x==c)
		cout<<x<<endl;
	else
		cout<<x+1<<endl;
}


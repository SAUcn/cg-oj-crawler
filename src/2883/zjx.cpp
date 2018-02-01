#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	double a;
	int b;
	while(scanf("%lf",&a)!=EOF)
	{
		a=a/2;
		b=a;
		if(a!=b)
			b++;
		cout<<b<<endl;
	}
}

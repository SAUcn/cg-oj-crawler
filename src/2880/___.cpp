#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int n;
	double x;
	while(scanf("%lf",&x)!=EOF)
	{
		n=0;
		x=sqrt(x);
		for(int i=1;i<=x;i++)
			n++;
		cout<<n<<endl;
	}
}

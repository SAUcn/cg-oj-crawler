#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	double  a,b;
	int c;
	long long k;
	cin>>c;
	for(int i=0;i<c;i++)
	{
		scanf("%lf%lf",&b,&a);
		if(a==0&&b==0)
            puts("1");
        else if(a==0)
            puts("0");
        else if(a==1)
        {
            if(b==1)
                puts("1");
            else
                puts("0");
        }
        else
        {
            a=(log(b))/(log(a));
		    k=a;
		    if(double(k)==a)
                puts("1");
            else
                puts("0");
        }
	}
}

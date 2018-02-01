#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	long long l1,r1,l2,r2,k;
	long long max1,max2,js;
	cin>>l1>>r1>>l2>>r2>>k;
	if(r1<l2||(r1==l2&&k==r1))
		printf("0");
	else
	{
		if(r1==l2&&k!=r1)
			printf("1");
		else
		{
			if(l1<l2)
				max1=l2;
			else
				max1=l1;
			if(r1>r2)
				max2=r2;
			else
				max2=r1;
			js=max2-max1;
			if(k==max1||k==max2)
				js--;
			if(k>max2||k<max1)
				js++;
			if(js<0)
				js=0;
			printf("%lld",js);
		}
	}
}

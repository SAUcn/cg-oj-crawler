#include<stdio.h>
int main()
{
	long long  x1,x2,y2,y1;
	scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
	long long x=x2-x1,y=y2-y1;
	printf("%lld\n",(x/2+1)*(y/2+1)+x/2*y/2);
	return  0;
}

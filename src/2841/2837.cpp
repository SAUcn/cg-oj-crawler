#include <stdio.h>
int main()
{
	long long n,x,y;
	while(scanf("%lld%lld%lld",&n,&x,&y)!=EOF)
	{
		long long temp=y-(n-1);
		if(n>y||temp*temp+n-1<x)
		{
			printf("-1\n");
			continue;
		}
		for(int i=1;i<n;++i)
			printf("1\n");
		printf("%lld\n",temp);
	}
	return 0;
}

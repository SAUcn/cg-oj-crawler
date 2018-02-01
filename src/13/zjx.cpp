#include <stdio.h>
int is_two_n(long long int num)
{
	if (num&(num - 1))
		return -1;
	return 1;
}
int main()
{
	long long int a;
	while(scanf("%lld",&a)!=EOF)
	{
		if(a==0)
		{
			printf("NO\n");
			continue;
		}
	if (is_two_n(a)==1)
		printf("YES\n");
	else
		printf("NO\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d",&a)!=EOF)
	{
		scanf("%d",&b);
		a=a+b;
		printf("%d\n",a);
	}
	return 0;
}

#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		if(a==1)
		{
			printf("0\n");
			continue;
		}
		int b,c=0;
		b=sqrt((double)a);
		for(int i=2;i<=b;i++)
			if(a%i==0)
			{
				c=1;
				printf("0\n");
				break;
			}
			if(c==0)
				printf("1\n");
	}
}

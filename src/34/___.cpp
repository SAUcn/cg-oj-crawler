#include<stdio.h>
#include<stdlib.h>
int hs(int n)
{
	int tx[10]={0};
	int m=0;
	for(int i=0;i<4;i++)
	{
		tx[n%10]++;
		n=n/10;
	}
	for(int i=0;i<10;i++)
		if(tx[i]!=0)
			m++;
	return m;
}


int main()
{
	int a,b,c=0;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		c=0;
		while(1)
		{
			if(b==hs(a))
			{
				printf("%d %04d\n",c,a);
				break;
			}
			c++;
			a++;
		}
	}	
}

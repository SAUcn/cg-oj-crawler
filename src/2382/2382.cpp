#include <stdio.h>
#include <stdlib.h>

int dalong(int *c,int a,int j)
{
	if(a>c[j])
	{
		return 1;
	}
	else return 0;
}

void paixv(int *c,int *d,int b)
{
	int i=0,j=0;
	int sb;
	for(i=0;i<b;i++)
	{
		for(j=i;j<b;j++)
		{
			if(c[i]>c[j])
			{
				sb=c[i];
				c[i]=c[j];
				c[j]=sb;
				sb=d[i];
				d[i]=d[j];
				d[j]=sb;
			}
		}
	}
}

int main()
{
	int a,b;
	while(~scanf("%d %d",&a,&b))
	{
		int i=0;
		int j=0;
		int c[1000],d[1000];
		for(i=0;i<b;i++)
		{scanf("%d %d",&c[i],&d[i]);}
		paixv(c,d,b);
		for(j=0;j<b;j++){
			if(dalong(c,a,j)==1)
			{
				a+=d[j];
			}
			else {printf("NO\n");
			break;}
			if(j==b-1)
			{
				printf("YES\n");
				break;
			}
		}

	}
}

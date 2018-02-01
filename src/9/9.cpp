#include<iostream>
#include<cstdio>
#include<cstring>
#define M 1000001
int h[M+10];
int count;
void table()
{
	memset(h,0,sizeof(h));
	int i,j,s;
	for(i=5; i<=M; i=i+4)
	{
		for(j=5; j<=M; j=j+4)
		{
			s=i*j;
			if(s>M)
			{
				break;
			}
			if(h[i]==0&&h[j]==0)
				h[s]=1;
			else
				h[s]=-1;

		}
	}
	count=0;
	for(i=1;i<=M;i++)
	{
		if(h[i]==1)
		{
			count++;
		}
		h[i]=count;
	}
}
int main()
{
	int n;
	table();
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			break;
		printf("%d %d\n",n,h[n]);
	}
	return 0;
}


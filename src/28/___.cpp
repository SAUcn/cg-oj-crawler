#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f;
	int n;
	scanf("%d",&a);;
	for(int i=0;i<a;i++)
	{
		int t[100000]={0};
		scanf("%d %d %d %d %d",&b,&c,&d,&e,&f);
		for(int j=0;j<b;j++)
			scanf("%d",&t[j]);
		for(int j=c-1;j<d-1;j++)
			for(int k=j+1;k<d;k++)
				if(t[j]>t[k])
				{
					n=t[j];
					t[j]=t[k];
					t[k]=n;
				}
		for(int j=e-1;j<f-1;j++)
			for(int k=j+1;k<f;k++)
				if(t[j]<t[k])
				{
					n=t[j];
					t[j]=t[k];
					t[k]=n;
				}
		printf("%d",t[0]);
		for(int i=1;i<b;i++)
			printf(" %d",t[i]);
		printf("\n");
	}
	
}

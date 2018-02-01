#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a=0;
	while(scanf("%d",&a)!=EOF){
		if(a==0)
			printf("\n");
	for(int i=1;i<=a;i++)
	{
		printf("\n%d",i);
	}
	for(int i=1;i<=a-1;i++)
	{
		for(int j=i+1;j<=a;j++)
			printf("\n%d %d",i,j);
	}
	for(int i=1;i<=a-2;i++)
		for(int j=i+1;j<=a-1;j++)
			for(int k=j+1;k<=a;k++)
				printf("\n%d %d %d",i,j,k);
	for(int i=1;i<=a-3;i++)
		for(int j=i+1;j<=a-2;j++)
			for(int k=j+1;k<=a-1;k++)
				for(int l=k+1;l<=a;l++)
					printf("\n%d %d %d %d",i,j,k,l);
	for(int m=1;m<=a-4;m++)
	for(int i=m+1;i<=a-3;i++)
		for(int j=i+1;j<=a-2;j++)
			for(int k=j+1;k<=a-1;k++)
				for(int l=k+1;l<=a;l++)
					printf("\n%d %d %d %d %d",m,i,j,k,l);
	for(int n=1;n<=a-5;n++)
	for(int m=n+1;m<=a-4;m++)
	for(int i=m+1;i<=a-3;i++)
		for(int j=i+1;j<=a-2;j++)
			for(int k=j+1;k<=a-1;k++)
				for(int l=k+1;l<=a;l++)
					printf("\n%d %d %d %d %d %d",n,m,i,j,k,l);
	for(int o=1;o<=a-6;o++)
	for(int n=o+1;n<=a-5;n++)
	for(int m=n+1;m<=a-4;m++)
	for(int i=m+1;i<=a-3;i++)
		for(int j=i+1;j<=a-2;j++)
			for(int k=j+1;k<=a-1;k++)
				for(int l=k+1;l<=a;l++)
					printf("\n%d %d %d %d %d %d %d",o,n,m,i,j,k,l);
	for(int p=1;p<=a-7;p++)
	for(int o=p+1;o<=a-6;o++)
	for(int n=o+1;n<=a-5;n++)
	for(int m=n+1;m<=a-4;m++)
	for(int i=m+1;i<=a-3;i++)
		for(int j=i+1;j<=a-2;j++)
			for(int k=j+1;k<=a-1;k++)
				for(int l=k+1;l<=a;l++)
					printf("\n%d %d %d %d %d %d %d %d",p,o,n,m,i,j,k,l);
	for(int q=1;q<=a-8;q++)
	for(int p=q+1;p<=a-7;p++)
	for(int o=p+1;o<=a-6;o++)
	for(int n=o+1;n<=a-5;n++)
	for(int m=n+1;m<=a-4;m++)
	for(int i=m+1;i<=a-3;i++)
		for(int j=i+1;j<=a-2;j++)
			for(int k=j+1;k<=a-1;k++)
				for(int l=k+1;l<=a;l++)
					printf("\n%d %d %d %d %d %d %d %d %d",q,p,o,n,m,i,j,k,l);
	if(a==10)
		printf("\n1 2 3 4 5 6 7 8 9 10");
	if(a!=0)
		printf("\n");
	a=0;
	}
}

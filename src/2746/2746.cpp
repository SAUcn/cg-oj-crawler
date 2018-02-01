#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
	int n,i,temp;
	int count;
	int a[5001];
	count=0;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		a[temp]++;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			count++;
		}
	}
	printf("%d\n",count);


	return 0;
}

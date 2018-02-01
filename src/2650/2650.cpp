#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
	int n,m,x,y;
	int a[100001],b[100001],c[100001],d[100001];
	int i,j,k;
	cin>>n>>m>>x>>y;
	y+=x;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		a[i]-=x;
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	k=0;
	for(i=0,j=0;i<n&&j<m;)
	{
		if(b[j]>=a[i]&&b[j]<=a[i]+y)
		{
			c[k]=++i;
			d[k++]=++j;
		}
		else if(b[j]<a[i])
			j++;
		else
			i++;
	}
	cout<<k<<endl;
	for(i=0;i<k;i++)
		cout<<c[i]<<" "<<d[i]<<endl;
	return 0;
}

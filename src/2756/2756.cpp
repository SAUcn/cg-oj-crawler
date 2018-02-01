#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
int n;
int a[200001];
double ave(int a[],int n)
{
	int i;
	int sum=0;
	for(i=0;i<n;i++)
		sum+=a[i];
	return (sum*1.0/n*1.0);
}
int main()
{	
	cin>>n;	
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	double average=ave(a,n);
	int cnt=0;
	int dir[200001];
	int t=0;
	for(int i=0;i<n;i++)
		if((double)a[i]==average)
		{
			cnt++;
			dir[t++]=(i+1);
		}
	if(cnt==0)
	{
		printf("0\n");
		return 0;
	}
	cout<<cnt<<endl;
	for(int i=0;i<t;i++)
		cout<<dir[i]<<" ";
	return 0;
}

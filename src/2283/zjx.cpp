#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b=0,c,d=0,e;
	int t[1000];
	cin>>a;
	for(int i=0;i<a;i++)
		cin>>t[i];
	for(int i=0;i<a;i++)
	{
		if(t[i]%2==0)
		{
			b++;
			c=i;
		}
		else
		{
			d++;
			e=i;
		}
	}
	if(b==1)
		printf("%d",c+1);
	else
		printf("%d",e+1);
	
}

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int t[1010];
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
		cin>>t[i];
	int max=t[0];
	int min=t[0];
	int pd=0;
	for(int i=1;i<a;i++)
	{
		if(t[i]>max)
		{
			max=t[i];
			pd++;
		}
		else
			if(t[i]<min)
		{
			min=t[i];
			pd++;
		}
	}
	cout<<pd;
}

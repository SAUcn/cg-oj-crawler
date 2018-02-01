#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int t[100002];
	int t2[100002]={0};
	int a;
	int flag=0;
	cin>>a;
	a--;
	cin>>t[0];
	t2[t[0]]++;
	int max=t[0];
	int min=t[0];
	for(int i=1;i<a;i++)
	{
		cin>>t[i];
		if(max<t[i])
			max=t[i];
		else
			if(min>t[i])
				min =t[i];
		t2[t[i]]++;
	}
	int j;
	for(j=min;j<=max;j++)
		if(t2[j]==0)
		{
			flag=1;
			break;
		}
	if(flag==1)
		cout<<j;
	else if(min==1)
		cout<<max+1;
	else
		cout<<min-1;
}

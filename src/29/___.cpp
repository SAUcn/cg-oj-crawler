#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int t[500]={0};
	cin>>a;
	
	for(int i=0;i<a;i++)
	{
		cin>>b;
		int p=0;
		c=0;
		for(int j=0;j<b;j++)
			cin>>t[j];
		while(c<b-1)
		{
			if(t[c]==0)
				break;
			c=t[c]+c;
			if(c>=b-1)
			{
				p=1;
				break;
			}

		}
		if(b==1&&t[0]!=0)
			p=1;
		if(p==0)
			cout<<"false"<<endl;
		else
			cout<<"true"<<endl;
	}
}

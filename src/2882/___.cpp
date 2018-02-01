#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	double a,b,e;
	int c,d;
	cin>>a>>b;
	e=b/2.0-a;
	c=e;
	if((double)c!=e)
	{
		cout<<"No"<<" "<<"answer"<<endl;
		
		return 0;
	}
	d=a-e;
	if(c<0||d<0)
	{
		cout<<"No"<<" "<<"answer"<<endl;
		
		return 0;
	}
	else
		cout<<d<<" "<<c<<endl;
	
}

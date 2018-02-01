#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int b,js=0;
	cin>>n>>m;
	for(int a=0;a<n;a++)
	{
		b=n-a*a;
		if(b<0)
			break;
		if(a+b*b==m)
			js++;
	}
	cout<<js<<endl;
}

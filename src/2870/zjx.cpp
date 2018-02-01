#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	long long int a,b=0;
	long long int t[105];
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>t[i];
		b=b+(t[i]-1)*i+t[i];
	}
	cout<<b<<endl;
}

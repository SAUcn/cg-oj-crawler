#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	a=n-a;
	if(a>b+1)
		cout<<b+1<<endl;
	else
		cout<<a<<endl;
}

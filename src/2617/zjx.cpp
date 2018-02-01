#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	unsigned long long t[20000];
	int a;
	cin>>a;
	t[0]=0;
	t[1]=1;
	for(int i=2;i<=a;i++)
		t[i]=t[i-1]+12*(i-1);
	cout<<t[a];
}

#include<cstdio>
#include<iostream>
using namespace std;
long long t[10000000];
int main()
{
	int a;
		t[0]=1;
	while(scanf("%d",&a)!=EOF)
	{
		for(int i=1;i<=a;i++)
			t[i]=t[i-1]+i;
		cout<<t[a]<<endl;
	}
}

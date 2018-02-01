#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	char a,t[1000];
	int b=0,c;
	
	cin>>a;
	
	gets(t);
	c=strlen(t);
	for(int i=0;i<c;i++)
	{
		if(a==t[i])
			b++;
		else
			break;
	}
	b++;
	if(a!=t[1]&&a!=t[0])
		b=0;
	cout<<b<<endl;
}

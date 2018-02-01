#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	char t[10]={'m'};
	scanf("%s",t);
	int a=strlen(t);
	int b=1;
	for(int i=1;i<a;i++)
	{
		if(t[i]=='1'&&t[i+1]=='0')
			b+=10;
		else
			b+=(t[i]-'0');
	}
	cout<<b;
}

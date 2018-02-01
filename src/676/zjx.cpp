#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	long long t,s,x;
	int flag=0;
	cin>>t>>s>>x;
	if(t==x)
		flag=1;
	while(1)
	{
		if(flag==1)
			break;
		t+=s;
		if(t==x||t==x-1)
			flag=1;
		if(t>x)
			break;
	}
	if(flag ==1)
		printf("YES");
	else 
		printf("NO");
}

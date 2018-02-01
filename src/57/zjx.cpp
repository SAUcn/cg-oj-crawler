#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	char t[105];
	int a,flag=0;
	int b;
	scanf("%s",t);
	a=strlen(t);
	if(a>6)
	for(int i=0;i<a-6;i++)
	{
		if(t[i]!=t[i+1])
			continue;
		else
		if(t[i]!=t[i+2])
			continue;
		else
		if(t[i]!=t[i+3])
			continue;
		else
		if(t[i]!=t[i+4])
			continue;
		else
		if(t[i]!=t[i+5])
			continue;
		else
		if(t[i]!=t[i+6])
			continue;
		else
		{
			flag=1;
			break;
		}
	}
	if(a>6&&flag==1)
		printf("YES");
	else
		printf("NO");
}



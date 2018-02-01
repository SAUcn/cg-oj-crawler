#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	char t[1010];
	int a,b=0,c;
	while(scanf("%s",t)!=EOF)
	{
	a=strlen(t);
	c=a/2;
	a--;
	for(int i=0;i<c;i++)
		if(t[i]!=t[a-i])
		{
			b=1;
			break;
		}
	if(b==0)
		printf("Yes\n");
	else
		printf("No\n");
	b=0;
	}
}

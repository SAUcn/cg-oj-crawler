#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	char t[1010];
	cin>>a;
	for(int i=0;i<a;i++)
	{
		scanf("%s",t);
		b=strlen(t);
		if(b>10)
			printf("%c%d%c\n",t[0],b-2,t[b-1]);
		else
			printf("%s\n",t);
	}
}

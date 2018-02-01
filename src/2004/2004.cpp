#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main()
{
	char c[101],d[101];
	gets(c);
	int i,j;
	int l=strlen(c);
	if(l==1)
	{
		printf("%c",c[0]);
		return 0;
	}
	else
	{
		for(i=0,j=0;i<l;i+=2)
		{
			d[j++]=c[i];
		}
		sort(d,d+l/2+1);
		for(i=0,j=0;i<l;i+=2)
		{
			c[i]=d[j++];
		}
		puts(c);
	}
	return 0;
}

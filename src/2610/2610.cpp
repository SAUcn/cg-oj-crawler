#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
	char c[30000][20];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i]);
	//	getchar();
	}
	int l=strlen(c[0]);
	for(i=0;i<l;i++)
	{
		for(j=0;j<n-1;j++)
			if(c[j][i]!=c[j+1][i])
			{
				printf("%d",i);
				return 0;
			}
	}
	return 0;
}

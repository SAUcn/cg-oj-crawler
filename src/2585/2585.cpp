#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,c;
	int a[1001]={0},b[1001]={0};
	int i,j,k,l;
	scanf("%d%d%d",&n,&m,&c);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(i=0;i<m;i++)
		scanf("%d",b+i);
	for(k=n-m,j=0;k>=0;k--,j++)
	{
		for(i=0,l=0;i<m+j,l<m;i++,l++)
			a[i+j]+=b[l];
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]%c);
	return 0;
}

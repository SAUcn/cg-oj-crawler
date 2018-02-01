#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[30][30];
	int i,j,k;
	int cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			int sum1=0,sum2=0;
			for(k=0;k<n;k++)
			{
				sum1+=a[i][k];
				sum2+=a[k][j];
			}
			if(sum1<sum2)
				cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}


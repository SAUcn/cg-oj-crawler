#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	int n,k;
	int a[1001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		for(int i=1;i<=n;i++)
			a[i-1]=i;
		int j=1;
		while (next_permutation(a,a+n))
		{
			if(j==k-1)
			{
				for(int i=0;i<n;i++)
					printf("%d ",a[i]);
				break;
			}
				
			j++;
		}
		printf("\n");
	}
	return 0;
}

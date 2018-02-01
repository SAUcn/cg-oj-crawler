#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[101];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",a+i);
	stable_sort(a,a+n);
	for(int i=0;i<n-1;i++)
		if(a[i+1]!=a[i]&&a[i+1]<=100)
		{
			printf("%d",a[i+1]);
			return 0;
		}
		printf("NO");
		return 0;
}


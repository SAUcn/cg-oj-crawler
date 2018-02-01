#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
#define LL long long
int x[110],y[110];
int main()
{
	int n,k;
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		double sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",x+i,y+i);
			if(i)
				sum+=(sqrt((double)(x[i]-x[i-1])*(x[i]-x[i-1])+(double)(y[i]-y[i-1])*(y[i]-y[i-1])));
		}
		printf("%.9lf\n",sum*k/50.0);
	}
	return 0;
}

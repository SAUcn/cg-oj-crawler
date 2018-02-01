#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int t;	
	scanf("%d",&t);
	while(t--)
	{
		int n,xx,yy;
		int x,y;
	    int a[151][151];
	    memset(a,0,sizeof(a));
		scanf("%d %d %d",&n,&xx,&yy);
		for(x=1;x<=n;x++)
		{
			for(y=1;y<=x;y++)
			{
				scanf("%d",&a[x][y]);
			}
		}
		a[xx][yy]+=9999999;
		for(x=n-1;x>0;x--)
		{
			for(y=1;y<=x;y++)
			{
				a[x][y]+=max(a[x+1][y],a[x+1][y+1]);
			}
		}
		printf("%d\n",a[1][1]-9999999);
	}
	return 0;
}

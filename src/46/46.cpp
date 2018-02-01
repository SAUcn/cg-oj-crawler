#include <stdio.h>
#include <string.h>
int ans,n;
void dfs(int x,int y)
{
	if(x>y) return;
	ans++;
	dfs(x*10,y);
	dfs(x*10+1,y);
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		ans=0;
		dfs(1,n);
		printf("%d\n",ans);
	}
	return 0;
}

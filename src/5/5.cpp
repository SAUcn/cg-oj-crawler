#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
bool pri[10010];
void init()
{
	int i,j;
	memset(pri,1,sizeof pri);
	pri[0]=pri[1]=0;
	for(i=2;i<=10005;i++)
	{
		if(!pri[i]) continue;
		for(j=i+i;j<=10005;j+=i)
			pri[j]=0;
	}
}

int main()
{
	init();
	int T,i,n,ans,x;
	while(scanf("%d",&T)!=EOF)
	while(T--)
	{
		scanf("%d",&n);
		ans=0,x=n;
		for(i=2;i<=n;i++)
		{
			if(pri[i])
			{
				if(ans<n-n/i*i) ans=n-n/i*i,x=i;
			}
		}
		printf("%d\n",x);
	}
	return 0;
}

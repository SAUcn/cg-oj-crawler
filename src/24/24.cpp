#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
long long sqr(long long a)
{
	return a*a;
}
inline double S(long long int a1,long long int b1,long long int c1,long long int a2,long long int b2,long long int c2,long long int a3,long long int b3,long long int c3)
{
	double a,b,c;
	a=sqrt(sqr(a1-a2)+sqr(b1-b2)+sqr(c1-c2)*1.0);
	b=sqrt(sqr(a1-a3)+sqr(b1-b3)+sqr(c1-c3)*1.0);
	c=sqrt(sqr(a3-a2)+sqr(b3-b2)+sqr(c3-c2)*1.0);
	double p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));

}
int main()
{
	int n,i,j,k;	
	char x;
	while(scanf("%d",&n)!=EOF)
	{		
		
		long long int r[1111][3],g[1111][3],b[1111][3],rr=0,gg=0,bb=0;
		for(i=0;i<n;i++)
		{
			getchar();
			scanf("%s",&x);
			if(x=='R')
			{
				scanf("%lld%lld%lld",&r[rr][0],&r[rr][1],&r[rr][2]);
				rr++;
			}
			else if(x=='G')
			{
				scanf("%lld%lld%lld",&g[gg][0],&g[gg][1],&g[gg][2]);
				gg++;
			}
			else if(x=='B')
			{
				scanf("%lld%lld%lld",&b[bb][0],&b[bb][1],&b[bb][2]);
				bb++;
			}
	//		getchar();
		}
		double maxx=0;
		if(rr>=3)
		{
			for(i=0;i<rr;i++)
				for(j=i+1;j<rr;j++)
					for(k=j+1;k<rr;k++)
					{
						double s=S(r[i][0],r[i][1],r[i][2],r[j][0],r[j][1],r[j][2],r[k][0],r[k][1],r[k][2]);
						if(maxx<s)
							maxx=s;
					}
		}
		if(gg>=3)
		{
			for(i=0;i<gg;i++)
				for(j=i+1;j<gg;j++)
					for(k=j+1;k<gg;k++)
					{	
						double s=S(g[i][0],g[i][1],g[i][2],g[j][0],g[j][1],g[j][2],g[k][0],g[k][1],g[k][2]);
						if(maxx<s)
							maxx=s;
					}
		}
		if(bb>=3)
		{
			for(i=0;i<bb;i++)
				for(j=i+1;j<bb;j++)
					for(k=j+1;k<bb;k++)
					{
						double s=S(b[i][0],b[i][1],b[i][2],b[j][0],b[j][1],b[j][2],b[k][0],b[k][1],b[k][2]);
						if(maxx<s)
							maxx=s;
					}
		}
	//	if(rr>0&&gg>0&&bb>0)
	//	{
			for(i=0;i<rr;i++)
				for(j=0;j<gg;j++)
					for(k=0;k<bb;k++)
					{
						double s=S(r[i][0],r[i][1],r[i][2],g[j][0],g[j][1],g[j][2],b[k][0],b[k][1],b[k][2]);
						if(maxx<s)
							maxx=s;
				}
	//	}
		printf("%.2lf\n",maxx);
	}
	return 0;
}


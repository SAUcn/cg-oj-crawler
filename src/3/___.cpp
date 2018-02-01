#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c;
	int d,e=0,f,g=0;
	while(scanf("%d",&a)!=EOF)
	{
		e=0;
		g=0;
		scanf("%d %d",&b,&c);
		for(int i=0;i<a;i++)
		{
			scanf("%d",&d);
			e+=d;
		}
		for(int i=0;i<a;i++)
		{
			scanf("%d",&f);
			g+=f;
		}
		if(e<=b&&g<=c)
			printf("YES\n");
		else
			printf("NO\n");

	}
}

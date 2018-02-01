#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)
	{
		int g=0;
		if(a<d)
			g=1;
		else if(a==d&&b<e)
			g=1;
		else if(a==d&&b==e&&c<f)
			g=1;
		cout<<g<<endl;
	}
}

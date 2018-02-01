#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	int N;
	int t1[100000];
	int t2[100000]={0};
	while(scanf("%d",&N)!=EOF)
	{
		for(int i=0;i<N;i++)
		{
			scanf("%d",&t1[i]);
			if(t1[i]!=0)
				t2[(t1[i]-1)]++;
			t2[t1[i]]++;
			t2[(t1[i]+1)]++;
		}
		int max=0;
		for(int i=0;i<100000;i++)
		{
			if(t2[i]>max)
				max=t2[i];
		}
		printf("%d\n",max);
		memset(t2,0,sizeof(t2));
	}
}

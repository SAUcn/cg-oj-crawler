#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;


int main()
{
	
	int a,b,c;
	int pd=0;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		
		int t[40][40];
		int sb[100]={0};
		cin>>b>>c;
		for(int j=0;j<b;j++)
		{
			for(int k=0;k<c;k++)
			{
				scanf("%d",&t[j][k]);
			}
		}
		//判断阶段
		//最后改pd  break跳出
		for(int j=0;j<c;j++)//第一行
		
		{
			sb[t[0][j]]++;
			if(sb[t[0][j]]==2)
			{
				
				pd=1;
				continue;
			}
		}
		if(pd==0)
		{
			memset(sb,0,sizeof(sb));
		for(int j=0;j<c;j++)//最后一行
		
		{
			sb[t[b-1][j]]++;
			if(sb[t[b-1][j]]==2)
			{
				
				pd=1;
				continue;
			}
		}
		}
		if(pd==0)
		{
			memset(sb,0,sizeof(sb));
		for(int j=0;j<b;j++)//第一列
		
		{
			sb[t[j][0]]++;
			if(sb[t[0][j]]==2)
			{
				
				pd=1;
				continue;
			}
		}
		}
		if(pd==0)
		{
			memset(sb,0,sizeof(sb));
		for(int j=0;j<b;j++)//最后一列
		
		{
			sb[t[j][c-1]]++;
			if(sb[t[0][j]]==2)
			{
				
				pd=1;
				continue;
			}
		}
		//相连
		if(pd==0)
		{
			memset(sb,0,sizeof(sb));
			for(int j=1;j<b-1;j++)
			{
				for(int k=0;k<c-1;k++)
				{
					if(t[j][k]==t[j][k+1])
					{
						pd=1;
						break;
					}
				}
				if(pd==1)
					break;
			}
			if(pd==0)
			for(int j=1;j<c-1;j++)
			{
				for(int k=0;k<b-1;k++)
				{
					if(t[k][j]==t[k][j+1])
					{
						pd=1;
						break;
					}
				}
				if(pd==1)
					break;
			}
		}
		}
		if(pd==0)
			printf("Case #%d: No\n",i);
		else
			printf("Case #%d: Yes\n",i);
		memset(sb,0,sizeof(sb));
		pd=0;
	}
}

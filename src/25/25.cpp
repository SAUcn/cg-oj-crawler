#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int dp[2001][2001];
int main()
{
	char c[1001],d[1001];
	while(scanf("%s",c)!=EOF)
	{
		int l=strlen(c); 
		int i,j=0;
		for(i=l-1;i>=0;i--)
		{
			d[j++]=c[i];   

		}
		for(i=0; i<l; i++)
		{
			for(j=0; j<l; j++)
			{
				if(c[i] == d[j])
					dp[i][j] = dp[i-1][j-1] + 1;
				else if	(dp[i][j-1] > dp[i-1][j])
					dp[i][j] = dp[i][j-1];
				else
					dp[i][j] = dp[i-1][j];
			}
		}
		cout << l - dp[l-1][l-1] << endl;
		getchar();
	}
	return 0;
}
		

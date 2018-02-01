#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int dir[9][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,0},{0,1},{1,-1},{1,0},{1,1}};
char mp[8][8];
bool dfs(int x,int y,int step)
{
	int dx,dy,i;
	if(step>8)
		return 1;
	for(i=0;i<9;i++)
	{
		dx=x+dir[i][0];
		dy=y+dir[i][1];
		if(dx<0||dx>7||dy<0||dy>7) 
			continue;  
		if(dx-step>=0&&mp[dx-step][dy]=='S') 
			continue;  
		if(dx-step-1>=0&&mp[dx-step-1][dy]=='S') 
			continue;  
		if(dfs(dx,dy,step+1))
			return 1;
	}
	return 0;
}
int main()
{
	int i;
	for(i=0;i<8;i++)
		scanf("%s",mp[i]);
	if(dfs(7,0,0))
		printf("WIN");
	else
		printf("LOSE");
	return 0;
}

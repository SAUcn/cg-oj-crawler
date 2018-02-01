#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int r1,r2,d1,d2,c1,c2;
	int flag=0;
	int t[22];
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	for(int i=1;i<r1;i++)
		if(((r1-i)+(c1-i)==d2)&&(2*i+c2-r1)==d1)
		{
			if(i==r1-i||c1-i==d1-i||i==c1-i||i==d1-i||r1-i==c1-i||r1-i==d1-i||i<=0||r1-i<=0||d1-i<=0||c1-i<=0||i>9||r1-i>9||d1-i>9||c1-i>9)
				continue;
			t[flag]=i;
			flag++;
		}
	if(flag==0)
		printf("-1");
	else
		for(int i=0;i<flag;i++)
		{
			printf("%d %d\n%d %d",t[i],r1-t[i],c1-t[i],d1-t[i]);
			if(i!=flag-1)
				printf("\n");
		}

}

#include<cstdio>

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b;
		int t[100000]={0};
		for(int j=1;j<=b;j++)
			cin>>t[j];
		t[b]++;
		c=b;
		while(t[c]==10)
		{
			t[c]=0;
			c--;
			t[c]++;
		}
		if(t[0]==1)
			printf("1 ");
		printf("%d",t[1]);
		for(int j=2;j<=b;j++)
			printf(" %d",t[j]);
		printf("\n");
	}
}

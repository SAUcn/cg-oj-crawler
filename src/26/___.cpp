#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a;
	int max;
	int m=1;
	long int t[100000];
	while(scanf("%d",&a)!=EOF)
	{
	//scanf("%d",&a);
		//m=1;
		int t1[100000]={0};
		int s=0;
		for(int i=0;i<a;i++)
		{
			cin>>t[i];
			t1[t[i]]++;
		}
		//t[max]++;
		for(int i=0;i<100000;i++)
			if(t1[i]!=0)
				s++;
		cout<<s<<endl;	
		//printf("%d\n",m);
	
	}


}

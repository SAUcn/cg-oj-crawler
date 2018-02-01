
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int i,m=0;
	long long int n,j;
	int a[10000];
	int k=0;
	//char t[100000];
	cin>>n;
	j=n;
	while(1)
	{
		if(j/10==0)
			break;
		while(j!=0)
		{
			i=j%10;
			j=j/10;
			a[m]=i;
			m++;
		}
		j=0;
		for(int x=m-1;x>=0;x--)
			j+=a[x];
		k++;
		m=0;
	}
	cout<<k<<endl;
	//system("pause");
}


#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[1001];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int sum=0;
	for(int i=0;;i++)
	{
		if(a[i]<0&&m>0)
		{
			sum-=a[i];
			m--;
		}
		if(a[i]>=0)
			break;
	}
	cout<<sum<<endl;
	return 0;
}
		

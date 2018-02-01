#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int a[105];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=1;
	int now=m;
	for(int i=0;i<n;)
	{
		if(a[i]<=now)
		{
			now-=a[i];
			i++;
		}
		else
		{
			now=m;
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}

#include <cstdio>
#include <string>
#include <cstring> 
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int ans[26]={0};
int main()
{
	int n;	
	cin>>n;
	for(int i=11;i<20;i++)
		ans[i]=4;
	ans[20]=15;
	ans[21]=4;
	cout<<ans[n];
	return 0;
} 

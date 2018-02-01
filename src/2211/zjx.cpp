#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char t[1010];
	scanf("%s",t);
	if(t[0]>='a'&&t[0]<='z')
		t[0]-=32;
	printf("%s",t);
}

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	char t[]={'a','b','c','d'};
	cin>>a;
	b=a/4;
	c=a%4;
	for(int i=0;i<b;i++)
		printf("abcd");
	for(int i=0;i<c;i++)
		printf("%c",t[i]);
	//system("pause");
}

#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	int a=0,b;
	int js=0;
	char t[5];
	int flag=0;
	scanf("%s",t);
	b=strlen(t);
	for(int i=0;i<b;i++)
		a=a*10+(t[i]-'0');
	if(a%4==0||a%7==0)
		flag=1;
	else 
		for(int i=0;i<b;i++)
			if(t[i]=='4'||t[i]=='7')
				js++;
	if(js==b)
		flag=1;
	if(flag==1)
		printf("YES");
	else
		printf("NO");
}

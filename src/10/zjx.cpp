#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	char t[1001];
	int a;
	while(gets(t))
	{
		a=strlen(t);
		for(int i=0;i<a;i++)
			if(!(t[i]>='A'&&t[i]<='Z'))
				cout<<t[i];
		cout<<endl;
	}
}

#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char t1[110],t2[110];
	int a;
	gets(t1);
	gets(t2);
	a=strlen(t1);
	for(int i=0;i<a;i++)
	{
		if(t1[i]>='A'&&t1[i]<='Z')
			t1[i]+=32;
	}
	for(int i=0;i<a;i++)
	{
		if(t2[i]>='A'&&t2[i]<='Z')
			t2[i]+=32;
	}
	int j=0;
	for(;j<a;j++)
    {
        if(t1[j]!=t2[j])
            break;
    }
    if(j==a)
        printf("0");
    else if(t1[j]>t2[j])
        printf("1");
    else
        printf("-1");
}

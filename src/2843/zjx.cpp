#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char t[100000];
int main()
{

	int a,i,flag=0;
	scanf("%s",t);
	a=strlen(t);
	for(i=0;i<a;i++)
    {
       if(t[i]=='4'||t[i]=='7')
        {
			flag++;
		}
    }
    i=0;
    if(flag==0)
        flag++;
    else
    {
       while(flag!=0)
        {
        int z=flag%10;
        if(z!=4&&z!=7)
            break;
        flag=flag/10;
       }
    }
	if(flag==0)
		printf("YES");
	else
		printf("NO");
}


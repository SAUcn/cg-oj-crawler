#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
	char a[10001];
	int n;
	while(~scanf("%s",a))
	{
		int i=0;
		int sb=0;
		int chang=strlen(a);
		int b[26]={0};
		scanf("%d",&n);
		if(chang<=n)
		{
			printf("0\n\n");
			continue;
		}
		for(i=0;i<chang;i++)
		{
			switch(a[i])
			{
			case 'a':b[0]++;break;
			case 'b':b[1]++;break;
			case 'c':b[2]++;break;
			case 'd':b[3]++;break;
			case 'e':b[4]++;break;
			case 'f':b[5]++;break;
			case 'g':b[6]++;break;
			case 'h':b[7]++;break;
			case 'i':b[8]++;break;
			case 'j':b[9]++;break;
			case 'k':b[10]++;break;
			case 'l':b[11]++;break;
			case 'm':b[12]++;break;
			case 'n':b[13]++;break;
			case 'o':b[14]++;break;
			case 'p':b[15]++;break;
			case 'q':b[16]++;break;
			case 'r':b[17]++;break;
			case 's':b[18]++;break;
			case 't':b[19]++;break;
			case 'u':b[20]++;break;
			case 'v':b[21]++;break;
			case 'w':b[22]++;break;
			case 'x':b[23]++;break;
			case 'y':b[24]++;break;
			case 'z':b[25]++;break;
			}

		}
		int min=0x7f7f7f7f;
		while(n>0)
		{

			int j=0;
			for(i=0;i<26;i++)
			{
				if(b[i]!=0&&min>b[i])
				{
					min=b[i];
					j=i;
				}
			}
			if(n>=b[j])
			{
				n=n-b[j];
				b[j]=0;
			}
			else {b[j]=b[j]-n;n=0;}
			min=10000;
		}
		for(i=0;i<26;i++)
		{
			if(b[i]!=0)
			{
				sb++;
			}
		}
		printf("%d\n",sb);
		for(i=0;i<chang;i++)
		{
			if(b[a[i]-97]!=0)
			{
				printf("%c",a[i]);
			}
		}
		printf("\n");


	}
}


#include <stdio.h>
#include <string.h>
int main()
{
	char c[1000];
	gets(c);
	int l=strlen(c);
	for(int i=0;i<l;i++)
	{
		if(c[i]=='.')
		{
			if((c[i-1]-48>=8&&c[i+1]-48>=5)||c[i-1]-48==9)
			{
				printf("GOTO Vasilisa.");
				break;
			}
			if(c[i-1]-48<9&&c[i+1]-48<5)
			{
				for(int j=0;j<i;j++)
					printf("%c",c[j]);
				break;
			}
			if(c[i-1]-48<8&&c[i+1]-48>=5)
			{
				c[i-1]+=1;
				for(int j=0;j<i;j++)
					printf("%c",c[j]);
				break;
			}
		}
	}
	return 0;
}



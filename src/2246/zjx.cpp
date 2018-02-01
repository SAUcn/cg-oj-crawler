#include<stdio.h>
#include<stdlib.h>
int hs(int n)
{
	int tx[10]={0};
	int m=0;
	for(int i=0;i<4;i++)
	{
		tx[n%10]++;
		n=n/10;
	}
	for(int i=0;i<10;i++)
		if(tx[i]!=0)
			m++;
	if(m==4)
		return 1;
	else
		return 0;
}


int main()
{
	int a;
	scanf("%d",&a);
	a++;
	while(1)
	{
		
		if(hs(a))
		{
			printf("%d",a);
			system("pause");
			return 0;
		}
		
		a++;
	}
	system("pause");
}

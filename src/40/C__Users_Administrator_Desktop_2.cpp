#include<string>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
char want[100][21];
char tr[21];

int main()
{
	int n, m, sum = 0;
	while (scanf("%d %d", &n, &m) != EOF)
	{
		//scanf("%d %d", &n, &m);
		sum = 0;
		memset(want, 0, sizeof(want));
		memset(tr, 0, sizeof(tr));
		for (int i = 0; i < n; i++)
			scanf("%s",want[i]);
		for (int i = 0; i < m; i++)
		{
			scanf("%s",tr);
			for (int i = 0; i < n; i++)
			{
				if (strcmp(want[i], tr) == 0)
				{
					sum++;
				}
			}
		}
			printf("%d\n",sum);
	}
	return 0;
}



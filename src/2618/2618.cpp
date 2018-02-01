
#include<stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int a1, a2, a3;
	while(scanf("%d %d", &a1, &a2) == 2)
	{
		a3 = 0;
		while(a2)
		{
			a3 = a3 * 10 + a2 % 10;
			a2 /= 10;
		}
		printf("%d\n", a1 + a3);
	}
}

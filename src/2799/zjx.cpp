#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
#include <cstring>
#define maxn 100005 
using namespace std;
typedef long long ll;

int num[maxn]; 
int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; i++)
		scanf("%1d", num+i);
	for(int i = 1; i < n && k; i++)
	{
		if(num[i] == 4 && num[i+1] == 7){
			if(i % 2 == 0 && num[i-1] == 4){
				if(k % 2)
				{
					num[i] = 7;
				}
				break;
			}
			if(i % 2 == 1 && i + 2 <= n && num[i+2] == 7){
				if(k % 2){
					num[i+1] = 4;
				}
				break;
			}
			if(i % 2 == 0)
			 num[i] = 7;
			else
			 num[i+1] = 4;
			k--;
		}
	}
	for(int i = 1; i <= n; i++)
	 printf("%d", num[i]);
	puts("");
    return 0;
}

#include <stdio.h>  
int arr[110], brr[110];
int main()
{
	int n;
	while(~scanf("%d",&n)) {
		int k = 0;
		for(int i = 0;i < n; i++) {
			scanf("%d%d",&arr[i],&brr[i]);
		}
		for(int i = 0;i < n; i++ ) {
			for(int j = 0;j < n; j++) {
				if(arr[i]==brr[j]) 
					k++;
			}
		}
		printf("%d\n",k);
	}
	return 0;
}

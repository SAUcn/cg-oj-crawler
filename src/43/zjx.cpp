#include <stdio.h>
int main()
{
    unsigned long long   a,b;
    while(scanf("%lld",&a)!=EOF){
        scanf("%lld",&b);
        if((a&b)==b) printf("odd\n");
        else printf("even\n");
    }
    return 0;
}

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int a;
    while(~scanf("%d",&a))
    {
        if(a == 3)
        printf("1\n");
        else if(a == 1)
        printf("2\n");
        else if(a == 2)
            printf("3\n");
        else if(a == 4)
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}

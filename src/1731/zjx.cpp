#include <cstdio>

int a[]={1,1,1,2,1,2,1,5,2,2,1,5,1,2,1,14,1,5,1,5,2,2,1,15,2,2,5,4,1,4,1,51,1,2,1,14,1,2,2,14,1,6,1,4,2,2,1,52,2,5,1,5,1,15,2,13,2,2,1,13,1,2,4,267};

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", a[n-1]);
    return 0;
}
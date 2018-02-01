#include <cstdio>

int main() {
    int a[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &a[i]);
    }
    a[2] /= 2;
    a[3] /= 7;
    a[4] /= 4;
    int MIN = a[0];
    for (int i = 1; i < 5; ++i) {
        if (MIN > a[i]) {
            MIN = a[i];
        }
    }
    printf("%d\n", MIN);
    return 0;
}


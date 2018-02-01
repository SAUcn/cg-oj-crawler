#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
    double r,x0,y0,x1,y1,ju;
    scanf("%lf %lf %lf %lf %lf",&r,&x0,&y0,&x1,&y1);
    ju = sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0 - y1));
    double d = 2 * r;
    int jie = ju/d;
    if(jie * d < ju)
        jie++;
    printf("%d\n",jie);
    return 0;
}

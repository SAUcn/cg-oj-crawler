#include<iostream>
#include<cstring>
using namespace std;
long long t1,t2,x1,x2,t0,f1,f2;
long long cal(long long t1,long long y1,long long t2,long long y2)
{
    return t1*y1+t2*y2-t0*(y1+y2);
}
void solve(long long y1,long long y2)
{
    if(y2<0)
		y2=0;
	else if(y2>x2)
		y2=x2;//溢出
    if(y1==0 && y2==0)
		return;//WA

    if(t1*y1+t2*y2<t0*(y1+y2))
		return;//不满足t>=t0的条件
    if(cal(t1,y1,t2,y2)*(f1+f2)<cal(t1,f1,t2,f2)*(y1+y2)||(f1<0 && f2<0))
    {
        f1=y1;f2=y2;
    }
    else
    if(cal(t1,y1,t2,y2)*(f1+f2)==cal(t1,f1,t2,f2)*(y1+y2)&&y1+y2>f1+f2)
    {
        f1=y1;f2=y2;
    }
}
int main()
{
    long long y2;
    while(cin>>t1>>t2>>x1>>x2>>t0)
    {
        f1=-1,f2=-1;
        if(t1==t2)//case
        {
            f1=x1;f2=x2;
        }
        else if(t1==t0)//case
        {
            f1=x1;f2=0;
        }
        else if(t2==t0)//case
        {
            f1=0;f2=x2;
        }
        else
        for(long long y1=1;y1<=x1;y1++)
        {
            if(t0>t2)
            {
                y2=(t1*y1-t0*y1)/(t0-t2);
                solve(y1,y2);
            }
            else
            if(t0<t2)
            {
                y2=(t1*y1-t0*y1)%(t0-t2)==0?(t1*y1-t0*y1)/(t0-t2):1+(t1*y1-t0*y1)/(t0-t2);
                solve(y1,y2);
            }
        }
        //y1=0 case 4!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        if(t2>=t0)solve(0,x2);

        cout<<f1<<" "<<f2<<endl;
    }
    return 0;
}


/*#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d;
	cin>>a>>b>>c;
	if(a<0)
		printf("NO");
	else
	if(a==0)
		printf("YES");
	else
	if(b<c)
		printf("NO");
	else	
		if(b==c&&a==1)
	{
		printf("YES");
	}
	else 
		if(b==c&&a>1)
		{
			printf("NO");
		}
	else
		{
			a=180/a;
			a=a*3.1415926535898*180;
			d=c/sin(a);
			c=b-c;
			if(d<=c)
				printf("YES");
			else 
				printf("NO");
		}
		system("pause");
}*/
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double n,R,r;
    while(cin>>n>>R>>r){
        if(r > R){
            cout<<"NO"<<endl;
            continue;
        }
        if(r > R/2){
            if(n == 1)  cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            continue;
        }

        double a = asin((double)r/(R-r));

        if(3.1415926535898/a > n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

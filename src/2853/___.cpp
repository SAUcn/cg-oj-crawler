#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	scanf("%d:%d",&a,&b);
	c=a*60+b;
	//cout<<c<<endl;
	if(c<70)
		printf("01:10");else
	if(c<140)
		printf("02:20");else
	if(c<210)
		printf("03:30");else
	if(c<280)
		printf("04:40");else
	if(c<350)
		printf("05:50");else
	if(c<601)
		printf("10:01");else
	if(c<671)
		printf("11:11");else
	if(c<741)
		printf("12:21");else
	if(c<811)
		printf("13:31");else
	if(c<881)
		printf("14:41");else
	if(c<951)
		printf("15:51");else
	if(c<1202)
		printf("20:02");else
	if(c<1272)
		printf("21:12");else
	if(c<1342)
		printf("22:22");else
	if(c<1412)
		printf("23:32");else
	printf("00:00");
	//system("pause");
}
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a1,a2,a3,a4,a5,a6;
	long long int s;
	cin>>a1>>a2>>a3>>a4>>a5>>a6;
	s=a1+a2+a3;
	s=s*s-a1*a1-a5*a5-a3*a3;
	cout<<s<<endl;
}

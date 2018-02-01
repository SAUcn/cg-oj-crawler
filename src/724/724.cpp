#include<iostream>
using namespace std;
#define LL long long
LL num1[6];
LL num2[6];
int main()
{
	LL n,m;
	cin >> n >> m;
	for(int i = 0;i<5;i++)
	{
         num1[i]=n/5;
		 if(n%5>=i)
			 num1[i]++;
		 num2[i]=m/5;
		 if(m%5>=i)
			 num2[i]++;
	}
	num1[0]--;
	num2[0]--;
	LL ans = 0;
	ans+=num1[0]*num2[0]+num1[1]*num2[4]+num1[2]*num2[3]+num1[3]*num2[2]+num1[4]*num2[1];
	cout << ans << endl;
}


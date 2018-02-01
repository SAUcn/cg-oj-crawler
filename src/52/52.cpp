#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char col[10];
	int num[30];
	int mm[10];
	int k;
	int counts;
	while(cin>>col)
	{
		k = 0;
		counts = 0;
		memset(num,0,sizeof(num));
		for(int i = 0;i<6;i++)
		{
			num[col[i]-'A']++;
		}
		for(int j = 0;j<26;j++)
		{
			if(num[j]>0)
			{
				counts++;
				mm[k++] = num[j];
			}
		}
		switch(counts)
		{
		case 1:cout<<1<<endl;break;
		case 2:
			{
				if(mm[0]==1||mm[1]==1)
				{
					cout<<1<<endl;
					break;
				}
				else
				{
					cout<<2<<endl;
					break;
				}
			}
		case 3:
			{
				if(mm[0]==3||mm[1]==3||mm[2]==3)
				{
					cout<<3<<endl;
					break;
				}
				else
					if(mm[0]==2&&mm[1]==2&&mm[2]==2)
					{
						cout<<6<<endl;
						break;
					}
					else
					{
						cout<<2<<endl;
						break;
					}
			}
		case 4:
			{
				if(mm[0]==3||mm[1]==3||mm[2]==3||mm[3]==3)
				{
					cout<<5<<endl;
					break;
				}
				else
				{
					cout<<8<<endl;
					break;
				}
			}
		case 5:
			{
				cout<<15<<endl;
				break;
			}
		case 6:
			{
				cout<<30<<endl;
				break;
			}
		}
	}
	return 0;
}

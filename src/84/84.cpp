#include <cstdio>
#include <string>
#include <cstring> 
#include <iostream>
#include <algorithm>
using namespace std;
// http://codeforces.com/contest/88
// Chord
string notes[12]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};

int dist(string a, string b, string c)
{
	int pos[3]={0};
	for(int i=0;i<12;i++)
	{
		if(notes[i]==a) pos[0]=i;
		if(notes[i]==b) pos[1]=i;
		if(notes[i]==c) pos[2]=i;
	}
	sort(pos,pos+3);
	//cout<<pos[0]<<pos[1]<<pos[2]<<endl;
	int dis[3]={	pos[1]-pos[0],
		pos[2]-pos[1],
		pos[0]+12-pos[2] };
	for(int i=0;i<3;i++)
	{
		if(dis[i]==4 && dis[(i+1)%3]==3)return 1;
		if(dis[i]==3 && dis[(i+1)%3]==4)return 2;
	}
	return 0;
}

int main()
{
	string X,Y,Z;
	cin>>X>>Y>>Z;
	int flag=dist(X,Y,Z); 
	if(flag==1)cout<<"major";
	else if(flag==2)cout<<"minor";
	else cout<<"strange";
	return 0;
} 

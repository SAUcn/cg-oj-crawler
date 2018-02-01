#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s,a,b;
    while(cin>>s>>a>>b)
    {
        bool isok[2]= {0,0};
        for(int i=0; i<2; i++)
        {
            int idx=s.find(a);
            if(idx!=string::npos)
            {
                idx=s.find(b,idx+a.size());
                if(idx!=string::npos)
                    isok[i]=1;
            }
            reverse(s.begin(),s.end());
        }
        if(isok[0]&&isok[1])
            cout<<"both"<<endl;
        else if(isok[0])
            cout<<"forward"<<endl;
        else if(isok[1])
            cout<<"backward"<<endl;
        else
            cout<<"fantasy"<<endl;
    }
    return 0;
}


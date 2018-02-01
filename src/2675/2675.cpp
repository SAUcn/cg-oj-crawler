#include<iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    string s,u;
    while(cin>>s>>u)
    {
        int len1=s.length(),len2=u.length();
        int ans=(int)1e9,i,j,len=len2;
        for(i=0;i<len1;i++)
        {
            int k,cnt=0;
            for(k=0,j=i;k<len2&&j<len1;k++,j++)
            {
                if(u[k]==s[j])
                    cnt++;
            }
            ans=min(ans,len-cnt);
        }
        for(i=0;i<len2;i++)
        {
            int k,cnt=0;
            for(k=0,j=i;k<len1&&j<len2;k++,j++)
            {
                if(u[j]==s[k])
                    cnt++;
            }
            ans=min(ans,len-cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}

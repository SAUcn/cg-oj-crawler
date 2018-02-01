#include<iostream>
#include<bitset>
#include<cmath>
#include<cstdio>
using namespace std;                 //二进制枚举
int main()
{
    long long int s[500] = {47,74};        //由题可知符合条件的数字位数只能是2，4，6，8，10
                                           //预处理出所有符合的数字存在数组中，再枚举得出答案
    int t0=0, t1=0;
    int t=2;

    for (long long int i = 0;i < 16; i++)        //4到10的处理是类似的
    {
        for (int j = 0; j < 4; ++j)
        if ((i & (1 << j))) 
			t1++;
        else
			t0++;
        int po = 1;
        if(t0 == t1&&t0!=0&&t0!=4)             //二进制枚举，对0和1数量相等的数处理
        {
            for (int j = 0; j < 4; ++j)
            {
                if (i & (1 << j))
					s[t] = s[t] +  7 * po;
                else 
					s[t] = s[t] + 4 * po;
                po = po * 10;
            }
            t++;
        }
        t0 = 0; t1 = 0;
    }

    for (long long int i = 0; i < 64; i++)
    {
        for (int j = 0; j < 6; ++j)
        if ((i & (1 << j))) t1++;
        else t0++;
        int po = 1;
        if (t0 == t1&&t0 != 0 && t0 != 6)
        {
            for (int j = 0; j < 6; ++j)
            {
                if (i & (1 << j)) s[t] = s[t] + 7 * po;
                else s[t] = s[t] + 4 * po;
                po = po * 10;
            }
            t++;
        }
        t0 = 0; t1 = 0;
    }

    for (long long int i = 0; i < 256; i++)
    {
        for (int j = 0; j < 8; ++j)
        if ((i & (1 << j))) t1++;
        else t0++;
        int po = 1;
        if (t0 == t1&&t0 != 0 && t0 != 8)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (i & (1 << j)) s[t] = s[t] + 7 * po;
                else s[t] = s[t] + 4 * po;
                po = po * 10;
            }
            t++;
        }
        t0 = 0; t1 = 0;
    }

    for (long long int i = 0; i < 1024; i++)
    {
        for (long long int j = 0; j < 10; ++j)
        if ((i & (1 << j))) t1++;
        else t0++;
        long long int po = 1;
        if (t0 == t1&&t0 != 0 && t0 != 10)
        {
            for (long long int j = 0; j < 10; ++j)
            {
                if (i & (1 << j)) s[t] = s[t] + 7 * po;
                else s[t] = s[t] + 4 * po;
                po = po * 10;
            }
            t++;
        }
        t0 = 0; t1 = 0;
    }

    long long int n;
    while (cin >> n)
    {
        for (int i = 0; i < t;i++)
        if (s[i]>=n) { cout << s[i]<<endl; break; }
    }

}


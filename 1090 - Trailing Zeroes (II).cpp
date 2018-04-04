/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int

int countfact (int n, int p)
{
    int k = 0;

    while (n)
    {
        n /= p;
        k += n;
    }

    return k;
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int tc,pos,n,r,p,q,i,a,b,x,y;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%d %d %d %d",&n,&r,&p,&q);

        a = b = 0;

        if (!(p & 1))
        {
            while (!(p & 1))
            {
                p >>= 1;
                a++;
            }
        }

        if (p == 2)
            a++;

        for (i=3; i*i<=p; i+=2)
        {
            while (p % i == 0)
            {
                p /= i;

                if (i == 5)
                    b++;
            }
        }

        if (p == 5)
            b++;

        a *= q;
        b *= q;

        x = countfact (n,5)-countfact (n-r,5)-countfact (r,5)+b;
        y = countfact (n,2)-countfact (n-r,2)-countfact (r,2)+a;

        pf ("Case %d: %d\n",pos,min(x,y));
    }

    return 0;
}

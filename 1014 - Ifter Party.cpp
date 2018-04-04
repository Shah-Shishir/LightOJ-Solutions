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

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    lld tc,pos,len,p,l,d,i;

    sf ("%lld",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%lld %lld",&p,&l);
        d = p-l;
        vector <lld> v;

        for (i=1; i*i<=d; i++)
        {
            if (d % i == 0)
            {
                if (i*i == d && i > l)
                    v.pb(i);
                else
                {
                    if (i > l)
                        v.pb(i);

                    if (d/i > l)
                        v.pb(d/i);
                }
            }
        }

        len = v.size();
        sort (v.begin(),v.end());
        pf ("Case %lld: ",pos);

        if (len == 0)
            pf ("impossible\n");
        else
        {
            for (i=0; i<len; i++)
            {
                pf ("%lld",v[i]);

                if (i == len-1)
                    pf ("\n");
                else
                    pf (" ");
            }
        }
    }

    return 0;
}

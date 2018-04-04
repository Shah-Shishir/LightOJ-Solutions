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

lld GCD (lld a,lld b)
{
    if (b == 0)
        return a;
    else
        return GCD (b,a%b);
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    lld tc,pos,a,b,l,G,L,c;

    sf ("%lld",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%lld %lld %lld",&a,&b,&l);

        G = GCD (a,b);
        L = (a/G)*b;

        pf ("Case %lld: ",pos);

        if (l % L)
            pf ("impossible\n");
        else
        {
            c = l/L;
            G = GCD (c,L);

            while (G != 1)
            {
                c *= G;
                L /= G;
                G = GCD (c,L);
            }

            cout << c << endl;
        }
    }

    return 0;
}
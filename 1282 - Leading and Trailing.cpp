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
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

U bigmod (U b, U p, U m)
{
    U p1,p2;

    if (p == 0)
        return 1;

    if (p & 1)
    {
         p1 = b % m;
         p2 = bigmod (b,p-1,m) % m;
         return (p1 * p2) % m;
    }
    else
    {
        p1 = bigmod (b,p/2,m) % m;
        return (p1 * p1) % m;
    }
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */
    U tc,pos;
    llu y,z;
    double a,b,x;

    sf ("%u",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%lf %lf",&a,&b);

        x = b*log10(a) - floor(b*log10(a));
        y = pow (10,x) * 100;
        z = bigmod (a,b,1000);

        pf ("Case %u: %llu %03llu\n",pos,y,z);
    }

    return 0;
}

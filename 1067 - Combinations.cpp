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

const llu MOD = 1000003;
llu fact[1000001];

llu bigmod (llu b,llu p,llu m)
{
    llu A,B;

    if (p == 0)
        return 1;

    if (p & 1)
    {
        A = b % m;
        B = bigmod (b,p-1,m) % m;
        return (A*B) % m;
    }
    else
    {
        A = bigmod (b,p/2,m) % m;
        return (A*A) % m;
    }
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    llu tc,pos,n,k,i,u,d,res;

    fact[0] = 1;

    for (i=1; i<1000001; i++)
        fact[i] = ((fact[i-1] % MOD) * (i % MOD)) % MOD;

    sf ("%llu",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%llu %llu",&n,&k);

        u = fact[n];
        d = ((fact[k] % MOD)*(fact[n-k] % MOD)) % MOD;
        res = bigmod (d,MOD-2,MOD);
        res = ((u % MOD) * (res % MOD)) % MOD;

        pf ("Case %llu: %llu\n",pos,res);
    }

    return 0;
}

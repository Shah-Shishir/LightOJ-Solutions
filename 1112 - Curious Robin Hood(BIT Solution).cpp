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
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
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
#define vi vector <int>
#define pii pair <int,int>
#define mii map <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
int CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int BIT[100001],n,q,t,i,j,k,val;

void update (int i, int val)
{
    for (; i<=n; i+=i&(-i))
        BIT[i] += val;
}

int query (int i)
{
    int sum = 0;

    for (; i>0; i-=i&(-i))
        sum += BIT[i];

    return sum;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,pos;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%d %d",&n,&q);

        memset (BIT,0,sizeof BIT);

        for (i=1; i<=n; i++)
        {
            sf ("%d",&val);
            update (i,val);
        }

        pf ("Case %d:\n",pos);

        for (t=1; t<=q; t++)
        {
            sf ("%d",&k);

            if (k == 1)
            {
                sf ("%d",&i);
                ++i;
                val = query(i)-query(i-1);
                pf ("%d\n",val);
                update (i,-val);
            }
            else if (k == 2)
            {
                sf ("%d %d",&i,&val);
                ++i;
                update (i,val);
            }
            else
            {
                sf ("%d %d",&i,&j);
                ++i;
                ++j;
                val = query(j)-query(i-1);
                pf ("%d\n",val);
            }
        }
    }

    return 0;
}
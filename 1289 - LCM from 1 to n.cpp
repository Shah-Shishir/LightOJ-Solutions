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

const int MOD = 4294967296;
const int MAX = 100000100;
U prime[(MAX>>5)+2];
U v[5761461],store[5761461];

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
bool CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

void sievewithbitmasking ()
{
    int i,j,k=-1;

    prime[0] = SetBit (prime[0],0);
    prime[0] = SetBit (prime[0],1);

    for (i=4; i<MAX; i+=2)
        prime[i>>5] = SetBit (prime[i>>5],i&31);

    for (i=3; i*i<=MAX; i+=2)
        if (!CheckBit(prime[i>>5],i&31))
            for (j=i*i; j<MAX; j+=(i<<1))
                prime[j>>5] = SetBit (prime[j>>5],j&31);

    v[++k] = 2;

    for (i=3; i<MAX; i+=2)
        if (!CheckBit(prime[i>>5],i&31))
            v[++k] = i;
}

void precalc ()
{
    store[0] = 2;

    for (int i=1; i<5761461; i++)
        store[i] = store[i-1]*v[i];
}

U calculate (U n)
{
    U ans = 1;

    for (int i=0; v[i]*v[i]<=n; i++)
    {
        U temp = n;

        temp /= v[i];

        while (temp >= v[i])
        {
            ans *= v[i];
            temp /= v[i];
        }
    }

    return ans;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    sievewithbitmasking ();
    precalc ();

    U tc,pos,n,ans,t;

    sf ("%u",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%u",&n);

        ans = calculate(n);
        t = upper_bound (v,v+5761461,n)-v;
        --t;
        ans *= store[t];

        pf ("Case %u: %u\n",pos,ans);
    }

    return 0;
}

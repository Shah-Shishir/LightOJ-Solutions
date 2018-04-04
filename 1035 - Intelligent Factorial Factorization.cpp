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
#define u unsigned int

const int MAX = 101;
bool prime[MAX];
vector <int> v;

void sieve ()
{
    int i,j;

    v.pb(2);

    prime[0] = prime[1] = true;

    for (i=4; i<=MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
    {
        if (!prime[i])
        {
            v.pb(i);

            for (j=i*i; j<=MAX; j+=2*i)
                prime[j] = true;
        }
    }

    for (i=11; i<=MAX; i+=2)
        if (!prime[i])
            v.pb(i);
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    sieve ();

    int t,pos,n,i,j,N,k,l;

    sf ("%d",&t);

    for (pos=1; pos<=t; pos++)
    {
        sf ("%d",&n);

        int arr[98] = {0};

        pf ("Case %d: %d = ",pos,n);

        for (i=2; i<=n; i++)
        {
            N = i;

            for (j=0; v[j]*v[j]<=N; j++)
            {
                while (N % v[j] == 0)
                {
                    N /= v[j];
                    arr[v[j]]++;
                }
            }

            if (N > 1)
                arr[N]++;
        }

        k = 0;

        if (arr[2] > 0)
            k++;

        for (i=3; i<=97; i+=2)
            if (arr[i] > 0)
                k++;

        l = 0;

        for (i=2; i<=97; i++)
        {
            if (arr[i] > 0)
            {
                l++;

                if (l == 1)
                    pf ("%d (%d)",i,arr[i]);
                else
                    pf (" * %d (%d)",i,arr[i]);

                if (l == k)
                {
                    pf ("\n");
                    break;
                }
            }
        }
    }

    return 0;
}

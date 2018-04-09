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
const int MAX = 100005;

int SetBit (int n, int x) { return n | (1 << x); }
int ClearBit (int n, int x) { return n & ~(1 << x); }
int ToggleBit (int n, int x) { return n ^ (1 << x); }
int CheckBit (int n, int x) { return (bool)(n & (1 << x)); }

int BIT[MAX],n,q,k,i,j,val;
char str[MAX],com[2];

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

void range_update (int i, int j)
{
    update (i,1);
    update (j+1,-1);
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
        sf ("%s\n%d",&str[1],&q);
        n = strlen(&str[1]);
        memset (BIT,0,sizeof(int)*n);

        pf ("Case %d:\n",pos);

        while (q--)
        {
            sf ("%s",com);

            if (strcmp (com,"I") == 0)
            {
                sf ("%d %d",&i,&j);
                range_update (i,j);
            }
            else
            {
                sf ("%d",&i);

                if (query(i) & 1)
                {
                    if (str[i] == '0')
                        pf ("1\n");
                    else
                        pf ("0\n");
                }
                else
                    pf ("%c\n",str[i]);
            }
        }
    }

    return 0;
}

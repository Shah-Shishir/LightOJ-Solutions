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

int arr[100001];
int block[317];

int blk_size,blk_ind,blk_num,n,i,j,val;

void preprocess (int n)
{
    blk_size = sqrt(n);
    blk_ind = -1;

    for (i=0; i<n; i++)
    {
        if (i % blk_size == 0)
            ++blk_ind;

        block[blk_ind] += arr[i];
    }
}

void giveMoney (int idx)
{
    blk_num = idx/blk_size;
    block[blk_num] -= arr[idx];
    pf ("%d\n",arr[idx]);
    arr[idx] = 0;
}

void addMoney (int idx, int val)
{
    blk_num = idx/blk_size;
    block[blk_num] += val;
    arr[idx] += val;
}

int getMoney (int l, int r)
{
    int sum = 0;

    while (l<r && l!=0 && l%blk_size!=0)
        sum += arr[l++];

    while (l+blk_size <= r)
    {
        sum += block[l/blk_size];
        l += blk_size;
    }

    while (l <= r)
        sum += arr[l++];

    return sum;
}

int main ()
{
    int tc,pos,m,q;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%d %d",&n,&m);

        for (i=0; i<n; i++)
            sf ("%d",&arr[i]);

        preprocess (n);

        pf ("Case %d:\n",pos);

        while (m--)
        {
            sf ("%d",&q);

            if (q == 1)
            {
                sf ("%d",&i);
                giveMoney (i);
            }
            else if (q == 2)
            {
                sf ("%d %d",&i,&val);
                addMoney (i,val);
            }
            else
            {
                sf ("%d %d",&i,&j);
                pf ("%d\n",getMoney (i,j));
            }
        }

        memset (block,0,sizeof block);
    }

    return 0;
}

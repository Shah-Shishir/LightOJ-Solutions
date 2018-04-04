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

int arr[1000];

int NOD (int n)
{
    int k=0;

    for (int i=1; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            if (i*i == n)
                ++k;
            else
                k+=2;
        }
    }

    return k;
}

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,n,i,k,len,index=-1;
    map <int,vi> mp;
    map <int,vi> :: iterator it;
    vector <int> num;

    for (i=1; i<=1000; i++)
    {
        k = NOD(i);
        mp[k].pb(i);
    }

    for (it=mp.begin(); it!=mp.end(); it++)
    {
        num = it->second;
        len = num.size();

        for (i=len-1; i>=0; i--)
            arr[++index] = num[i];
    }

    sf ("%d",&tc);

    for (i=1; i<=tc; i++)
    {
        sf ("%d",&n);
        pf ("Case %d: %d\n",i,arr[n-1]);
    }

    mp.clear();
    num.clear();

    return 0;
}

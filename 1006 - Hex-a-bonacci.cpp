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
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int m = 10000007;
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,pos,i;
    lld a,b,c,d,e,f,n,arr[10001];

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%lld %lld %lld %lld %lld %lld %d",&a,&b,&c,&d,&e,&f,&n);

        arr[0] = a % m;
        arr[1] = b % m;
        arr[2] = c % m;
        arr[3] = d % m;
        arr[4] = e % m;
        arr[5] = f % m;

        for (i=6; i<=n; i++)
            arr[i] = ((arr[i-1] % m) + (arr[i-2] % m) + (arr[i-3] % m) + (arr[i-4] % m) + (arr[i-5] % m) + (arr[i-6] % m)) % m;

        pf ("Case %d: %lld\n",pos,arr[n]);
    }

    return 0;
}

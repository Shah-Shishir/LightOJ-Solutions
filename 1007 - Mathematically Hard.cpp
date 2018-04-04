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

const int MAX = 5000001;
llu phi[MAX];

void tot ()
{
    int i,j;

    for (i=1; i<MAX; i++)
        phi[i] = i;

    for (i=2; i<MAX; i++)
    {
        if (phi[i] == i)
            for (j=i; j<MAX; j+=i)
                phi[j] = (phi[j]/i)*(i-1);
    }

    for (i=2; i<MAX; i++)
    {
        phi[i] *= phi[i];
        phi[i] += phi[i-1];
    }
}

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    tot ();

    int tc,pos;
    llu a,b;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%llu %llu",&a,&b);

        pf ("Case %d: %llu\n",pos,phi[b]-phi[a-1]);
    }

    return 0;
}

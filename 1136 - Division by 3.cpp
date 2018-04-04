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

int main (void)
{
    int t,pos,a,b,res;

    sf ("%d",&t);

    /***

            First observation is that the answer for (a,b) is equal to the answer for (1,b) minus the answer for (1,a-1)
            for any valid a and b. So it is enough to be able to find the answer for (1,n) for any valid n.

            The second observation is that the values of (1,n) come in an easy pattern with respect to n.
            That is, (1,n) can be found in a single formula without summing up things.

            I guess these are enough for the hints. :)

    ***/

    for (pos=1; pos<=t; pos++)
    {
        sf ("%d %d",&a,&b);

        a--;

        res = floor(b/1.5) - floor(a/1.5);

        pf ("Case %d: %d\n",pos,res);
    }

    return 0;
}

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

int conversion (int n)
{
    int b = 0, i = 1, rem;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        b += rem * i;
        i *= 10;
    }

    return b;
}

int main (void)
{
    int t,pos,d1,d2,d3,d4,b1,b2,b3,b4;
    char c;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> d1 >> c >> d2 >> c >> d3 >> c >> d4;
        cin >> b1 >> c >> b2 >> c >> b3 >> c >> b4;

        if (conversion(d1) == b1 && conversion(d2) == b2 && conversion(d3) == b3 && conversion(d4) == b4)
            pf ("Case %d: Yes\n",pos);
        else
            pf ("Case %d: No\n",pos);
    }

    return 0;
}

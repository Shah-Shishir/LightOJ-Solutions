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

int main (void)
{
    int t,pos,x1,y1,x2,y2,i,x,y;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> i;

        pf ("Case %d:\n",pos);

        while (i--)
        {
            cin >> x >> y;

            if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}

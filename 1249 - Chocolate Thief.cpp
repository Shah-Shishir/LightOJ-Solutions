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
    int t,pos,n,i,l,w,h,p,q;
    char str[105][25];
    bool check;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> n;

        vector <int> v;

        for (i=0; i<n; i++)
        {
            cin >> str[i] >> l >> w >> h;

            v.push_back(l*w*h);
        }

        int size = v.size(), check = true;

        for (i=0; i<size-1; i++)
        {
            if (v[i] != v[i+1])
            {
                check = false;
                break;
            }
        }

        pf ("Case %d: ",pos);

        if (check == true)
            pf ("no thief\n");
        else
        {
            int max = v[0], p = 0;

            for (i=1; i<size; i++)
            {
                if (v[i] > max)
                {
                    max = v[i];
                    p = i;
                }
            }

            int min = v[0], q = 0;

            for (i=1; i<size; i++)
            {
                if (v[i] < min)
                {
                    min = v[i];
                    q = i;
                }
            }

            pf ("%s took chocolate from %s\n",str[p],str[q]);
        }
    }

    return 0;
}

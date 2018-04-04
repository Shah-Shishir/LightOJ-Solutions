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
    int t,pos,n,p,q,arr[35],i;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> n >> p >> q;

        int sum = 0;

        for (i=0; i<n; i++)
            cin >> arr[i];

        for (i=0; i<n; i++)
        {
            sum += arr[i];

            if (i >= p || sum > q)
            {
                pf ("Case %d: %d\n",pos,i);
                break;
            }
            else if (i == n-1 || sum == q)
            {
                pf ("Case %d: %d\n",pos,i+1);
                break;
            }
        }
    }

    return 0;
}

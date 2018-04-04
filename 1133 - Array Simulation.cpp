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
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int tc,pos,n,m,i,arr[105],val,x,y;
    string str;

    sf ("%d",&tc);

    for (pos=1; pos<=tc; pos++)
    {
        sf ("%d %d",&n,&m);

        for (i=0; i<n; i++)
            sf ("%d",&arr[i]);

        while (m--)
        {
            cin >> str;

            if (str[0] == 'S')
            {
                sf ("%d",&val);

                for (i=0; i<n; i++)
                    arr[i] += val;
            }
            else if (str[0] == 'M')
            {
                sf ("%d",&val);

                for (i=0; i<n; i++)
                    arr[i] *= val;
            }
            else if (str[0] == 'D')
            {
                sf ("%d",&val);

                for (i=0; i<n; i++)
                    arr[i] /= val;
            }
            else if (str[0] == 'R')
                reverse (arr,arr+i);
            else
            {
                sf ("%d %d",&x,&y);

                int temp;

                temp = arr[x];
                arr[x] = arr[y];
                arr[y] = temp;
            }
        }

        pf ("Case %d:\n",pos);

        for (i=0; i<n; i++)
        {
            pf ("%d",arr[i]);

            if (i == n-1)
                pf ("\n");
            else
                pf (" ");
        }
    }

    return 0;
}

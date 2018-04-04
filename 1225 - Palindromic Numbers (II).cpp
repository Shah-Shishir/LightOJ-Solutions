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
    int t,pos,len,i,half;
    char str[10];
    bool check;

    sf ("%d",&t);

    for (pos=1; pos<=t; pos++)
    {
        sf ("%s",str);

        len = strlen (str);
        half = len / 2;
        len--;
        check = true;

        for (i=0; i<half; i++)
        {
            if (str[i] != str[len-i])
            {
                check = false;
                break;
            }
        }

        pf ("Case %d: ",pos);

        if (check == true)
            pf ("Yes\n");
        else
            pf ("No\n");
    }

    return 0;
}

/***

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long t,pos=1,n,temp,rem,rev;

    scanf ("%lld",&t);

    while (t--)
    {
        scanf ("%lld",&n);

        temp = n, rev = 0;

        while (n != 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }

        printf ("Case %lld: ",pos++);

        if (rev == temp)
            printf ("Yes\n");
        else
            printf ("No\n");
    }

    return 0;
}

***/

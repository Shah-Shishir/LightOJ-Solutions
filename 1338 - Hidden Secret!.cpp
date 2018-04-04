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
#define u unsigned int

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/

    int t,pos,l1,l2,i,j;
    string a,b;

    cin >> t;

    getchar ();

    for (pos=1; pos<=t; pos++)
    {
        getline(cin,a);
        getline(cin,b);

        string p = "", q = "";

        l1 = a.length();
        l2 = b.length();

        for (i=0; i<l1; i++)
        {
            if (a[i] == ' ')
                continue;

            if (islower(a[i]))
                a[i] = toupper(a[i]);

            p += a[i];
        }

        for (i=0; i<l2; i++)
        {
            if (b[i] == ' ')
                continue;

            if (islower(b[i]))
                b[i] = toupper(b[i]);

            q += b[i];
        }

        sort (p.begin(),p.end());
        sort (q.begin(),q.end());

        pf ("Case %d: ",pos);

        if (p == q)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}

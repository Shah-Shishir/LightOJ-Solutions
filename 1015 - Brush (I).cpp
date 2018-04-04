#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,i,n,x;

    cin >> t;

    for (i=1; i<=t; i++)
    {
        cin >> n;

        int sum=0;

        while (n--)
        {
            cin >> x;

            if (x < 0)
                x = 0;

            sum = sum+x;
        }

        cout << "Case " << i << ": " << sum << endl;
    }

    return 0;
}

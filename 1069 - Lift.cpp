#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,i,a,b;

    cin >> t;

    for (i=1; i<=t; i++)
    {
        cin >> a >> b;

        if (a < b)
            cout << "Case " << i << ": " << 19+4*b << endl;
        else if (b <= a)
            cout << "Case " << i << ": " << 19+4*a+4*(a-b) << endl;
    }

    return 0;
}

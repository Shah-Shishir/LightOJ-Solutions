#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,i;
    double r;

    double pi = 2 * acos(0.0);

    cin >> t;

    for (i=1; i<=t; i++)
    {
        cin >> r;

        cout << "Case " << i << ": " << fixed << setprecision(2) << 4*r*r-pi*r*r << endl;
    }

    return 0;
}

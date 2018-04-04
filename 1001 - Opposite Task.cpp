#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,x,a,b;

    cin >> t;

    while (t--)
    {
        cin >> x;

        if (x <= 10)
        {
            a = x;
            b = x-a;
        }

        else
        {
            a = x-10;
            b = x-a;
        }

        cout << a << " " << b << endl;
    }

    return 0;
}

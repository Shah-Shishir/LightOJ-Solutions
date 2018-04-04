#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    int t,pos,i,n,sum;
    string str;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        sum = 0;

        cin >> i;

        cout << "Case " << pos << ":" << endl;

        while (i--)
        {
            getchar ();

            cin >> str;

            if (str == "donate")
            {
                cin >> n;
                sum = sum + n;
            }
            else
                cout << sum << endl;
        }
    }

    return 0;
}

/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <iterator>
#include <sstream>
#include <iomanip>
using namespace std;

#define sf scanf
#define pf printf

int main ()
{
    int t,pos;
    long long n,i,div;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> n;

        pf ("Case %d: ",pos);

        if (n & 1)
            cout << "Impossible" << endl;
        else
        {
            for (i=2; i<=n; i+=2)
            {
                div = n / i;

                if (div * i == n && div & 1)
                {
                    cout << div << " " << i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}

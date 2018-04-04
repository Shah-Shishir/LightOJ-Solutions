/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <iostream>
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
    int t,pos,n,rem,count;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> n;

        count = 0;

        while (n != 0)
        {
            if (n % 2 == 1)
                count = count + 1;
            n /= 2;
        }

        pf ("Case %d: ",pos);

        if (count & 1)
            pf ("odd\n");
        else
            pf ("even\n");
    }

    return 0;
}

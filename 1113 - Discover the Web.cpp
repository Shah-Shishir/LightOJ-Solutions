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

string com,url;
int t,pos;

int main ()
{
    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        stack <string> backw,forw;
        backw.push("http://www.lightoj.com/");

        pf ("Case %d:\n",pos);

        while (cin >> com)
        {
            if (com == "QUIT")
                break;
            else if (com == "VISIT")
            {
                cin >> url;
                backw.push(url);
                cout << backw.top() <<endl;

                if (!forw.empty())
                {
                    while (!forw.empty())
                       forw.pop();
                }
            }
            else if (com == "BACK")
            {
                if (backw.size() <= 1)
                    cout << "Ignored" << endl;
                else
                {
                    forw.push(backw.top());
                    backw.pop();
                    cout << backw.top() << endl;
                }
            }
            else
            {
                if (forw.empty())
                    cout << "Ignored" << endl;
                else
                {
                    backw.push(forw.top());
                    forw.pop();
                    cout << backw.top() << endl;
                }
            }
        }
    }

    return 0;
}

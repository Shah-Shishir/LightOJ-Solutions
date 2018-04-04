/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,pos,n,m,val;
    string str;
    deque <int> q;

    cin >> t;

    for (pos=1; pos<=t; pos++)
    {
        cin >> n >> m;

        cout << "Case " << pos << ":\n";

        while (m--)
        {
            cin >> str;

            if (str == "pushLeft" || str == "pushRight")
            {
                cin >> val;

                if (q.size() == n)
                    cout << "The queue is full" << endl;
                else
                {
                    if (str == "pushLeft")
                    {
                        q.push_front(val);
                        cout << "Pushed in left: " << val << endl;
                    }
                    else
                    {
                        q.push_back(val);
                        cout << "Pushed in right: " << val << endl;
                    }
                }
            }
            else
            {
                if (q.empty())
                    cout << "The queue is empty" << endl;
                else
                {
                    if (str == "popLeft")
                    {
                        cout << "Popped from left: " << q.front() << endl;
                        q.pop_front();
                    }
                    else
                    {
                        cout << "Popped from right: " << q.back() << endl;
                        q.pop_back();
                    }
                }
            }
        }

        while (!q.empty())
                q.pop_back();
    }

    return 0;
}

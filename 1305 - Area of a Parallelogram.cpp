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

int main (void)
{
    int t,pos;
    double ax,ay,bx,by,cx,cy,dx,dy,x,y,ab,ac,ad,bc,cd,s,a1,a2;

    sf ("%d",&t);

    for (pos=1; pos<=t; pos++)
    {
        sf ("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);

        x = (ax + cx) / 2;
        y = (ay + cy) / 2;

        dx = 2*x - bx;
        dy = 2*y - by;

        ab = sqrt ((ax-bx)*(ax-bx) + (ay-by)*(ay-by));
        bc = sqrt ((bx-cx)*(bx-cx) + (by-cy)*(by-cy));
        ac = sqrt ((ax-cx)*(ax-cx) + (ay-cy)*(ay-cy));
        ad = sqrt ((ax-dx)*(ax-dx) + (ay-dy)*(ay-dy));
        cd = sqrt ((cx-dx)*(cx-dx) + (cy-dy)*(cy-dy));

        s = (ab+bc+ac) / 2;
        a1 = sqrt (s * (s-ab) * (s-bc) * (s-ac));

        s = (ad+ac+cd) / 2;
        a2 = sqrt (s * (s-ad) * (s-ac) * (s-cd));

        printf ("Case %d: %0.lf %0.lf %0.lf\n",pos,dx,dy,a1+a2);
    }

    return 0;
}

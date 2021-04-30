#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <climits>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <valarray>
#include <iostream>
#include <algorithm>
#define pb push_back
#define mp make_pair
#define si(x) scanf("%d",&x)
#define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define src(x,y) scanf("%d%d",&x,&y)

#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)
#define int64 long long int
#define maxn 110
#define fop freopen("acm.txt", "r", stdin)
#define kas(x) printf("Case %d: ",x)
#define nl printf("\n")

using namespace std;
int main()
{
  // fop;
    int t,kase=0;
    si(t);
    while(t--)
    {
        kase++;
        double x1,y1,r1,x2,y2,r2,d,a,R=0,r=0;


        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        R=r1;
        r=r2;
         double Rsq = R*R, rsq = r*r;
        // cout<<Rsq<<" "<<rsq;
        d = sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );
               // cout<<d;
        double dsq = d*d;
       //cout<<dsq;
        double A = rsq * acos( (dsq+rsq-Rsq)/(2*d*r) );
    //   cout<<A;
        double B = Rsq * acos( (dsq+Rsq-rsq)/(2*d*R) );

        double tm =  (-d+r+R)*(d+r-R)*(d-r+R)*(d+r+R);

        double C = .5 * sqrt(tm);

        a = A+B-C;
        kas(kase);
        printf("%lf\n",a);


    }
    return 0;
}

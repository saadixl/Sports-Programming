using namespace std;

///___________________________________________________///
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <climits>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
///___________________________________________________///
///___________________________________________________///
    #define mp make_pair
    #define pb push_back
    #define sz size()
    #define si(x) scanf("%d",&x)
    #define int64 long long int
    #define src(x,y) scanf("%d%d",&x,&y)
    #define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
    #define fop freopen("acm.txt", "r", stdin)

///___________________________________________________///
int main()
{         //  fop;
            int t;
            si(t);
        for(int i=0; i<t; i++)
        {
            double a,b,c,d;
            cin>>a>>c>>b>>d;
            double area=0,h=0;
            h = sqrt((-a+b+c+d)*(a-b+c+d)*(a-b+c-d)*(a-b-c+d)) / (2*(b-a));
            if(h<0)
            {
                h*= -1;
            }
            area = h*((a+b)/2);

            printf("Case %d: %f\n",i+1,area);
        }

    return 0;
}

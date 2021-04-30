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
#define int64 long long int
#define si(x) scanf("%lld", &x)
#define sv(a,b,c,d) scanf("%lld%lld%lld%lld", &a,&b,&c,&d)

int main()
{
    int64 t,k=1;
    si(t);
    while(t--)
    {
        int64 x1,y1,x2,y2;
        sv(x1,y1,x2,y2);
        int64 T;
        si(T);
        printf("Case %lld:\n",k++);
       while(T--)
       {
           int64 x,y;
           si(x); si(y);

           if( x>x1 && x<x2 && y>y1 && y<y2 )
           {
               printf("Yes\n");
           }
           else
           {
               printf("No\n");
           }

       }

    }
    return 0;
}

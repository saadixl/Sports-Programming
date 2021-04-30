using namespace std;


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

    #define mp make_pair
    #define pb push_back
    #define sz size()
    #define si(x) scanf("%d",&x)
    #define int64 long long int
    #define src(x,y) scanf("%d%d",&x,&y)
    #define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
    #define fop freopen("acm.txt", "r", stdin)
    #define GI ({int _t; scanf("%d", &_t); _t;})
    #define FOR(i, a, b) for (int i=a; i<b; i++)
    #define REP(i, a) FOR(i, 0, a)
  int main()
{
    //fop;
    int test;
    cin>>test;
    for(int c=1;c<=test;c++)
    {
        string number;int64 b;
        cin>>number>>b;
        if(number[0]=='-')number[0]='0';
        if(b<0)b*=(-1);
        int64 rem;
        int64 num;
        for(int i=0;i<number.size();i++)
        {
            if(i==0)num=(((number[i]-'0')%b));
            else num= (num*10)+(number[i]-'0');
            rem=num%b;
            //cout<<"rem "<<rem<<endl;
            num=rem;
        }
        if(rem==0)cout<<"Case "<<c<<": "<<"divisible"<<endl;
        else cout<<"Case "<<c<<": "<<"not divisible"<<endl;;

    }
    return 0;
}

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
#include <iostream>
#include <algorithm>
#define pb push_back
#define mp make_pair
#define si(x) scanf("%d",&x)
#define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define src(x,y) scanf("%d%d",&x,&y)
#define pi(x) printf("%d",x)
#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)
#define int64 long long int
#define maxn 110
#define fop freopen("acm.txt", "r", stdin)
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int bin(int n)
{
    int num = 0;
      int digit=0;

        for(int i=1; i<=n; i*=10)
        {
            int xx=(n/i)%10;
            num+=(pow(2,digit)*xx);
            digit++;

        }
    return num;
}


int main()
{
     //   fop;
    int t;
    si(t);

    rep(i,t)
    {
        int a,b,c,d; char f;
        cin>>a>>f>>b>>f>>c>>f>>d;
        int m,n,o,p;
        cin>>m>>f>>n>>f>>o>>f>>p;
        int flag=0;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
              //  cout<<bin(m)<<" "<<bin(n)<<" "<<bin(o)<<" "<<bin(p)<<endl;


        if(a==bin(m) && b==bin(n) && c==bin(o) && d==bin(p))flag++;

        printf("Case %d: ",i+1);
        if(flag>0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }




    }


}

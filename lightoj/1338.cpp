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
#define kas(x) printf("Case %d: ",x)
#define nl printf("\n")

using namespace std;

int main()
{
  // fop;
    int t,kase=0;
    string h;
    si(t);
    getline(cin,h);
    while(t--)
    {
        kase++;
       string s1,s2;
       getline(cin,s1);
       getline(cin,s2);



       int  size1 = s1.length();
       int  size2 = s2.length();


      //  cout<<size1<<" "<<size2<<endl;

            kas(kase);
            int sum=0;
      //cout<<(int)'t'<<"  "<<(int) tolower('T');

          for(int i=0; i<size1; i++)
          {
              if(isalpha(s1[i]))
              {
              char tm = tolower(s1[i]);

              sum+=(int)tm;

              }
          }
            for(int i=0; i<size2; i++)
          {
              if(isalpha(s2[i]))
              {
              char tm = tolower(s2[i]);
              sum-=(int)tm;
         //     cout<<(int)tm<<" ";
              }
          }

          if(sum==0)
          {
            printf("Yes\n");
          }

            else
            {
                printf("No\n");
            }






    }

    return 0;
}

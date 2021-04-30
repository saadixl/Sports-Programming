#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <functional>
#include <bitset>
#include <iomanip>

#include <ctime>
#include <cassert>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <climits>
#include <cstring>
#include <cstdlib>
using namespace std;


    #define mp make_pair
    #define pb push_back
    #define fop freopen("acm.txt", "r", stdin)


int main()
{  //fop;
int D[600];
    int t;
    scanf("%d",&t);
    for(int i=0; i<t;i++)
    {
        int n,m;
        vector< vector< pair<int,int> > > E;
       E.assign( n, vector< pair<int,int> >() );
        int u,v,w;
        for(int k=0;k<m; k++){
                scanf("%d %d %d",&u,&v,&w);
                E[u].pb( mp(v,w) );
                E[v].pb( mp(u,w) );
        }
        int my;
        scanf("%d",&my);
         int ii,j;
                for(ii=0;ii<n;++ii)
                {
                        D[ii]= INT_MAX;
                }

                queue< int > q;
                D[ my ] = 0;
                q.push( my );

                while( q.empty()==false ){
                        int father = q.front();
                        q.pop();

                        vector< pair<int,int> > cango = E[father];

                        for(ii=0,j=cango.size(); ii<j;++ii ){
                                int child = cango[ii].first;
                                int cosst = max( cango[ii].second , D[father] );
                                if( cosst < D[ child ] ){
                                        D[ child ] = cosst;
                                        q.push( child );
                                }
                        }
                }
                printf("Case %d:\n",i+1);
                for(int p=0; p<n; ++p)
                {
                    if(D[p]>=INT_MAX)
                    {
                        printf("Impossible\n");
                    }
                    else
                    {
                        printf("%d\n",D[p]);
                    }
                }

    }

    return 0;
}

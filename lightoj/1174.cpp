using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<map>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
#define FORI(i,M,N) for(int i=M;i<=(N);i++)
#define MAX_INT numeric_limits<int>::max()/3
int S,D,N,M,cnt[105][105],SUM,U,V;
int main()
{
   // freopen("acm.txt", "r", stdin);
    int cases=1;
    int NO;
    cin>>NO;
    while(NO--)
    {
        cin>>N>>M;
        FOR(i,N+1)
        FOR(j,N+1)
        {
            //pred[i][j]=-1;
            cnt[i][j]=MAX_INT;
        }
        FOR(i,N+1)
        {
            cnt[i][i]=0;
        }
        FOR(i,M)
        {
            cin>>U>>V;
            cnt[U][V]=cnt[V][U]=1;
        }
        FOR(k,N)
        FOR(i,N)
        FOR(j,N)
        {
            if(cnt[i][j]>cnt[i][k]+cnt[k][j])
            {
                cnt[i][j]=cnt[i][k]+cnt[k][j];
            }
        }
        cin>>S>>D;
        int MIN=0;
        MIN=cnt[S][0]+cnt[0][D];
        for(int i=1;i<N;i++)
        {
            MIN=max(MIN,cnt[S][i]+cnt[i][D]);
        }
        printf("Case %d: %d\n",cases++,MIN);
    }
}

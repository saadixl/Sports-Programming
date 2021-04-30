#include<iostream>
using namespace std;
int main()
{
    int t,kase=0;
    cin>>t;
    while(t--)
    {
        int n; kase++;
        cin>>n;
        int a[n+1],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>=0)
            {
              sum+=a[i];
            }

        }
        cout<<"Case "<<kase<<": "<<sum<<endl;

    }
}

#include<stdio.h>
    int main()
    {
        int t,k=0,a,i,n,T,l;
        scanf("%d",&t);
        while(t--)
        {
             T = 2; l =0;
            scanf("%d",&n);
            for(i=0; i<n; i++)
            {
             scanf("%d",&a);

                l+= (a - T + 4)/ 5;
                T = a;
            }

            printf("Case %d: %d\n",++k,l);
        }





        return 0;
    }

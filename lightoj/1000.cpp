#include<stdio.h>

 int main()
 {
     register unsigned int t, k=1;
     scanf("%d",&t);
     while(t--)
     {
       register unsigned int a,b,c;
         scanf("%d%d",&a,&b);
         printf("Case %d: %d\n",k++,a+b);

     }
     return 0;

 }

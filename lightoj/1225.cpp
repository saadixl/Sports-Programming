#include<stdio.h>
int main(){
    long long int num,k=1,p;
 scanf("%lld",&p);

    while(p--){
        scanf("%lld",&num);
        int r,sum=0,temp;
    temp=num;
    while(num){
         r=num%10;
         num=num/10;
         sum=sum*10+r;
    }
    if(temp==sum)
         printf("Case %lld: Yes\n",k++);
    else
          printf("Case %lld: No\n",k++);
    }
    return 0;
}

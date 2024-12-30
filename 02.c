#include<stdio.h>
int main(){
int i,n,od=1;
printf("Enter ()th number:");
scanf("%d",&n);



for ( i = 1; i <= n; i++)
{
   
    printf("%d   ",od);
    od+=2;
}


return 0;
}
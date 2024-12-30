#include<stdio.h>
int main(){
int i,n;
float sc,sum=0.0;
printf("Enter input:");
scanf("%d",&n);



for ( i = 1; i <= n; i++)
{
   scanf("%f",&sc);
   sum=sum+sc;

}
printf("AVG =%.2f",sum/n);

return 0;
}


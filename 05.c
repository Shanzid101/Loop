#include<stdio.h>
int main(){
int x,y;
printf("Enter x and y value:");
scanf("%d %d", &x, &y);

if (x==y)
{
    printf("Reached!");
}
else if (x<y)
{
    while (x<=y)
    {
        
     if (x==y)
     {
       printf(" Reached!");
       break;
     }
     printf("%d, ",x*x);
     x++;
     
    }
    
}

else
    while (x>=y)
    {
        
     if (x==y)
     {
        printf(" Reached!");
        break;
     }
     printf("%d, ",x*x);
     x--;
     
    }
    







return 0;
}
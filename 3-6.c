#include<stdio.h>
int main()
{
int x,y ;
printf("Enter two numbers: ");
scanf("%d%d",&x,&y);
if(x>y)
{
printf("%d is greater than %d",x,y);
}
else
    if(y>x)
     {
      printf("%d is greater than %d",y,x);
     }
    else
     {
      printf("%d and %d are same",x,y);
     }

return 0;
}

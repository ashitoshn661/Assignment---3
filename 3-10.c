#include<stdio.h>
int main()
{
float x,y,a,b;
printf("Enter the cost price of the product: ");
scanf("%f",&x);
printf("Enter the selling price of the product: ");
scanf("%f",&y);
if(x>y)
{
    a=(y/x)*100;
printf("You got a loss of %f percent",a);
}
else
{
    b = (x/y)*100;
printf("You gort a profit of %f percent",b);
}
return 0;
}

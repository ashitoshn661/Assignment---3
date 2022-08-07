#include<stdio.h>
int main()
{
int a,b,c,d ;
printf("Enter value of a: ");
scanf("%d",&a);
printf("Enter value of b: ");
scanf("%d",&b);
printf("Enter value of c: ");
scanf("%d",&c);

d = (b*b)-(4*a*c);
if(d>0)
{
printf("The roots are real and distinct.");
}
else
{
if(d==0)
{
printf("The roots are real and equal.");
}
else
{
printf("The roots are imaginary.");
}
}
return 0;
}

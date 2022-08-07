#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the lengths of the sides of the triangle.");
scanf("%d%d%d",&x,&y,&z);
if((x+y>z) || (x+z>y) || (y+z>x))
{
printf("The triangle is invalid.");
}
else
{
printf("The triangle is valid.");
}
return 0;
}

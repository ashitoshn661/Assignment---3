#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter a number: ");
scanf("%d%d%d",&x,&y,&z);
if(x>y && x>z)
{
printf("%d is the greatest number.",x);
}
else if(y>z)
{
printf("%d is the greatest number.",y);
}
else
{
printf("%d is the greatest number.",z);
}
return 0;
}

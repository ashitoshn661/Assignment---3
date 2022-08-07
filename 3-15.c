#include<stdio.h>
int main()
{
int x;
printf("Enter a number: ");
scanf("%d",&x);
if(x>0)
{
printf("%d is positve.",x);
}
else if(x<0)
{
printf("%d is not positive.",x);
}
else
{
printf("Number is zero.");
}
return 0;
}

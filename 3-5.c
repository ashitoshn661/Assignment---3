#include<stdio.h>
int main()
{
int x,count=0 ;
printf("Enter a number: ");
scanf("%d",&x);
while(x)
{
count++;
x = x/10;
}
if(count==3)
{
printf("The number is three digit.");
}
else
{
printf("The number is not three digit.");
}
return 0;
}

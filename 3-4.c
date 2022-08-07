#include<stdio.h>
int main()
{
int x ;
printf("Enter a number: ");
scanf("%d",&x);
if(x & 1)
{
printf("The number is odd.");
}
else
{
printf("The number is even.");

}

return 0;
}

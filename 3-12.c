#include<stdio.h>
int main()
{
int x;
printf("Enter a alphabet: ");
scanf("%c",&x);
printf("The ASCII code of alphabet is: %d",x);
if(x>=65 && x<=90)
{
printf("\nThe alphabet is in uppercase.");
}
else
printf("\nThe alphabet is in lowercase.");
return 0;
}

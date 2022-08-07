#include<stdio.h>
int main()
{
int x;
printf("Enter a character: ");
scanf("%d",&x);
if(x>=65 && x<=90)
{
printf("It is alphabet in uppercase.");
}
else if(x>=97 && x<=122)
{
printf("It is alphabet in lowercase.");
}
else if(x>=48 && x<=57)
{
printf("It is a digit .");
}
else if((x>=32 && x<=47) || (x>=58 && x<=64)|| (x>=91 && x<=96) || (x>=123 && x<=126))
{
printf("It is a special character.");
}
else
{
printf("Invalid value.");
}
return 0;
}

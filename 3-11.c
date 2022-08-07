#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("Enter marks of English: ");
scanf("%d",&a);
printf("Enter marks of Hindi: ");
scanf("%d",&b);
printf("Enter marks of Geography: ");
scanf("%d",&c);
printf("Enter marks of Science: ");
scanf("%d",&d);
printf("Enter marks of Maths: ");
scanf("%d",&e);
if((a>33) && (b>33) && (c>33) && (d>33) && (e>33))
{
printf("The candidate is passed.");
}
else
{
printf("The candidate is fail.");
}
return 0;
}

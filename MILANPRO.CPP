#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
int i,j,space;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j==1||j==5||(i==3&&j==3)||(i==2&&(j==2||j==4)))
printf("* ");
else
printf("  ");
}
for(space=1;space<=2;space++)
printf("  ");
for(j=1;j<=5;j++)
{
if(i==1||i==5||j==3)
printf("* ");
else
printf("  ");
}
for(space=1;space<=2;space++)
printf("  ");
for(j=1;j<=5;j++)
{
if(j==1||i==5)
printf("* ");
else
printf("  ");
}
for(space=1;space<=2;space++)
printf("  ");
for(j=1;j<=5;j++)
{
if(i==1||j==1||j==5||i==3)
printf("* ");
else
printf("  ");
}
for(space=1;space<=2;space++)
printf("  ");
for(j=1;j<=5;j++)
{
if(j==1||j==5||(i==1&&j==1||i==2&&j==2||i==3&&j==3||i==4&&j==4||i==5&&j==5))
printf("* ");
else
printf("  ");
}
printf("\n");
}
getch();
}
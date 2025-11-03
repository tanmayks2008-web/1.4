#include<stdio.h>
#include<conio.h>

void printeven(intn)
{
if(n>10)
return;
else
{
printf("%d",2*n);
printeven(n+1);

}

}
void main()
{
clrscr();
printf("First 10 even numbers are : \n");
printeven(1);
getch();

}
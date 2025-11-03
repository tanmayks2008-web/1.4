#include<stdio.h>
#include<conio.h>

double power(double a,int b)
{
double result = 1;
int i;
for(i=1;i<=b;i++)
{
result=result*a;
}
return result;
}
void main()
{
double a;
int b;
clrscr();
printf("Enter base (a):");
scanf("%1f",&a);
printf("Enter exponent (b):");
scanf("%d",&b);
printf("\n%.2f raised to %d is : %.2f",a,b,power(a,b));
getch();
}


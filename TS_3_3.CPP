#include<stdio.h>
#include<conio.h>

int factorial(intn)
{
if (n==0||n==1)
return 1;
else
return n*factorial(n-1);
}
void main()
{
int n;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
printf("\nFactorial of %d is : %d",n,factorial(n));
getch();

}

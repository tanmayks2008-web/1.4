#include<stdio.h>
#include<conio.h>
int isleapyear(int year)
{
if((year %400==0)||(year %4==0 && year %100!=0))
return 1;
else
return 0;
}
void main()
{
int year;
clrscr();
printf("\n%d is a leap year.",year);
    else
printf("\n%d is not a leap year",year);
getch();

}

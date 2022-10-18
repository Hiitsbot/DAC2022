#include <cstdio>
#include "Intrest.h"
#include <cmath>

int main(void)
{
double amount;
int period;
int choice;
bool chr;

puts("Enter the Amount : ");
scanf("%lf",&amount);
puts("Enter the Period : ");
scanf("%d",&period);

puts("1. Calculate Simple Interest");
puts("2. Calculate Compund Interest");

puts("Enter Your Choice");

scanf("%d",&choice);

switch(choice)
{
	case 1:
		chr = false;
		break;
	case 2:
		chr = true;
		break;

	default:
		puts("Invalid");

}
Intrest I;

I.SetAmount(amount,period);
printf("The Interest is %lf\n ",I.GetIntrest(chr));

}

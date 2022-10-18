#include "loan.h"
#include <iostream>
#include <cstdio>

using namespace std;

double Compute(Loan& info)
{
return info.GetEMI();
}

int main(void)
{
double principle = 0.0;
float period = 0.0;
float rate = 0.0;
int choice;

cout << "Enter the loan amount : ";
cin >> principle;

cout << "Enter the period : ";
cin >> period;

cout << "Select Type of loan : " <<  endl
     << "1 -> Personal Loan " << endl
    << "2 -> Home Loan" << endl;  

cin >> choice;

PersonalLoan p;

HomeLoan h;

switch (choice)
{
	case 1 :
		p.SetPrinciple(principle);
		p.SetPeriod(period);
		cout << "Your Personal Loan EMI : " << Compute(p)<<endl;
		break;
	case 2:
		h.SetPrinciple(principle);
		h.SetPeriod(period);
		cout << "Your Home Loan EMI : " << Compute(h)<<endl;
		break;

	default:
		cout << "Invalid choice " << endl;
}
}

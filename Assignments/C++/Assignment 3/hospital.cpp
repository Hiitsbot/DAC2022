#include "bill.h"
#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;
double getfinalbill(Patient& pp)
{
	double a = 0;
	a = pp.getBillAmount();
	a = a * 1.18;
	return a;
}


int main (void)
{
 	int id;
 	char name[20];
 	int bed, days;
	double discount;
 	cout << "Enter Patient id/ Name/ Bed type/ no of days/:" << endl;
	cin >> id >> name >> bed >>  days;
	Patient a(id, name, bed, days);
	cout << "total bill= " << a.getBillAmount() << endl;
	cout << "FinalTaxable bill including GST = " << getfinalbill(a) << endl;
	cout << "Discount for Inhouse patient" << endl ;
	cin >> discount;
	InHousePatient b(id, name, bed, days,discount);
	cout << "discounted bill=  " << b.getBillAmount() << endl;
	
	cout << "Final Taxable bill of Inhouse Patient Including GST = " << getfinalbill(b) << endl;
}

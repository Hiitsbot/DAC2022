#include <cstring>
#include <cstdio>
class Patient
	{
	 private :
		int patientId;
		char patientName[20];
		int bedType;
		int noOfDays;
		
	
	 public :

		double amount;
		Patient()
		{

			patientId = 1;
			strcpy(patientName ,"rishi");
			bedType = 1;
			noOfDays = 4;
		}
		Patient(int id ,char name[20],int bed,int days)
		{
			patientId = id;
			strcpy(patientName,name);
			bedType = bed;
			noOfDays = days;
		}
		void setpatientId(int id)
		{
			patientId = id;
		}		
		int getpatientId()
		{
			return patientId;
		}
		void setbedType(int bed)
		{
			bedType = bed;
		}
		int getbedType()
		{
			return bedType;
		}
		void setnoOfDays(int days)
		 {
		 	noOfDays =days;
		 }	
		int setnoOfDays()
		{
			return noOfDays;
		}


		virtual double getBillAmount()
		{ 
			int price=0;
		if(bedType==1)
			 price = 500;
		if(bedType == 2)
			 price=350;
		if(bedType==3)
			 price=200;
/*		else
		{
			price = 0;
		puts("Invalid Selection");
		}*/
		amount = noOfDays * price;
		return amount;
		}


};

class InHousePatient:public Patient
{
	private:
		double discount;

	public : 
		
		InHousePatient(): Patient()
		 {
			 discount = 0;
		 }
		 
		 InHousePatient(int id, char name[20],int bed, int days, double discount):Patient(id, name, bed, days)
		 {
			 this->discount = discount;
		 }
		double getBillAmount()
		{
			double a;
			double amt = 0;
			a=Patient::getBillAmount();	
			amt = a*(1-discount);
	
		return amt;
		}




};

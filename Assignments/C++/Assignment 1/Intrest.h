//ASSIGNMENT NO 2
//Calculation of Simple Interest and Compund Interest
// Header File for Interest
//
#include<cmath>

class Intrest
{
	public :
		Intrest()  // C'Tor
		{
			Amount = 10000;
			Period = 2;
		}
		void SetAmount(double Amount, int Period)  // Accessor
		{ 
			this->Amount = Amount;
			this->Period = Period;
		}
		double GetAmount()
		{
		return Amount;
		}
		void SetAmount(double aa)
		{
		Amount = aa;
		}
		int GetPeriod()
		{
		return Period; 
		}
		void SetPeriod(int pp)
		{
		Period = pp;
		}
		double GetRate()
		{

		double rate = 0;
		
		if(Amount < 10000)
		rate = 8;
		
		if((Amount < 10000) &&( Amount > 50000))
		rate = 9;

		if(Amount < 50000)
		rate = 10;
		
		if(Period > 5)
		return rate += 1;
		
		else 
		return rate;
		
		}
		

	double GetIntrest(bool temp)
	{
		double amp;

	if(temp == false)
	return Amount * GetRate() * Period/100;

	else
	{
	amp = Amount* pow((1+GetRate()/100),Period);
	return amp - Amount;
	}
	}	
	
	
	~Intrest()  //D'Tor
	{
	
	}



	private :
		double Amount;
		int Period;

};

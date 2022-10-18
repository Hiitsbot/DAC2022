class Loan
{
	private:
	       double principle;
       		float period;
 	
	public:
		double GetPrinciple()
		{
			return principle;
		}
		
		void SetPrinciple(double amount)
		{
			 principle = amount;
		}
		
		float GetPeriod()
		{
			return period;
		}
		void SetPeriod(float year)
		{
			period = year;
		}

		virtual float GetRate() = 0;

		double GetEMI()
		{
		float rate = GetRate();
		double first = principle * (1+rate*period/100);
		double second = 12 * period;
		double EMI = first / second;
		return EMI;
		}

};

class PersonalLoan : public Loan
{
	private:
		float rate ;
	public:
		double principle = Loan :: GetPrinciple();
		
		float GetRate()
		{
		return rate = principle <= 500000 ? 15 : 16;
		}

};

class HomeLoan : public Loan
{
	private:
		float rate;
	public:
		double principle = Loan :: GetPrinciple();
		float GetRate()
		{
		return rate = principle <= 2000000 ? 10 : 11;	
		}

};

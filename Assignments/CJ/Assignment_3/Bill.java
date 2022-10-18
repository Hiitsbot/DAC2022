import Hospital.Patient;
import Hospital.InHouse;

class Bill {
	public static void main (String[] args){
	int i = Integer.parseInt(args[0]);	
	int t = Integer.parseInt(args[1]);	
	int d = Integer.parseInt(args[2]);	
	double  di = Double.parseDouble(args[3]);

	Patient p = new Patient(i, t,d);
	InHouse ip = new InHouse(i,t,d,di);

	System.out.printf("Total bill for Ordinary Patient: %.2f%n",p.getBillAmount());
	System.out.printf("Total bill for InHouse Patient: %.2f%n",ip.getBillAmount());
	}
}

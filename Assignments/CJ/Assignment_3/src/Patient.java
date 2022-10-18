package Hospital;

public class Patient {

	private int patientId;
	//private String patientName;
	private int bedType;
	private int noOfDays;
	private static int count;

public Patient(int id, /*String name,*/ int type, int days) {
	patientId = id;
	//patientName = name;
	bedType = type;
	noOfDays = days;
	++count;

}
public Patient() {
	this (101, 1, 8);
}
public int getPatientId() {
	return patientId;
}
public void setPatientId(int id) {
	patientId = id;
}
 /*public String getPatientName(){
	return patientName;
} 
public void setPatientName(String name){
	patientName = name;
} */
public int getBedType() {
	return bedType;
}
public void setBedType(int type) {
	bedType = type;
}
public int getNoOfDays(){
	return noOfDays;
}
public void setNoOfDays(int days) {
	noOfDays = days;

}
public int getPricePerDay(){
	int type = getBedType();
	int price =0;
	switch (type)
	{
		case 1:
		       	price = 500;
			break;
		case 2:
			price = 350;
			break;
		case 3:
			price = 200;
			break;
		default:
			System.out.println("Invalid Bed Type!");
	}
	return price ;

}
public double getBillAmount(){
	double amount = 0;
	amount = noOfDays * getPricePerDay();
	return amount;
}

}


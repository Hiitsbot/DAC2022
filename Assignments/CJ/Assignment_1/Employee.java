class Employee {

	private int eid;
	private int age;
	private int hours;
	private double rate;

	public Employee() {
		eid = 101;
		age = 25;
		hours = 120;
		rate = 200;

	public Employee(int id, int span, int time, double r) {
		eid = id;
		age = span;
		hours = time;
		rate = r;
	}
	public double getNetIncome() {
		double income = 0;
		income = hours * rate;
		income = (hours -180) > 0 ? income += (hours -180) *100 : income;
			return income ;
	}
	public void printEmployee(){
		System.out.printf("Employee id : %d%n",eid);
		System.out.printf("Employee Age : %d%n",age);
		System.out.printf("Working Hours :%d%n",hours);
		System.out.printf("Rate :%.2f%n",rate);
	}
}
	

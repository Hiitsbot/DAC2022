class Income {
	public static void main(String[] args) {
		int i = Integer.parseInt(args[0]);
		int a = Integer.parseInt(args[1]);
		int h = Integer.parseInt(args[2]);
		double rr  = Double.parseDouble(args[3]);
		
		Employee emp = new Employee(i,a,h,rr);
		emp.printEmployee();
		System.out.printf("Total Income :%.2f%n",emp.getNetIncome());
	}
}

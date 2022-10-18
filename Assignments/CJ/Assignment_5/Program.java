import series.*;

	 class Program{

		 public static double compute(Sequence seq, int count){
			 if(seq instanceof Resetable r){
				 r.Reset();
			 }
			 return seq.Sum(count)/count;
		 }

	public static void main(String[] args){
		Sequence seq1 = calculation.linear();
		Sequence seq2 = calculation.power();

		System.out.printf("Linear Sequence Average: %.2f%n",compute(seq1,8));
		System.out.printf("Power Sequence Average: %.2f%n",compute(seq2,8));

	}
	 }

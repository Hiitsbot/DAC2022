package series;

final  class Linear extends Sequence {

	private double step;

	public Linear() {
	current = 7;
	step = 5;
	}

	public double Next() {
	double term = current;
	current += step;
	return term;
	}
}

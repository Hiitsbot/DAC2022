package series;

final class Power extends Sequence implements Resetable{

	private double factor;

	public Power(){
	current = 1;
	factor = 3;
	}

	public double Next(){
	double term = current;
	current *= factor;
	return term;
	}

	public void Reset(){
	current = 1;
	}
}
